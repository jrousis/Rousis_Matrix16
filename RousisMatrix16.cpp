/* Library to interface with the Texas Instruments TLC5916 and TLC5917
   8-Channel Constant-Current LED Sink Drivers.
*/
/* Version History
   1.0.0    08/03/2018  A.T.   Original
   1.1.0    09/25/2020  A.T.   Support more daisy-chained displays.
                               Fixed array bound issue in previous
                               un-numbered file version.
   1.2.0    01/17/2021  A.T.   Add support for special mode.
*/

//#include <analogWrite.h>
#if defined(ESP32)
#include <analogWrite.h>
#endif

#include "RousisMatrix16.h"

RousisMatrix16::RousisMatrix16(uint8_t pix_x, uint8_t pix_y, byte SCLK, byte SLE, byte SDI, byte OE,  byte CLK, byte LE ) {
	//buffer = (uint8_t*) malloc(pix_x);
  SDI_pin = SDI;
  CLK_pin = CLK;
  LE_pin  = LE;
  SCLK_pin = SCLK;
  SLE_pin  = SLE;
  OE_pin  = OE;
	pixels_x = pix_x;
	pixels_y = pix_y;
	width = pix_x;
	height = pix_y;
	
  //digitalWrite(OE_pin, HIGH);
  enableState = DISABLE;
  //pinMode(OE_pin, OUTPUT);
  
//#if defined(ESP32)
analogWrite(OE_pin, 0, 1000, 8, 0);
//#else
//  pinMode(OE_pin, OUTPUT);
//  digitalWrite(OE_pin, LOW);
//#endif

  init();
}
/*
RousisMatrix16::RousisMatrix16(uint8_t pix_x, uint8_t pix_y, byte SCLK, byte SLE, byte SDI,  byte CLK, byte LE) {
  SDI_pin = SDI;
  CLK_pin = CLK;
  LE_pin  = LE;
  OE_pin  = NO_PIN;
	pixels_x = pix_x;
	pixels_y = pix_y;

  init();
}*/

void RousisMatrix16::init() {
  if (numchips < MINCHIPS) numchips = MINCHIPS;
  if (numchips > MAXCHIPS) numchips = MAXCHIPS;

  pinMode(SDI_pin, OUTPUT);
  pinMode(CLK_pin, OUTPUT);
  pinMode(SCLK_pin, OUTPUT);
  digitalWrite(LE_pin, LOW);
  digitalWrite(SLE_pin, LOW);
  pinMode(LE_pin, OUTPUT);
  pinMode(SLE_pin, OUTPUT);
  
  clearDisplay();
/*  for (byte i = 0; i <sizeof(buffer) ; i++) {
	  buffer[i] = 0;
  } */
  /*
  buffer[0] = 0xAA;buffer[5] = 0x55;
  buffer[12] = 0xAA;buffer[17] = 0x55;
  buffer[72] = 0xAA;buffer[77] = 0x55;
  buffer[84] = 0xAA;buffer[89] = 0x55; */
/*  for (byte i = 0; i <sizeof(buffer) ; i++) {
	  buffer[1] = 0x55;
  }*/
	
}

void RousisMatrix16::selectFont(const uint8_t* font)
{
	this->font = (uint8_t *)font;
}

void RousisMatrix16::displayBrightness(byte b) {
	if (OE_pin != NO_PIN) {
		b = 255 - b;
		analogWrite(OE_pin, b);
		/*Serial.print("Printed brightness: ");
		Serial.println(b, DEC);
		Serial.print("To the pin: ");
		Serial.println(OE_pin, DEC);*/
	}
	else {
		Serial.println("No set brightness...");
	}
}

