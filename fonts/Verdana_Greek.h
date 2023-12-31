/*
 *
 * Verdana_Greek
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Verdana_Greek.h
 * Date                : 29.06.2022
 * Font size in bytes  : 29126
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 256
 * Font used chars     : 224
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

#ifndef VERDANA_GREEK_H
#define VERDANA_GREEK_H

#define VERDANA_GREEK_WIDTH 10
#define VERDANA_GREEK_HEIGHT 16

static uint8_t Verdana_Greek[] PROGMEM = {
    0x71, 0xC6, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0xE0, // char count
    
    // char widths
    0x00, 0x02, 0x06, 0x0A, 0x08, 0x10, 0x0A, 0x02, 0x05, 0x05, 
    0x07, 0x09, 0x04, 0x05, 0x02, 0x08, 0x08, 0x06, 0x08, 0x08, 
    0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x02, 0x04, 0x09, 0x09, 
    0x09, 0x07, 0x0C, 0x09, 0x09, 0x09, 0x09, 0x08, 0x07, 0x09, 
    0x09, 0x06, 0x07, 0x09, 0x08, 0x0B, 0x09, 0x0A, 0x08, 0x0A, 
    0x0A, 0x08, 0x08, 0x09, 0x09, 0x0E, 0x09, 0x0A, 0x08, 0x05, 
    0x08, 0x05, 0x09, 0x0A, 0x03, 0x07, 0x08, 0x07, 0x08, 0x07, 
    0x05, 0x08, 0x08, 0x02, 0x05, 0x08, 0x02, 0x0C, 0x08, 0x08, 
    0x08, 0x08, 0x06, 0x06, 0x06, 0x08, 0x07, 0x0C, 0x07, 0x07, 
    0x06, 0x08, 0x02, 0x08, 0x0A, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x00, 0x02, 
    0x08, 0x08, 0x07, 0x08, 0x02, 0x08, 0x06, 0x0C, 0x06, 0x09, 
    0x09, 0x05, 0x0C, 0x0A, 0x06, 0x09, 0x05, 0x05, 0x03, 0x08, 
    0x07, 0x02, 0x04, 0x04, 0x06, 0x09, 0x0E, 0x0F, 0x0D, 0x07, 
    0x09, 0x09, 0x09, 0x08, 0x09, 0x08, 0x09, 0x08, 0x08, 0x06, 
    0x09, 0x09, 0x09, 0x09, 0x06, 0x08, 0x09, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x0A, 0x09, 0x0A, 0x0A, 0x06, 0x08, 0x09, 0x07, 
    0x08, 0x05, 0x07, 0x08, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
    0x07, 0x04, 0x07, 0x07, 0x08, 0x07, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x08, 0x08, 0x06, 0x08, 
    0x08, 0x08, 0x08, 0x04, 
    
    // font data
    0xF8, 0xF8, 0x1B, 0x1B, // 33
    0x3C, 0x3C, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x60, 0x60, 0xE0, 0x78, 0x60, 0x60, 0xE0, 0x78, 0x60, 0x06, 0x1E, 0x07, 0x06, 0x06, 0x1E, 0x07, 0x06, 0x06, 0x00, // 35
    0x60, 0xF0, 0xD8, 0x88, 0xFE, 0x08, 0x08, 0x10, 0x08, 0x10, 0x10, 0x7F, 0x11, 0x1B, 0x0F, 0x06, // 36
    0xF0, 0xF8, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x00, 0x80, 0x60, 0x90, 0xC8, 0x40, 0x40, 0xC0, 0x80, 0x01, 0x03, 0x02, 0x02, 0x13, 0x09, 0x06, 0x01, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, // 37
    0x00, 0x70, 0xF8, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x80, 0x80, 0x06, 0x0F, 0x19, 0x10, 0x11, 0x13, 0x1E, 0x0C, 0x1F, 0x13, // 38
    0x3C, 0x3C, 0x00, 0x00, // 39
    0xC0, 0xF0, 0x38, 0x0C, 0x04, 0x0F, 0x3F, 0x70, 0xC0, 0x80, // 40
    0x04, 0x0C, 0x38, 0xF0, 0xC0, 0x80, 0xC0, 0x70, 0x3F, 0x0F, // 41
    0x88, 0x50, 0x20, 0xFC, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x01, 0x01, 0x01, 0x01, // 43
    0x00, 0x00, 0x00, 0x00, 0x60, 0x7C, 0x1C, 0x04, // 44
    0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x1C, 0x1C, // 46
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0C, 0x60, 0x78, 0x1E, 0x07, 0x01, 0x00, 0x00, 0x00, // 47
    0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0xF0, 0xE0, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, // 48
    0x10, 0x10, 0xF8, 0xF8, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, // 49
    0x30, 0x38, 0x08, 0x08, 0x08, 0x88, 0xF8, 0x70, 0x10, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x10, 0x10, // 50
    0x30, 0x38, 0x08, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x0C, 0x1C, 0x10, 0x10, 0x10, 0x19, 0x0F, 0x06, // 51
    0x00, 0x80, 0x40, 0x20, 0x10, 0xF8, 0xF8, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x1F, 0x1F, 0x02, 0x02, // 52
    0x00, 0x78, 0x78, 0x48, 0x48, 0xC8, 0x88, 0x08, 0x0C, 0x1C, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, // 53
    0xC0, 0xF0, 0xB0, 0x58, 0x48, 0xC8, 0x88, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, // 54
    0x08, 0x08, 0x08, 0x08, 0x88, 0xE8, 0x78, 0x18, 0x00, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x00, 0x00, // 55
    0x70, 0xF8, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 56
    0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x11, 0x13, 0x12, 0x1A, 0x0D, 0x0F, 0x03, // 57
    0xE0, 0xE0, 0x1C, 0x1C, // 58
    0x00, 0xE0, 0xE0, 0x00, 0x60, 0x7C, 0x1C, 0x04, // 59
    0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, // 60
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 61
    0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x00, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, // 62
    0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, // 63
    0x80, 0x60, 0x10, 0x90, 0xC8, 0x48, 0x48, 0xC8, 0xC8, 0x10, 0x20, 0xC0, 0x07, 0x18, 0x20, 0x27, 0x4F, 0x48, 0x48, 0x4F, 0x4F, 0x08, 0x08, 0x07, // 64
    0x00, 0x00, 0xC0, 0xF8, 0x38, 0xF8, 0xC0, 0x00, 0x00, 0x18, 0x1F, 0x07, 0x02, 0x02, 0x02, 0x07, 0x1F, 0x18, // 65
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x19, 0x0F, 0x06, // 66
    0xC0, 0xF0, 0x30, 0x08, 0x08, 0x08, 0x08, 0x38, 0x30, 0x03, 0x0F, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x0C, // 67
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x30, 0xF0, 0xC0, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x0F, 0x03, // 68
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 69
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xC0, 0xF0, 0x30, 0x08, 0x08, 0x08, 0x08, 0x38, 0x30, 0x03, 0x0F, 0x0C, 0x10, 0x10, 0x11, 0x11, 0x1F, 0x0F, // 71
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 72
    0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, // 73
    0x00, 0x00, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, // 74
    0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x08, 0x1F, 0x1F, 0x03, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, // 75
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 76
    0xF8, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x80, 0xE0, 0x38, 0xF8, 0xF8, 0x1F, 0x00, 0x00, 0x03, 0x0F, 0x0E, 0x03, 0x00, 0x00, 0x1F, 0x1F, // 77
    0xF8, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 0x18, 0x1F, // 78
    0xC0, 0xF0, 0x30, 0x08, 0x08, 0x08, 0x08, 0x30, 0xF0, 0xC0, 0x03, 0x0F, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x0F, 0x03, // 79
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x18, 0xF0, 0xE0, 0x1F, 0x1F, 0x02, 0x02, 0x02, 0x03, 0x01, 0x00, // 80
    0xC0, 0xF0, 0x30, 0x08, 0x08, 0x08, 0x08, 0x30, 0xF0, 0xC0, 0x03, 0x0F, 0x0C, 0x10, 0x10, 0x70, 0xF0, 0x8C, 0x8F, 0x83, // 81
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x98, 0xF0, 0x60, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x03, 0x07, 0x0C, 0x18, 0x10, // 82
    0x60, 0xF0, 0x98, 0x88, 0x88, 0x88, 0x38, 0x30, 0x0C, 0x1C, 0x11, 0x11, 0x11, 0x19, 0x0F, 0x06, // 83
    0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, // 84
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, // 85
    0x38, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x38, 0x00, 0x01, 0x07, 0x1E, 0x18, 0x1E, 0x07, 0x01, 0x00, // 86
    0x38, 0xF8, 0xC0, 0x00, 0x80, 0xE0, 0x38, 0x38, 0xE0, 0x80, 0x00, 0xC0, 0xF8, 0x38, 0x00, 0x03, 0x1F, 0x1C, 0x07, 0x01, 0x00, 0x00, 0x01, 0x07, 0x1C, 0x1F, 0x03, 0x00, // 87
    0x08, 0x38, 0x70, 0xC0, 0x80, 0xC0, 0x70, 0x38, 0x08, 0x10, 0x1C, 0x0E, 0x03, 0x01, 0x03, 0x0E, 0x1C, 0x10, // 88
    0x08, 0x38, 0x70, 0xC0, 0x80, 0x80, 0xC0, 0x70, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 89
    0x08, 0x08, 0x08, 0x88, 0xC8, 0x68, 0x38, 0x18, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x10, 0x10, 0x10, // 90
    0xFC, 0xFC, 0x04, 0x04, 0x04, 0xFF, 0xFF, 0x80, 0x80, 0x80, // 91
    0x0C, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1E, 0x78, 0x60, // 92
    0x04, 0x04, 0x04, 0xFC, 0xFC, 0x80, 0x80, 0x80, 0xFF, 0xFF, // 93
    0x80, 0xC0, 0x60, 0x30, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x04, 0x0C, 0x08, 0x00, 0x00, 0x00, // 96
    0x00, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x0E, 0x1F, 0x11, 0x11, 0x11, 0x1F, 0x1F, // 97
    0xFC, 0xFC, 0x40, 0x20, 0x20, 0x60, 0xC0, 0x80, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, // 98
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x60, 0x40, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x08, // 99
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x20, 0xFC, 0xFC, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x08, 0x1F, 0x1F, // 100
    0x80, 0xC0, 0x60, 0x20, 0x20, 0xE0, 0xC0, 0x07, 0x0F, 0x19, 0x11, 0x11, 0x19, 0x09, // 101
    0x20, 0xF8, 0xFC, 0x24, 0x24, 0x00, 0x1F, 0x1F, 0x00, 0x00, // 102
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x20, 0xE0, 0xE0, 0x07, 0x8F, 0x98, 0x90, 0x90, 0xC8, 0x7F, 0x3F, // 103
    0xFC, 0xFC, 0x40, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 104
    0xEC, 0xEC, 0x1F, 0x1F, // 105
    0x00, 0x00, 0x20, 0xEC, 0xEC, 0x80, 0x80, 0x80, 0xFF, 0x7F, // 106
    0xFC, 0xFC, 0x00, 0x80, 0xC0, 0x60, 0x20, 0x00, 0x1F, 0x1F, 0x03, 0x03, 0x06, 0x0C, 0x18, 0x10, // 107
    0xFC, 0xFC, 0x1F, 0x1F, // 108
    0xE0, 0xE0, 0x40, 0x20, 0x20, 0xE0, 0xC0, 0x40, 0x20, 0x20, 0xE0, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 109
    0xE0, 0xE0, 0x40, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 110
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x60, 0xC0, 0x80, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, // 111
    0xE0, 0xE0, 0x40, 0x20, 0x20, 0x60, 0xC0, 0x80, 0xFF, 0xFF, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, // 112
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x20, 0xE0, 0xE0, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x08, 0xFF, 0xFF, // 113
    0xE0, 0xE0, 0x40, 0x60, 0x60, 0x60, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 114
    0xC0, 0xE0, 0x20, 0x20, 0x20, 0x40, 0x09, 0x13, 0x13, 0x13, 0x1F, 0x0E, // 115
    0x20, 0xF8, 0xF8, 0x20, 0x20, 0x20, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, // 116
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x1F, 0x1F, // 117
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x07, 0x1F, 0x18, 0x1F, 0x07, 0x00, // 118
    0x60, 0xE0, 0x80, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x80, 0xE0, 0x60, 0x00, 0x03, 0x0F, 0x1C, 0x1F, 0x01, 0x01, 0x1F, 0x1C, 0x0F, 0x03, 0x00, // 119
    0x60, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0x60, 0x18, 0x1C, 0x07, 0x03, 0x07, 0x1C, 0x18, // 120
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x07, 0xDF, 0xF8, 0x3F, 0x07, 0x00, // 121
    0x20, 0x20, 0x20, 0xA0, 0xE0, 0x60, 0x18, 0x1C, 0x17, 0x13, 0x10, 0x10, // 122
    0x00, 0x00, 0x80, 0xF8, 0x7C, 0x04, 0x04, 0x04, 0x01, 0x01, 0x03, 0x7E, 0xFC, 0x80, 0x80, 0x80, // 123
    0xFC, 0xFC, 0xFF, 0xFF, // 124
    0x04, 0x04, 0x04, 0x7C, 0xF8, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0xFC, 0x7E, 0x03, 0x01, 0x01, // 125
    0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x04, 0x02, 0x01, // 126
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 127
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 128
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 129
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 130
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 131
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 132
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 133
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 134
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 135
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 136
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 137
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 138
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 139
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 140
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 141
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 142
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 143
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 144
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 145
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 146
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 147
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 148
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 149
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 150
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 151
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 152
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 153
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 154
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 155
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 156
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 157
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 158
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, // 159
    0xD8, 0xD8, 0x1F, 0x1F, // 161
    0x80, 0xC0, 0x60, 0x20, 0xF8, 0x20, 0x60, 0x40, 0x07, 0x0F, 0x18, 0x10, 0x7F, 0x10, 0x18, 0x08, // 162
    0x00, 0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x10, 0x19, 0x1F, 0x17, 0x11, 0x11, 0x11, 0x11, 0x10, // 163
    0x20, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x20, 0x08, 0x07, 0x04, 0x04, 0x04, 0x07, 0x08, // 164
    0x08, 0x38, 0xF0, 0xC0, 0xC0, 0xF0, 0x38, 0x08, 0x00, 0x0A, 0x0A, 0x1F, 0x1F, 0x0A, 0x0A, 0x00, // 165
    0x7C, 0x7C, 0xF8, 0xF8, // 166
    0x60, 0xF0, 0x98, 0x88, 0x88, 0x88, 0x10, 0x00, 0x03, 0x47, 0x8C, 0x88, 0x88, 0xC9, 0x7F, 0x36, // 167
    0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 168
    0x80, 0x60, 0x10, 0x90, 0xC8, 0x48, 0x48, 0xC8, 0x90, 0x10, 0x60, 0x80, 0x07, 0x18, 0x20, 0x27, 0x4F, 0x48, 0x48, 0x4C, 0x24, 0x20, 0x18, 0x07, // 169
    0x80, 0xC8, 0x48, 0x48, 0xF8, 0xF0, 0x01, 0x03, 0x02, 0x02, 0x03, 0x03, // 170
    0x00, 0x80, 0xC0, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x01, 0x03, 0x06, 0x0C, 0x00, 0x01, 0x03, 0x06, 0x0C, // 171
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, // 172
    0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // 173
    0x80, 0x60, 0x10, 0x10, 0xC8, 0xC8, 0x48, 0xC8, 0x90, 0x10, 0x60, 0x80, 0x07, 0x18, 0x20, 0x20, 0x4F, 0x4F, 0x42, 0x47, 0x2D, 0x28, 0x18, 0x07, // 174
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 175
    0x60, 0x90, 0x08, 0x08, 0x90, 0x60, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, // 176
    0x80, 0x80, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, // 177
    0x08, 0x88, 0xC8, 0x78, 0x30, 0x01, 0x01, 0x01, 0x01, 0x01, // 178
    0x08, 0x28, 0x28, 0xF8, 0xD0, 0x01, 0x01, 0x01, 0x01, 0x00, // 179
    0x08, 0x0C, 0x04, 0x00, 0x00, 0x00, // 180
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xFF, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x1F, // 181
    0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0x00, 0x01, 0x01, 0x01, 0x7F, 0x00, 0x7F, // 182
    0x80, 0x80, 0x03, 0x03, // 183
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x60, // 184
    0x10, 0xF8, 0xF8, 0x00, 0x01, 0x01, 0x01, 0x01, // 185
    0xF0, 0xF8, 0x08, 0x08, 0xF8, 0xF0, 0x01, 0x03, 0x02, 0x02, 0x03, 0x01, // 186
    0x60, 0xC0, 0x80, 0x00, 0x00, 0x60, 0xC0, 0x80, 0x00, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x0C, 0x06, 0x03, 0x01, // 187
    0x10, 0x10, 0xF8, 0xF8, 0x00, 0x00, 0x80, 0x60, 0x18, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x18, 0x06, 0x01, 0x00, 0x0C, 0x0A, 0x09, 0x1F, 0x1F, 0x08, // 188
    0x10, 0x10, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x18, 0x06, 0x01, 0x00, 0x00, 0x10, 0x18, 0x1C, 0x17, 0x13, // 189
    0x08, 0x28, 0x28, 0xF8, 0xD0, 0x00, 0x80, 0x60, 0x18, 0x00, 0x80, 0x80, 0x00, 0x01, 0x01, 0x01, 0x01, 0x18, 0x06, 0x01, 0x0C, 0x0A, 0x09, 0x1F, 0x1F, 0x08, // 190
    0x00, 0x00, 0x00, 0xD8, 0xD8, 0x00, 0x00, 0x0C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x08, // 191
    0x00, 0x00, 0xC0, 0xF9, 0x3B, 0xFA, 0xC0, 0x00, 0x00, 0x18, 0x1F, 0x07, 0x02, 0x02, 0x02, 0x07, 0x1F, 0x18, // 192
    0x00, 0x00, 0xC0, 0xF0, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x18, 0x1F, 0x07, 0x02, 0x02, 0x02, 0x07, 0x1F, 0x18, // 193
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x19, 0x0F, 0x06, // 194
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 195
    0x00, 0x00, 0xC0, 0xF0, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x1C, 0x1F, 0x13, 0x10, 0x10, 0x10, 0x13, 0x1F, 0x1C, // 196
    0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x08, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 197
    0x08, 0x08, 0x08, 0x08, 0x88, 0xC8, 0x68, 0x38, 0x18, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x10, 0x10, 0x10, 0x10, // 198
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 199
    0xF0, 0xF8, 0x88, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 200
    0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, // 201
    0xF8, 0xF8, 0xC0, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x08, 0x1F, 0x1F, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, // 202
    0x00, 0x00, 0xC0, 0xF0, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x1C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1C, // 203
    0xF8, 0xF8, 0x70, 0xC0, 0x00, 0xC0, 0x70, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x01, 0x07, 0x01, 0x00, 0x1F, 0x1F, // 204
    0xF8, 0xF8, 0x30, 0x60, 0xC0, 0x80, 0x00, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x03, 0x1F, 0x1F, // 205
    0x08, 0x88, 0x88, 0x88, 0x88, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 206
    0xF0, 0xF8, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 207
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 208
    0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, // 209
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 210
    0x08, 0x18, 0x38, 0x68, 0xC8, 0x88, 0x08, 0x08, 0x10, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x10, 0x10, // 211
    0x08, 0x08, 0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, // 212
    0x18, 0x78, 0xE0, 0x80, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x01, 0x00, 0x00, // 213
    0xC0, 0xE0, 0x30, 0x10, 0xF8, 0xF8, 0x10, 0x30, 0xE0, 0xC0, 0x03, 0x07, 0x0C, 0x08, 0x1F, 0x1F, 0x08, 0x0C, 0x07, 0x03, // 214
    0x18, 0x30, 0x60, 0xC0, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x03, 0x06, 0x0C, 0x18, // 215
    0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x01, 0x03, 0x02, 0x1F, 0x1F, 0x02, 0x03, 0x01, 0x00, // 216
    0xE0, 0xF0, 0x38, 0x18, 0x08, 0x08, 0x18, 0x38, 0xF0, 0xE0, 0x13, 0x17, 0x1C, 0x18, 0x00, 0x00, 0x18, 0x1C, 0x17, 0x13, // 217
    0x09, 0x08, 0xF8, 0xF8, 0x08, 0x09, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, // 218
    0x18, 0x79, 0xE0, 0x80, 0x80, 0xE0, 0x79, 0x18, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x01, 0x00, 0x00, // 219
    0x80, 0xC0, 0x60, 0x24, 0x23, 0x41, 0xE0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x1F, 0x10, // 220
    0xC0, 0xE0, 0x20, 0x24, 0x23, 0x21, 0x20, 0x0E, 0x1F, 0x11, 0x11, 0x11, 0x10, 0x10, // 221
    0xE0, 0xE0, 0xC0, 0x64, 0x23, 0x61, 0xE0, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, // 222
    0xE0, 0xE4, 0x03, 0x01, 0x00, 0x0F, 0x1F, 0x18, 0x10, 0x10, // 223
    0xE1, 0xE0, 0x04, 0x03, 0x01, 0xE0, 0xE1, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 224
    0xC0, 0xE0, 0x20, 0x20, 0x40, 0xE0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x08, 0x1F, 0x1F, 0x10, // 225
    0xFE, 0xFF, 0x41, 0x63, 0xFF, 0xDE, 0x80, 0xFF, 0xFF, 0x10, 0x10, 0x18, 0x1F, 0x0F, // 226
    0x60, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x60, 0x3C, 0x7E, 0xC3, 0x81, 0xC3, 0x7E, 0x3C, // 227
    0xC1, 0xE3, 0x27, 0x2D, 0x39, 0xF1, 0xE1, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 228
    0xC0, 0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0E, 0x1F, 0x11, 0x11, 0x11, 0x10, 0x10, // 229
    0xE0, 0xF1, 0x19, 0x0D, 0x07, 0x03, 0x01, 0x0F, 0x1F, 0x18, 0x10, 0x10, 0xF0, 0xE0, // 230
    0xE0, 0xE0, 0x40, 0x20, 0x20, 0xE0, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 231
    0xFC, 0xFE, 0x43, 0x41, 0x43, 0xFE, 0xFC, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07, // 232
    0xE0, 0xE0, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x10, // 233
    0xE0, 0xE0, 0x00, 0x80, 0xC0, 0x60, 0x20, 0x1F, 0x1F, 0x03, 0x07, 0x0C, 0x18, 0x10, // 234
    0x81, 0xC1, 0x63, 0x26, 0x2C, 0xF8, 0xF0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 235
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0xFF, 0xFF, 0x10, 0x10, 0x18, 0x0F, 0x1F, 0x10, // 236
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03, // 237
    0x1D, 0xBF, 0xE3, 0x41, 0x41, 0x41, 0x01, 0x01, 0x0F, 0x1F, 0x18, 0x10, 0x10, 0x30, 0xF0, 0xE0, // 238
    0xC0, 0xE0, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 239
    0xE0, 0xE0, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xE0, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 240
    0xC0, 0xE0, 0x60, 0x20, 0x20, 0x60, 0xE0, 0xC0, 0xFF, 0xFF, 0x10, 0x10, 0x10, 0x18, 0x1F, 0x0F, // 241
    0xC0, 0xE0, 0x60, 0x20, 0x20, 0x20, 0x00, 0x00, 0x07, 0x0F, 0x98, 0x90, 0xF0, 0x60, 0x00, 0x00, // 242
    0x80, 0xC0, 0x60, 0x20, 0x20, 0x60, 0xE0, 0xA0, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, // 243
    0x20, 0x20, 0x20, 0xE0, 0xE0, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x00, // 244
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 245
    0xE0, 0xE0, 0x00, 0xC0, 0xE0, 0x20, 0xE0, 0xC0, 0x0F, 0x1F, 0x10, 0xFF, 0xFF, 0x10, 0x1F, 0x0F, // 246
    0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0xE0, 0x30, 0x19, 0x0F, 0x06, 0x0F, 0x19, 0x30, 0xE0, // 247
    0xE0, 0xE0, 0x00, 0xC0, 0xC0, 0x00, 0xE0, 0xE0, 0x0F, 0x1F, 0x10, 0xFF, 0xFF, 0x10, 0x1F, 0x0F, // 248
    0xC0, 0xE0, 0x20, 0x00, 0x00, 0x20, 0xE0, 0xC0, 0x0F, 0x1F, 0x10, 0x0F, 0x0F, 0x10, 0x1F, 0x0F, // 249
    0x01, 0x00, 0xE0, 0xE0, 0x00, 0x01, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x10, // 250
    0xE1, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE1, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 251
    0xC0, 0xE0, 0x20, 0x24, 0x23, 0x21, 0xE0, 0xC0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 252
    0xE0, 0xE0, 0x00, 0x04, 0x03, 0x01, 0xE0, 0xE0, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x0F, // 253
    0xC0, 0xE0, 0x20, 0x04, 0x03, 0x21, 0xE0, 0xC0, 0x0F, 0x1F, 0x10, 0x0F, 0x0F, 0x10, 0x1F, 0x0F, // 254
    0xE0, 0xE0, 0xE0, 0xE0, 0x1F, 0x1F, 0x1F, 0x1F // 255
    
};

#endif
