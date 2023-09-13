/*
 *
 * System5x7
 *
 *
 * File Name           : System5x7.h
 * Date                : 28 Oct 2008
 * Font size in bytes  : 470
 * Font width          : 5
 * Font height         : 7
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 94
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef SYSTEM5x7_H
#define SYSTEM5x7_H

#define SYSTEM5x7_WIDTH 5
#define SYSTEM5x7_HEIGHT 7

/*
 * added to allow fontname to match header file name.
 * as well as keep the old name for backward compability
 */

#define SystemFont5x7_greek System5x7

static const uint8_t System5x7[] PROGMEM = {
    0x0, 0x0, // size of zero indicates fixed width font, actual length is width * height
    0x05, // width
    0x07, // height
    0x20, // first char
    0xEB, // char count
    //0x60, // char count

    // Fixed width; char width table not used !!!!

    // font data
    0x00, 0x00, 0x00, 0x00, 0x00,// (space)
	0x00, 0x00, 0x5F, 0x00, 0x00,// !
	0x00, 0x07, 0x00, 0x07, 0x00,// "
	0x14, 0x7F, 0x14, 0x7F, 0x14,// #
	0x24, 0x2A, 0x7F, 0x2A, 0x12,// $
	0x23, 0x13, 0x08, 0x64, 0x62,// %
	0x36, 0x49, 0x55, 0x22, 0x50,// &
	0x00, 0x05, 0x03, 0x00, 0x00,// '
	0x00, 0x1C, 0x22, 0x41, 0x00,// (
	0x00, 0x41, 0x22, 0x1C, 0x00,// )
	0x08, 0x2A, 0x1C, 0x2A, 0x08,// *
	0x08, 0x08, 0x3E, 0x08, 0x08,// +
	0x00, 0x50, 0x30, 0x00, 0x00,// ,
	0x08, 0x08, 0x08, 0x08, 0x08,// -
	0x00, 0x60, 0x60, 0x00, 0x00,// .
	0x20, 0x10, 0x08, 0x04, 0x02,// /
	0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
	0x00, 0x42, 0x7F, 0x40, 0x00,// 1
	0x42, 0x61, 0x51, 0x49, 0x46,// 2
	0x21, 0x41, 0x45, 0x4B, 0x31,// 3
	0x18, 0x14, 0x12, 0x7F, 0x10,// 4
	0x27, 0x45, 0x45, 0x45, 0x39,// 5
	0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
	0x01, 0x71, 0x09, 0x05, 0x03,// 7
	0x36, 0x49, 0x49, 0x49, 0x36,// 8
	0x06, 0x49, 0x49, 0x29, 0x1E,// 9
	0x00, 0x36, 0x36, 0x00, 0x00,// :
	0x00, 0x56, 0x36, 0x00, 0x00,// ;
	0x00, 0x08, 0x14, 0x22, 0x41,// <
	0x14, 0x14, 0x14, 0x14, 0x14,// =
	0x41, 0x22, 0x14, 0x08, 0x00,// >
	0x02, 0x01, 0x51, 0x09, 0x06,// ?
	0x32, 0x49, 0x79, 0x41, 0x3E,// @
	0x7E, 0x11, 0x11, 0x11, 0x7E,// A
	0x7F, 0x49, 0x49, 0x49, 0x36,// B
	0x3E, 0x41, 0x41, 0x41, 0x22,// C
	0x7F, 0x41, 0x41, 0x22, 0x1C,// D
	0x7F, 0x49, 0x49, 0x49, 0x41,// E
	0x7F, 0x09, 0x09, 0x01, 0x01,// F
	0x3E, 0x41, 0x41, 0x51, 0x32,// G
	0x7F, 0x08, 0x08, 0x08, 0x7F,// H
	0x00, 0x41, 0x7F, 0x41, 0x00,// I
	0x20, 0x40, 0x41, 0x3F, 0x01,// J
	0x7F, 0x08, 0x14, 0x22, 0x41,// K
	0x7F, 0x40, 0x40, 0x40, 0x40,// L
	0x7F, 0x02, 0x04, 0x02, 0x7F,// M
	0x7F, 0x04, 0x08, 0x10, 0x7F,// N
	0x3E, 0x41, 0x41, 0x41, 0x3E,// O
	0x7F, 0x09, 0x09, 0x09, 0x06,// P
	0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
	0x7F, 0x09, 0x19, 0x29, 0x46,// R
	0x46, 0x49, 0x49, 0x49, 0x31,// S
	0x01, 0x01, 0x7F, 0x01, 0x01,// T
	0x3F, 0x40, 0x40, 0x40, 0x3F,// U
	0x1F, 0x20, 0x40, 0x20, 0x1F,// V
	0x7F, 0x20, 0x18, 0x20, 0x7F,// W
	0x63, 0x14, 0x08, 0x14, 0x63,// X
	0x03, 0x04, 0x78, 0x04, 0x03,// Y
	0x61, 0x51, 0x49, 0x45, 0x43,// Z
	0x00, 0x00, 0x7F, 0x41, 0x41,// [
	0x02, 0x04, 0x08, 0x10, 0x20,// "\"
	0x41, 0x41, 0x7F, 0x00, 0x00,// ]
	0x04, 0x02, 0x01, 0x02, 0x04,// ^
	0x40, 0x40, 0x40, 0x40, 0x40,// _
	0x00, 0x01, 0x02, 0x04, 0x00,// `
	0x20, 0x54, 0x54, 0x54, 0x78,// a
	0x7F, 0x48, 0x44, 0x44, 0x38,// b
	0x38, 0x44, 0x44, 0x44, 0x20,// c
	0x38, 0x44, 0x44, 0x48, 0x7F,// d
	0x38, 0x54, 0x54, 0x54, 0x18,// e
	0x08, 0x7E, 0x09, 0x01, 0x02,// f
	0x08, 0x14, 0x54, 0x54, 0x3C,// g
	0x7F, 0x08, 0x04, 0x04, 0x78,// h
	0x00, 0x44, 0x7D, 0x40, 0x00,// i
	0x20, 0x40, 0x44, 0x3D, 0x00,// j
	0x00, 0x7F, 0x10, 0x28, 0x44,// k
	0x00, 0x41, 0x7F, 0x40, 0x00,// l
	0x7C, 0x04, 0x18, 0x04, 0x78,// m
	0x7C, 0x08, 0x04, 0x04, 0x78,// n
	0x38, 0x44, 0x44, 0x44, 0x38,// o
	0x7C, 0x14, 0x14, 0x14, 0x08,// p
	0x08, 0x14, 0x14, 0x18, 0x7C,// q
	0x7C, 0x08, 0x04, 0x04, 0x08,// r
	0x48, 0x54, 0x54, 0x54, 0x20,// s
	0x04, 0x3F, 0x44, 0x40, 0x20,// t
	0x3C, 0x40, 0x40, 0x20, 0x7C,// u
	0x1C, 0x20, 0x40, 0x20, 0x1C,// v
	0x3C, 0x40, 0x30, 0x40, 0x3C,// w
	0x44, 0x28, 0x10, 0x28, 0x44,// x
	0x0C, 0x50, 0x50, 0x50, 0x3C,// y
	0x44, 0x64, 0x54, 0x4C, 0x44,// z
	0x00, 0x08, 0x36, 0x41, 0x00,// {
	0x00, 0x00, 0x7F, 0x00, 0x00,// |
	0x00, 0x41, 0x36, 0x08, 0x00,// }
	0x08, 0x08, 0x2A, 0x1C, 0x08,// ->
	0x08, 0x1C, 0x2A, 0x08, 0x08, // <-

        0x28, 0x7E, 0xA9, 0xA9, 0x81, // 128
        0x00, 0x00, 0x00, 0x00, 0x00, // 129
        0x00, 0x00, 0x00, 0x00, 0x00, // 130
        0x00, 0x00, 0x00, 0x00, 0x00, // 131
        0x00, 0x00, 0x00, 0x00, 0x00, // 132
        0x00, 0x00, 0x00, 0x00, 0x00, // 133
        0x00, 0x00, 0x00, 0x00, 0x00, // 134
        0x00, 0x00, 0x00, 0x00, 0x00, // 135
        0x00, 0x00, 0x00, 0x00, 0x00, // 136
        0x00, 0x00, 0x00, 0x00, 0x00, // 137
        0x00, 0x00, 0x00, 0x00, 0x00, // 138
        0x00, 0x00, 0x00, 0x00, 0x00, // 139
        0x00, 0x00, 0x00, 0x00, 0x00, // 140
        0x00, 0x00, 0x00, 0x00, 0x00, // 141
        0x00, 0x00, 0x00, 0x00, 0x00, // 142
        0x00, 0x00, 0x00, 0x00, 0x00, // 143
        0x00, 0x00, 0x00, 0x00, 0x00, // 144
        0x00, 0x00, 0x00, 0x00, 0x00, // 145
        0x00, 0x00, 0x00, 0x00, 0x00, // 146
        0x00, 0x00, 0x00, 0x00, 0x00, // 147
        0x00, 0x00, 0x00, 0x00, 0x00, // 148
        0x00, 0x00, 0x00, 0x00, 0x00, // 149
        0x00, 0x00, 0x00, 0x00, 0x00, // 150
        0x00, 0x00, 0x00, 0x00, 0x00, // 151
        0x00, 0x00, 0x00, 0x00, 0x00, // 152
        0x00, 0x00, 0x00, 0x00, 0x00, // 153
        0x00, 0x00, 0x00, 0x00, 0x00, // 154
        0x00, 0x00, 0x00, 0x00, 0x00, // 155
        0x00, 0x00, 0x00, 0x00, 0x00, // 156
        0x00, 0x00, 0x00, 0x00, 0x00, // 157
        0x00, 0x00, 0x00, 0x00, 0x00, // 158
        0x00, 0x00, 0x00, 0x00, 0x00, // 159
        0x00, 0x00, 0x00, 0x00, 0x00, // 160
        0x00, 0x00, 0x00, 0x00, 0x00, // 161
        0x00, 0x00, 0x00, 0x00, 0x00, // 162
        0x00, 0x00, 0x00, 0x00, 0x00, // 163
        0x00, 0x00, 0x00, 0x00, 0x00, // 164
        0x00, 0x00, 0x00, 0x00, 0x00, // 165
        0x00, 0x00, 0x00, 0x00, 0x00, // 166
        0x00, 0x00, 0x00, 0x00, 0x00, // 167
        0x00, 0x00, 0x00, 0x00, 0x00, // 168
        0x00, 0x00, 0x00, 0x00, 0x00, // 169
        0x00, 0x00, 0x00, 0x00, 0x00, // 170
        0x00, 0x00, 0x00, 0x00, 0x00, // 171
        0x00, 0x00, 0x00, 0x00, 0x00, // 172
        0x00, 0x00, 0x00, 0x00, 0x00, // 173
        0x00, 0x00, 0x00, 0x00, 0x00, // 174
        0x00, 0x00, 0x00, 0x00, 0x00, // 175
        0x00, 0x00, 0x00, 0x00, 0x00, // 176
        0x00, 0x00, 0x00, 0x00, 0x00, // 177
        0x00, 0x00, 0x00, 0x00, 0x00, // 178
        0x00, 0x00, 0x00, 0x00, 0x00, // 179
        0x00, 0x00, 0x00, 0x00, 0x00, // 180
        0x00, 0x00, 0x00, 0x00, 0x00, // 181
        0x00, 0x00, 0x00, 0x00, 0x00, // 182
        0x00, 0x00, 0x00, 0x00, 0x00, // 183
        0x00, 0x00, 0x00, 0x00, 0x00, // 184
        0x00, 0x00, 0x00, 0x00, 0x00, // 185
        0x00, 0x00, 0x00, 0x00, 0x00, // 186
        0x00, 0x00, 0x00, 0x00, 0x00, // 187
        0x00, 0x00, 0x00, 0x00, 0x00, // 188
        0x00, 0x00, 0x00, 0x00, 0x00, // 189
        0x00, 0x00, 0x00, 0x00, 0x00, // 190
        0x00, 0x00, 0x00, 0x00, 0x00, // 191
        0x00, 0x00, 0x00, 0x00, 0x00, // 192
        0x7E, 0x11, 0x11, 0x11, 0x7E, // 193
        0x7F, 0x49, 0x49, 0x49, 0x36, // 194
        0x7F, 0x01, 0x01, 0x01, 0x01, // 195
        0x7C, 0x42, 0x41, 0x42, 0x7C, // 196
        0x7F, 0x49, 0x49, 0x49, 0x41, // 197
        0x61, 0x51, 0x49, 0x45, 0x43, // 198
        0x7F, 0x08, 0x08, 0x08, 0x7F, // 199
        0x3E, 0x49, 0x49, 0x49, 0x3E, // 200
        0x00, 0x41, 0x7F, 0x41, 0x00, // 201
        0x7F, 0x08, 0x14, 0x22, 0x41, // 202
        0x7C, 0x02, 0x01, 0x02, 0x7C, // 203
        0x7F, 0x02, 0x04, 0x02, 0x7F, // 204
        0x7F, 0x02, 0x04, 0x08, 0x7F, // 205
        0x41, 0x49, 0x49, 0x49, 0x41, // 206
        0x3E, 0x41, 0x41, 0x41, 0x3E, // 207
        0x7F, 0x01, 0x01, 0x01, 0x7F, // 208
        0x7F, 0x11, 0x11, 0x11, 0x0E, // 209
        0x00, 0x00, 0x00, 0x00, 0x00, // 210
        0x41, 0x63, 0x55, 0x49, 0x41, // 211
        0x01, 0x01, 0x7F, 0x01, 0x01, // 212
        0x03, 0x04, 0x78, 0x04, 0x03, // 213
        0x1C, 0x22, 0x7F, 0x22, 0x1C, // 214
        0x63, 0x14, 0x08, 0x14, 0x63, // 215
        0x07, 0x08, 0x7F, 0x08, 0x07, // 216
        0x5E, 0x61, 0x01, 0x61, 0x5E, // 217
        0x00, 0x45, 0x7C, 0x45, 0x00, // 218
        0x05, 0x08, 0x70, 0x08, 0x05, // 219
        0x38, 0x44, 0x45, 0x3C, 0x40, // 220
        0x28, 0x54, 0x55, 0x54, 0x44, // 221
        0x7C, 0x08, 0x05, 0x04, 0xF8, // 222
        0x00, 0x00, 0x7D, 0x80, 0x80, // 223
        0x3D, 0x40, 0x41, 0x40, 0x3D, // 224
        0x38, 0x44, 0x44, 0x3C, 0x40, // 225
        0xFE, 0x49, 0x49, 0x4E, 0x30, // 226
        0x64, 0x94, 0x88, 0x94, 0x64, // 227
        0x31, 0x4B, 0x4D, 0x49, 0x31, // 228
        0x28, 0x54, 0x54, 0x54, 0x44, // 229
        0x30, 0x49, 0x45, 0x43, 0x81, // 230
        0x7C, 0x08, 0x04, 0x04, 0xF8, // 231
        0x3E, 0x49, 0x49, 0x49, 0x3E, // 232
        0x00, 0x00, 0x3C, 0x40, 0x40, // 233
        0x7C, 0x10, 0x28, 0x44, 0x44, // 234
        0x70, 0x09, 0x09, 0x09, 0x7E, // 235
        0xFC, 0x40, 0x40, 0x3C, 0x40, // 236
        0x1C, 0x20, 0x40, 0x20, 0x1C, // 237
        0x37, 0x49, 0x49, 0x41, 0x81, // 238
        0x38, 0x44, 0x44, 0x44, 0x38, // 239
        0x7C, 0x04, 0x04, 0x04, 0x7C, // 240
        0xFC, 0x44, 0x44, 0x44, 0x38, // 241
        0x98, 0xA4, 0xA4, 0xA4, 0x44, // 242
        0x38, 0x44, 0x44, 0x4C, 0x34, // 243
        0x04, 0x04, 0x7C, 0x04, 0x04, // 244
        0x3C, 0x40, 0x40, 0x40, 0x3C, // 245
        0x3C, 0x40, 0xF8, 0x44, 0x38, // 246
        0x44, 0x28, 0x10, 0x28, 0x44, // 247
        0x3C, 0x40, 0xF8, 0x40, 0x3C, // 248
        0x38, 0x44, 0x30, 0x44, 0x38, // 249
        0x00, 0x01, 0x3C, 0x41, 0x40, // 250
        0x3C, 0x41, 0x40, 0x41, 0x3C, // 251
        0x38, 0x44, 0x45, 0x44, 0x38, // 252 - 0x38, 0x45, 0x44, 0x45, 0x38, // 252
        0x3C, 0x40, 0x41, 0x40, 0x3C, // 253
        0x38, 0x44, 0x31, 0x44, 0x38, // 254
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // 255

};

#endif