int RousisMatrix16::drawChar(const int x, const int y, const char letter)
{
	DMDGraphicsMode mode = GRAPHICS_OFF;
	//if(!font)
	font = this->font;
	if(x >= (int)width || y >= height)
	return -1;

	struct FontHeader header;
	memcpy_P(&header, (void*)font, sizeof(FontHeader));

	DMDGraphicsMode invertedMode = inverseMode(mode);
	//DMDGraphicsMode invertedMode = GRAPHICS_ON;

	char c = letter;
	/*if (c == ' ') {
		int charWide = charWidth(' ');
		this->drawFilledBox(x, y, x + charWide, y + header.height, mode);
		return charWide;
	}*/
	uint8_t width = 0;
	uint8_t bytes = (header.height + 7) / 8;
	uint16_t index = 0;

	if (c < header.firstChar || c >= (header.firstChar + header.charCount))
	return 0;
	c -= header.firstChar;

	if (header.size == 0) {
		// zero length is flag indicating fixed width font (array does not contain width data entries)
		width = header.fixedWidth;
		index = sizeof(FontHeader) + c * bytes * width;
		} else {
		// variable width font, read width data, to get the index
		for (uint8_t i = 0; i < c; i++) {
			index += pgm_read_byte(font + sizeof(FontHeader) + i);
		}
		index = index * bytes + header.charCount + sizeof(FontHeader);
		width = pgm_read_byte(font + sizeof(FontHeader) + c);
	}
	if (x < -width || y < -header.height)
	return width;
	
	bool inverse = false;
	if (mode == GRAPHICS_INVERSE) {
		inverse = true;
	}

	// last but not least, draw the character
	for (uint8_t j = 0; j < width; j++) { // Width
		for (uint8_t i = bytes - 1; i < 254; i--) { // Vertical Bytes
			uint8_t data = pgm_read_byte(font + index + j + (i * width));
			int offset = (i * 8);
			if ((i == bytes - 1) && bytes > 1) {
				offset = header.height - 8;
			}
			for (uint8_t k = 0; k < 8; k++) { // Vertical bits
				if ((offset+k >= i*8) && (offset+k <= header.height)) {
					if (data & (1 << k)) {
						if(inverse) {
							writePixel(x + j, y + offset + k, GRAPHICS_OFF);
							} else {
							writePixel(x + j, y + offset + k, GRAPHICS_ON);
						}
						} else {
						if(inverse) {
							writePixel(x + j, y + offset + k, GRAPHICS_ON);
							} else {
							writePixel(x + j, y + offset + k, GRAPHICS_OFF);
						}
					}
				}
			}
		}
	}
	return width;
}


//Find the width of a character
int RousisMatrix16::charWidth(const char letter)
{
	struct FontHeader header;
	memcpy_P(&header, (void*)this->font, sizeof(FontHeader));

	font = this->font;

	if(letter == ' ') {
		// if the letter is a space then return the font's fixedWidth
		// (set as the 'width' field in New Font dialog in GLCDCreator.)
		return header.fixedWidth;
	}

	if((uint8_t)letter < header.firstChar || (uint8_t)letter >= (header.firstChar + header.charCount)) {
		return 0;
	}

	if(header.size == 0) {
		// zero length is flag indicating fixed width font (array does not contain width data entries)
		return header.fixedWidth;
	}

	// variable width font, read width data for character
	return pgm_read_byte(this->font + sizeof(FontHeader) + letter - header.firstChar);
}

void RousisMatrix16::test_buffer(){
	// Memory has been successfully allocated
	int x = (sizeof(buffer))/pixels_y;
	Serial.print("Rows are: ");
	Serial.println(x);
	
	Serial.print("Memory buffer size is: ");
	Serial.print(sizeof(buffer));
	Serial.println(" bytes");
	
	for (int i = 0; i < sizeof(buffer); i++) {
		
		Serial.print(buffer[i],HEX);
		Serial.print(',');
		x--;
		if (!x){
			Serial.println(" ");
			x = (sizeof(buffer))/pixels_y;
		}
		
	}
	Serial.println(" ");
	Serial.println("-----------------");
}

