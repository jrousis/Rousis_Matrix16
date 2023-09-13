/* Library to interface with the Texas Instruments TLC5916 and TLC5917
   8-Channel Constant-Current LED Sink Drivers

*/
/* Version History
   1.0.0    08/03/2018  A.T.   Original
   1.1.0    09/25/2020  A.T.   Support more daisy-chained digits.
   1.2.0    01/17/2021  A.T.   Add support for special mode.

*/
#ifndef RousisMatrix16_LIBRARY
#define RousisMatrix16_LIBRARY

#include <Arduino.h>

//display screen (and subscreen) sizing
#define PIXELS_ACROSS 128      //pixels across x axis (base 2 size expected)
#define PIXELS_DOWN	16      //pixels down y axis
#define BITSPERPIXEL 1      //1 bit per pixel, use more bits to allow for pwm screen brightness control
#define BUFFER_SIZE_BYTES	((PIXELS_ACROSS*BITSPERPIXEL/8)*PIXELS_DOWN)

// Font Indices
#define FONT_LENGTH			0
#define FONT_FIXED_WIDTH	2
#define FONT_HEIGHT			3
#define FONT_FIRST_CHAR		4
#define FONT_CHAR_COUNT 	5
#define FONT_WIDTH_TABLE	6

static byte bPixelLookupTable[8] =
{
	0x80,   //0, bit 7
	0x40,   //1, bit 6
	0x20,   //2. bit 5
	0x10,   //3, bit 4
	0x08,   //4, bit 3
	0x04,   //5, bit 2
	0x02,   //6, bit 1
	0x01    //7, bit 0
};

enum DMDTestPattern {
	PATTERN_ALT_0,
	PATTERN_ALT_1,
	PATTERN_STRIPE_0,
	PATTERN_STRIPE_1
};

//Pixel/graphics writing modes
enum DMDGraphicsMode {
	GRAPHICS_OFF, // unconditionally off (pixel turns off)
	GRAPHICS_ON, //unconditionally on (pixel turns on, the usual default for drawing)
	GRAPHICS_INVERSE, // on if was going to set to off
	GRAPHICS_OR, // add to pixels already on
	GRAPHICS_NOR, // subtract from pixels already on, don't turn any new ones on
	GRAPHICS_XOR, // swap on/off state of pixels
	GRAPHICS_NOOP // No-Op, ie don't actually change anything
};

inline static DMDGraphicsMode inverseMode(DMDGraphicsMode mode) {
	switch(mode) {
		case GRAPHICS_ON:
		return GRAPHICS_OFF;
		case GRAPHICS_INVERSE:
		return GRAPHICS_ON;
		default:
		return GRAPHICS_NOOP;
	}
};


class RousisMatrix16 {
public:
  enum {NO_PIN=255};

  byte ScanSynch = 0;

  RousisMatrix16(uint8_t pix_x, uint8_t pix_y, byte SDI, byte CLK, byte LE, byte SCLK, byte SLE, byte OE);
 // RousisMatrix16(uint8_t pix_x, uint8_t pix_y, byte SDI, byte CLK, byte LE, byte SCLK, byte SLE);
  void selectFont(const uint8_t* font);
  void displayBrightness(byte b);
  int drawChar(const int x, const int y, const char letter);
  int charWidth(const char letter);
  void test_buffer();
  void drawLine(int x1, int y1, int x2, int y2, byte mode);
  void drawBox(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, DMDGraphicsMode mode);
  void drawFilledBox(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, DMDGraphicsMode mode);
  void writePixel(unsigned int bX, unsigned int bY, byte bPixel);
  void displayEnable();
  void displayDisable();
  void drawString( int bX, int bY, const char* bChars, byte length, byte space);
  void scrollingString(int bX, int bY, const char* bChars, unsigned int length, byte space, byte speed);
  //Select a text font
  //Draw a single character
  int drawChar(const int bX, const int bY, const unsigned char letter, byte bGraphicsMode);
  //Find the width of a character
  //int charWidth(const unsigned char letter);
  void scanDisplay(); 
  void clearDisplay(); 

private:
  enum POWER_MODE {WAKEUP = 1, SHUTDOWN = 0};
  enum {NO_DATA_COMING = 0, DATA_COMING = 1};
  enum {MINCHIPS = 1, MAXCHIPS = 254};
  byte SDI_pin, CLK_pin, LE_pin, SCLK_pin, SLE_pin,OE_pin, numchips;
  //uint8_t *buffer;
  enum {ENABLE = 1, DISABLE = 0};
	  
  uint8_t buffer[BUFFER_SIZE_BYTES] = {}; //[96]={};
  byte enableState;
  byte ScanByte;
  byte pixels_x = 256; // 96;
  byte pixels_y = 8;
  int width;
  int height;

  //Marquee values
  char marqueeText[256];
  byte marqueeLength;
  int marqueeWidth;
  int marqueeHeight;
  int marqueeOffsetX;
  int marqueeOffsetY;

  uint8_t *font;
  void write(byte n);
  void toggleLE();
  void toggleCLK();
  void toggleSLE();
  void toggleSCLK();
  void init();
};

  // Conversion of letters to LED segments.
  // 0x00 is a blank character and is used for unsupported values.
  // Save memory by not defining first 32 ascii characters, since they
  // are all control characters
  
  struct FontHeader {
	  uint16_t size;
	  uint8_t fixedWidth;
	  uint8_t height;
	  uint8_t firstChar;
	  uint8_t charCount;
  };


#endif