void RousisMatrix16::drawLine(int x1, int y1, int x2, int y2, byte mode)
{
	int dy = y2 - y1;
	int dx = x2 - x1;
	int stepx, stepy;

	if (dy < 0) {
		dy = -dy;
		stepy = -1;
		} else {
		stepy = 1;
	}
	if (dx < 0) {
		dx = -dx;
		stepx = -1;
		} else {
		stepx = 1;
	}
	dy = dy * 2;
	dx = dx * 2;

	writePixel(x1, y1, mode);
	if (dx > dy) {
		int fraction = dy - (dx / 2);	// same as 2*dy - dx
		while (x1 != x2) {
			if (fraction >= 0) {
				y1 += stepy;
				fraction -= dx;	// same as fraction -= 2*dx
			}
			x1 += stepx;
			fraction += dy;	// same as fraction -= 2*dy
			writePixel(x1, y1, mode);
		}
		} else {
		int fraction = dx - (dy / 2);
		while (y1 != y2) {
			if (fraction >= 0) {
				x1 += stepx;
				fraction -= dy;
			}
			y1 += stepy;
			fraction += dx;
			writePixel(x1, y1, mode);
		}
	}
}

void RousisMatrix16::drawBox(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, DMDGraphicsMode mode)
{
	drawLine(x1, y1, x2, y1, mode);
	drawLine(x2, y1, x2, y2, mode);
	drawLine(x2, y2, x1, y2, mode);
	drawLine(x1, y2, x1, y1, mode);
}

void RousisMatrix16::drawFilledBox(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, DMDGraphicsMode mode)
{
	for (unsigned int b = x1; b <= x2; b++) {
		drawLine(b, y1, b, y2, mode);
	}
}

/*
void RousisMatrix16::scrollY(int scrollBy) {
	if(abs(scrollBy) >= height) { // scrolling over the whole display
		// scrolling will erase everything
		drawFilledBox(0, 0, width-1, height-1, GRAPHICS_OFF);
	}
	else if(scrollBy < 0) { // Scroll up
		movePixels(0, -scrollBy, 0, 0, width, height + scrollBy);
		drawFilledBox(0, height+scrollBy, width, height, GRAPHICS_OFF);
	}
	else if(scrollBy > 0) { // Scroll down
		movePixels(0, 0, 0, scrollBy, width, height - scrollBy);
		drawFilledBox(0, 0, width, scrollBy, GRAPHICS_OFF);
	}
}
*/
void RousisMatrix16::writePixel(unsigned int bX, unsigned int bY, byte bPixel)
{
	unsigned int RAMPointer;

	if (bX >= (pixels_x) || bY >= (pixels_y)) {
		return;
	}
	if (pixels_y){
		RAMPointer = (sizeof(buffer)/pixels_y) * bY;
	}
	RAMPointer += bX / 8; //find the byte point 
	//set pointer to DMD RAM byte to be modified
	byte lookup = bPixelLookupTable[bX & 0x07];

	if (bPixel == false)
	buffer[RAMPointer] &= ~lookup;	// zero bit is pixel off
	else
	buffer[RAMPointer] |= lookup;	// one bit is pixel ïn
}

void RousisMatrix16::displayEnable() {
  if (OE_pin != NO_PIN) {
    digitalWrite(OE_pin, LOW);
    enableState = ENABLE;
  }
}

void RousisMatrix16::displayDisable() {
  if (OE_pin != NO_PIN) {
    digitalWrite(OE_pin, HIGH);
    enableState = DISABLE;
  }
}

void RousisMatrix16::drawString(int bX, int bY, const char* bChars, byte length, byte space)
{
	if (bX >= width || bY >= height)
		return;

	int strWidth = 0;

	for (int i = 0; i < length; i++) {

		int charWide = this->drawChar(bX + strWidth, bY, bChars[i]);
		if (charWide > 0) {
			strWidth += charWide;
			this->drawLine(bX + strWidth, bY, bX + strWidth, bY + height, 0);
			strWidth = strWidth + space; // the last number is the space column
		}
		else if (charWide < 0) {
			return;
		}
		if ((bX + strWidth) >= width) return;		
	}		
}

void RousisMatrix16::scrollingString(int bX, int bY, const char* bChars, unsigned int length, byte space, byte speed)
{
	if (bX >= width || bY >= height)
		return;

	unsigned int slide_char = length;
	int scroll_int = width;
	unsigned int scroll_len = width;
	while (scroll_len > 0)
	{		
		ScanSynch = 1;
		while (ScanSynch) {
			delayMicroseconds(20);
		}
		drawString(scroll_int--, bY, bChars, length, space);
		
		//delay(14);
		delay(speed * 5);
		scroll_len--;		

		//Serial.print(" Loop1:");
		//Serial.print(scroll_len);
	}
	//Serial.println(" _//");

	for (size_t i = 0; i < length; i++)
	{
		scroll_len = charWidth(bChars[i]) + space; ///???
		scroll_int = 0;
		//Serial.print("Chr:");
		//Serial.print(bChars[i]);
		while (scroll_len)
		{			
			ScanSynch = 1;
			while (ScanSynch) {
				delayMicroseconds(20);
				//Serial.print(".");
			}	
			/*if (bChars[i] == 0x20)
			{
				Serial.print("Scrole: ");
				Serial.print(scroll_int); Serial.print(" ");
				Serial.print(bY); Serial.print(" ");
				Serial.print(bChars); Serial.print(" ");
				Serial.print(length - i); Serial.print(" ");
				Serial.print(space); Serial.println();
				Serial.print("i = "); Serial.println(i);
			}*/
			drawString(scroll_int--, bY, bChars + i, length - i, space);
						
			//Serial.print(" Loop2:");
			//delay(14);
			delay(speed * 5);
			scroll_len--;
			//Serial.print(scroll_len);
		}
		//Serial.println(" /-");
	}
}


void RousisMatrix16::scanDisplay() {
	byte i;
	for (i = 0; i < 8; i++) {
		digitalWrite(SDI_pin, 0);
		toggleSCLK();
	}
	toggleSLE();

	byte temp1 = (ScanByte & 0xf0) >> 1;
	byte temp2 = (ScanByte & 0x0f) << 1;
	if (temp1 == 0b00001000 || temp1 == 0){temp1=0b10000000;}
	if (temp2 == 0b00010000 || temp2 == 0){temp2=0b00000001;}
	ScanByte = temp1 | temp2;
	
	temp2 = (ScanByte & 0x0f);
	unsigned int buf_row;
	unsigned int buf_row_b;
	/*
	Serial.print("Row: ");
	Serial.print(temp2, HEX);
	Serial.print(" = ");
	*/
	switch (temp2) {
		case 0x01:
			buf_row = 0;
			buf_row_b = pixels_x-(pixels_x/8);
		break;
		case 0x02:
			buf_row = pixels_x/8;
			buf_row_b = pixels_x-((pixels_x/8)*2);
		break;
		case 0x04:
			buf_row = (pixels_x/8)*2;
			buf_row_b = pixels_x-((pixels_x/8)*3);
		break;
		case 0x08:
			buf_row = (pixels_x/8)*3;
			buf_row_b = pixels_x-((pixels_x/8)*4);
		break;
		default:
			buf_row = 0;
			buf_row_b = pixels_x-(pixels_x/8);
		break;
	}
	
	byte temp3;
	byte temp4;
	byte byte_count = (pixels_x / 8) + 1;
		for (byte x = (pixels_x/16); x > 0; x--) {
			byte_count = byte_count -2;
			temp1 = buffer[buf_row + byte_count];
			temp2 = buffer[buf_row_b + byte_count];
			temp3 = buffer[buf_row + byte_count + pixels_x];
			temp4 = buffer[buf_row_b + byte_count + pixels_x];
			
		/*	Serial.print(temp1, DEC);	
			Serial.print("-");
			Serial.println(temp2, DEC); */	
			byte a;				

			for (a = 0; a < 2; a++)
			{
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp4 & 0x01));
					temp4 = (temp4 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp3 & 0x01));
					temp3 = (temp3 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp4 & 0x01));
					temp4 = (temp4 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp3 & 0x01));
					temp3 = (temp3 >> 1);
					toggleCLK();
				}
				temp3 = buffer[buf_row + (byte_count -1) + pixels_x];
				temp4 = buffer[buf_row_b + (byte_count - 1) + pixels_x];
			}

			for (a = 0; a < 2; a++)
			{
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp2 & 0x01));
					temp2 = (temp2 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp1 & 0x01));
					temp1 = (temp1 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp2 & 0x01));
					temp2 = (temp2 >> 1);
					toggleCLK();
				}
				for (i = 0; i < 4; i++) {
					digitalWrite(SDI_pin, (temp1 & 0x01));
					temp1 = (temp1 >> 1);
					toggleCLK();
				}
				
				temp1 = buffer[buf_row + (byte_count - 1)];
				temp2 = buffer[buf_row_b + (byte_count - 1)];
			}
		}
	//Serial.println("---------------------");
	toggleLE();
	
	
	temp1 = ScanByte;
	for (i = 0; i < 8; i++) {
		digitalWrite(SDI_pin, (temp1 & 0x01));
		temp1 = (temp1 >> 1);
		toggleSCLK();
	}
	toggleSLE();
	if (ScanByte == 0b00011000) {
		ScanSynch = 0; 
	}
	
}

void RousisMatrix16::clearDisplay() {
	memset(buffer,0,sizeof(buffer));
/*
	for (byte i = 0; i < sizeof(buffer); i++) {
		buffer[i]=0;
	}
	*/
}

void RousisMatrix16::write(byte n) {
	//This is converted by Rousis James!~
  digitalWrite(SDI_pin, n & 0x80);	//DOT
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x10);	//A
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x20);	//B
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x01);	//C
  toggleCLK();
  
  digitalWrite(SDI_pin, n & 0x04);	//E
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x40);	//G
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x08);	//F
  toggleCLK();
  digitalWrite(SDI_pin, n & 0x02);	//D
  toggleCLK();
  
}
/*

// Original...
void Rousis7segment::write(byte n) {
	digitalWrite(SDI_pin, n & 0x01);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x02);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x04);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x08);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x10);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x20);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x40);
	toggleCLK();
	digitalWrite(SDI_pin, n & 0x80);
	toggleCLK();
}
 */

void RousisMatrix16::toggleLE() {
  // TLC5916 minimum LE pulse time is 20 ns, so don't need to worry about
  // putting in a hard-coded delay.
  digitalWrite(LE_pin, HIGH);
  digitalWrite(LE_pin, LOW);
}

void RousisMatrix16::toggleCLK() {
  // TLC5916 minimum CLK pulse time is 20 ns, so don't need to worry about
  // putting in a hard-coded delay.
  digitalWrite(CLK_pin, HIGH);
  digitalWrite(CLK_pin, LOW);
}

void RousisMatrix16::toggleSLE() {
	// TLC5916 minimum LE pulse time is 20 ns, so don't need to worry about
	// putting in a hard-coded delay.
	digitalWrite(SLE_pin, HIGH);
	digitalWrite(SLE_pin, LOW);
}

void RousisMatrix16::toggleSCLK() {
	// TLC5916 minimum CLK pulse time is 20 ns, so don't need to worry about
	// putting in a hard-coded delay.
	digitalWrite(SCLK_pin, HIGH);
	digitalWrite(SCLK_pin, LOW);
}
