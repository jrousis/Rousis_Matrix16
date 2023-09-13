

/*
 *
 * Big_font_2
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Big_font_2.h
 * Date                : 22.03.2023
 * Font size in bytes  : 44790
 * Font width          : 14
 * Font height         : -16
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

#ifndef BIG_FONT_2_H
#define BIG_FONT_2_H

#define BIG_FONT_2_WIDTH 14
#define BIG_FONT_2_HEIGHT 16

static uint8_t Big_font_2[] PROGMEM = {
    0xAE, 0xF6, // size
    0x0E, // width
    0x10, // height
    0x20, // first char
    0xE0, // char count
    
    // char widths
    0x0E, 0x04, 0x08, 0x0E, 0x0E, 0x0E, 0x0D, 0x03, 0x06, 0x06, 
    0x0A, 0x0B, 0x04, 0x0A, 0x04, 0x09, 0x0E, 0x0A, 0x0E, 0x0E, 
    0x0C, 0x0E, 0x0E, 0x0C, 0x0E, 0x0E, 0x03, 0x04, 0x09, 0x0A, 
    0x09, 0x0C, 0x0D, 0x0E, 0x0E, 0x0E, 0x0E, 0x0C, 0x0C, 0x0E, 
    0x0E, 0x08, 0x0C, 0x0E, 0x0C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0C, 0x0E, 0x0E, 0x10, 0x0E, 0x0E, 0x0C, 0x06, 
    0x08, 0x06, 0x09, 0x0C, 0x04, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x08, 0x08, 0x0C, 0x04, 0x0E, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0C, 0x0D, 0x0A, 0x0D, 0x0D, 0x0D, 0x0C, 0x0C, 
    0x0A, 0x07, 0x03, 0x07, 0x0C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0C, 0x0E, 0x0C, 0x0C, 0x0E, 0x0E, 0x0A, 
    0x0D, 0x0E, 0x0E, 0x0E, 0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 
    0x0C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x08, 0x0A, 0x0C, 
    0x0C, 0x08, 0x0B, 0x0C, 0x0D, 0x0B, 0x0A, 0x0B, 0x0B, 0x0B, 
    0x0A, 0x0C, 0x0B, 0x0B, 0x0E, 0x0C, 0x0D, 0x0D, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x0E, 0x0E, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0xFC, 0xFE, 0xFE, 0xFC, 0x31, 0x7B, 0x7B, 0x31, // 33
    0x3E, 0x1E, 0x06, 0x00, 0x00, 0x3E, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x18, 0x18, 0xFE, 0xFE, 0xFE, 0xFE, 0x18, 0x18, 0xFE, 0xFE, 0xFE, 0xFE, 0x18, 0x18, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x7F, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x7F, 0x18, 0x18, // 35
    0x70, 0xF8, 0xF8, 0xFC, 0x8C, 0x8C, 0xFE, 0xFE, 0x8C, 0x8C, 0x9C, 0x98, 0x18, 0x10, 0x08, 0x18, 0x19, 0x39, 0x31, 0x31, 0x7F, 0x7F, 0x31, 0x31, 0x3F, 0x1F, 0x1F, 0x0E, // 36
    0x1C, 0x3E, 0x36, 0x3E, 0x1C, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x06, 0x60, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x38, 0x7C, 0x6C, 0x7C, 0x38, // 37
    0x78, 0xFC, 0xFC, 0xFE, 0xC6, 0x86, 0x86, 0xC6, 0xFE, 0xFC, 0x7C, 0x38, 0x00, 0x1C, 0x3E, 0x3F, 0x7F, 0x63, 0x67, 0x7F, 0x7F, 0x3C, 0x7C, 0x7E, 0x66, 0x42, // 38
    0x3E, 0x1E, 0x06, 0x00, 0x00, 0x00, // 39
    0xE0, 0xF8, 0xFC, 0xFE, 0x06, 0x02, 0x07, 0x1F, 0x3F, 0x7F, 0x60, 0x40, // 40
    0x02, 0x06, 0xFE, 0xFC, 0xF8, 0xE0, 0x40, 0x60, 0x7F, 0x3F, 0x1F, 0x07, // 41
    0x32, 0xB6, 0xFC, 0x78, 0xFE, 0xFE, 0x78, 0xFC, 0xB6, 0x32, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, // 42
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x06, 0x06, 0x06, 0x06, // 43
    0x00, 0x00, 0x00, 0x00, 0x40, 0x78, 0x38, 0x18, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, // 45
    0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x78, 0x30, // 46
    0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1E, 0x06, 0x60, 0x78, 0x7E, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, // 47
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 48
    0x20, 0x30, 0x38, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, // 49
    0x38, 0x3C, 0x3C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x60, 0x70, 0x70, 0x78, 0x78, 0x7C, 0x6C, 0x6E, 0x66, 0x67, 0x63, 0x61, 0x61, 0x60, // 50
    0x18, 0x1C, 0x1C, 0x0E, 0x06, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xFE, 0xFC, 0x7C, 0x38, 0x18, 0x38, 0x38, 0x70, 0x60, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3F, 0x1C, // 51
    0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x3C, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x7F, 0x06, 0x06, // 52
    0xFE, 0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x86, 0x06, 0x18, 0x38, 0x38, 0x78, 0x70, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x7F, 0x3F, 0x1F, // 53
    0xF8, 0xFC, 0xFC, 0xFE, 0x8E, 0x86, 0x86, 0x86, 0x86, 0x86, 0x8E, 0x1C, 0x1C, 0x18, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3F, 0x1E, // 54
    0x06, 0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0xF6, 0x7E, 0x3E, 0x1E, 0x0E, 0x78, 0x7C, 0x7E, 0x7F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x78, 0xFC, 0xFC, 0xFE, 0xCE, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xFE, 0xFC, 0xFC, 0x78, 0x1C, 0x3E, 0x3F, 0x7F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3E, 0x1C, // 56
    0x78, 0xFC, 0xFE, 0xFE, 0xCE, 0x86, 0x86, 0x86, 0x86, 0x8E, 0xFE, 0xFC, 0xFC, 0xF8, 0x18, 0x38, 0x38, 0x71, 0x61, 0x61, 0x61, 0x61, 0x61, 0x71, 0x7F, 0x3F, 0x3F, 0x1F, // 57
    0xC0, 0xC0, 0xC0, 0x71, 0x71, 0x71, // 58
    0x00, 0xC0, 0xC0, 0xC0, 0x40, 0x79, 0x39, 0x39, // 59
    0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x06, 0x02, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0x60, 0x40, // 60
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, // 61
    0x02, 0x06, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0x80, 0x40, 0x60, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x01, // 62
    0x18, 0x1C, 0x1C, 0x1E, 0x0E, 0x06, 0x06, 0x8E, 0xFE, 0xFE, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x76, 0x77, 0x77, 0x77, 0x01, 0x01, 0x00, 0x00, // 63
    0xF0, 0xF8, 0x1C, 0x0E, 0xC6, 0xE6, 0x36, 0x36, 0xF6, 0xF6, 0x0E, 0xFC, 0xF8, 0x0F, 0x1F, 0x38, 0x70, 0x63, 0x67, 0x66, 0x66, 0x67, 0x67, 0x36, 0x33, 0x11, // 64
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, // 65
    0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xFE, 0xFC, 0xFC, 0x78, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3E, 0x1C, // 66
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x1C, 0x1C, 0x18, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x38, 0x38, 0x18, // 67
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 68
    0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x60, 0x60, // 69
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, // 70
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x1C, 0x1C, 0x18, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x63, 0x63, 0x63, 0x33, 0x7F, 0x7F, 0x7F, // 71
    0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, // 72
    0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, // 73
    0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x1C, 0x3C, 0x3C, 0x70, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 74
    0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0E, 0x06, 0x02, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x03, 0x07, 0x0F, 0x1E, 0x3C, 0x78, 0x70, 0x60, 0x40, // 75
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, // 76
    0xFE, 0xFE, 0xFE, 0xFE, 0xF8, 0xE0, 0x80, 0x80, 0xE0, 0xF8, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x03, 0x0F, 0x0F, 0x03, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, // 77
    0xFE, 0xFE, 0xFE, 0xFE, 0x78, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x7F, 0x7F, 0x7F, 0x7F, // 78
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 79
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x8E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, // 80
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x62, 0x66, 0x6E, 0x7C, 0x78, 0x7F, 0x7F, 0x7F, 0x5F, // 81
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x8E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7B, 0x71, 0x61, 0x40, // 82
    0x78, 0xFC, 0xFE, 0xFE, 0xCE, 0x86, 0x86, 0x86, 0x86, 0x8E, 0x9E, 0x1C, 0x1C, 0x18, 0x18, 0x38, 0x38, 0x79, 0x71, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3F, 0x1E, // 83
    0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 85
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x03, 0x07, 0x0F, 0x1F, 0x3C, 0x78, 0x70, 0x70, 0x78, 0x3C, 0x1F, 0x0F, 0x07, 0x03, // 86
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x07, 0x0F, 0x1F, 0x3E, 0x7C, 0x78, 0x3C, 0x1F, 0x1F, 0x3C, 0x78, 0x7C, 0x3E, 0x1F, 0x0F, 0x07, // 87
    0x06, 0x0E, 0x1E, 0x3E, 0x70, 0xE0, 0xC0, 0xC0, 0xE0, 0x70, 0x3E, 0x1E, 0x0E, 0x06, 0x60, 0x70, 0x78, 0x7C, 0x0E, 0x07, 0x03, 0x03, 0x07, 0x0E, 0x7C, 0x78, 0x70, 0x60, // 88
    0x1E, 0x3E, 0x7E, 0xFE, 0xC0, 0x80, 0x00, 0x00, 0x80, 0xC0, 0xFE, 0x7E, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, // 89
    0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0x76, 0x3E, 0x1E, 0x0E, 0x70, 0x78, 0x7C, 0x6E, 0x67, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0x60, // 90
    0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, // 91
    0x0E, 0x3E, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x7C, 0x70, // 92
    0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x7F, // 93
    0x10, 0x18, 0x1C, 0x0E, 0x06, 0x0E, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 95
    0x0E, 0x1E, 0x3E, 0x30, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x66, 0x66, 0x66, 0x7F, 0x7F, 0x3F, 0x7F, 0x60, 0x60, // 97
    0xFE, 0xFE, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x3F, 0x1F, // 98
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x60, 0x71, 0x31, 0x31, 0x11, // 99
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0xFE, 0xFE, 0xFE, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, // 100
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x6D, 0x6C, 0x6C, 0x6C, 0x6D, 0x6D, 0x6F, 0x2F, 0x0F, // 101
    0xC0, 0xC0, 0xF8, 0xFC, 0xFC, 0xFE, 0xCE, 0xC6, 0xC6, 0xC6, 0xC6, 0x06, 0x06, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x07, 0x0F, 0xCF, 0xDF, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xFF, 0x7F, 0x7F, 0x3F, // 103
    0xFE, 0xFE, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, // 104
    0xCE, 0xCE, 0xCE, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, // 105
    0x00, 0x00, 0x00, 0x00, 0xCE, 0xCE, 0xCE, 0xCE, 0xC0, 0xC0, 0xC0, 0xE0, 0xFF, 0x7F, 0x7F, 0x3F, // 106
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x04, 0x0E, 0x1F, 0x3F, 0x7B, 0x71, 0x60, 0x40, // 107
    0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, // 108
    0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x7F, 0x7F, 0x7F, // 109
    0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, // 110
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x3F, 0x1F, // 111
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x3F, 0x1F, // 112
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x71, 0x3B, 0xFF, 0xFF, 0xFF, 0xFF, // 113
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x7F, 0x3F, 0x1F, // 115
    0xC0, 0xC0, 0xFE, 0xFE, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x70, 0x60, 0x60, 0x60, // 116
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x7F, 0x60, 0x60, // 117
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x07, 0x0F, 0x1F, 0x3F, 0x78, 0x70, 0x60, 0x70, 0x78, 0x3F, 0x1F, 0x0F, 0x07, // 118
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x0F, 0x1F, 0x3F, 0x70, 0x70, 0x3F, 0x1F, 0x3F, 0x70, 0x70, 0x3F, 0x1F, 0x0F, // 119
    0x40, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x60, 0x71, 0x7B, 0x3F, 0x1F, 0x1F, 0x3F, 0x7B, 0x71, 0x60, 0x40, // 120
    0x40, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0xC1, 0xC3, 0xC7, 0xCF, 0xDE, 0xFC, 0xFF, 0xFF, 0x7F, 0x3F, // 121
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x70, 0x78, 0x7C, 0x7E, 0x6F, 0x67, 0x63, 0x61, // 122
    0x80, 0xC0, 0xFC, 0xFE, 0x7E, 0x06, 0x06, 0x01, 0x03, 0x3F, 0x7F, 0x7E, 0x60, 0x60, // 123
    0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, // 124
    0x06, 0x06, 0x7E, 0xFE, 0xFC, 0xC0, 0x80, 0x60, 0x60, 0x7E, 0x7F, 0x3F, 0x03, 0x01, // 125
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x80, 0xC0, 0xE0, 0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, // 126
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 127
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 128
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 129
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 130
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 131
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 132
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 133
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 134
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 135
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 136
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 137
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 138
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 139
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 140
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 141
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 142
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 143
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 144
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 145
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 146
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 147
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 148
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 149
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 150
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 151
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 152
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 153
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 154
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 155
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 156
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 157
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 158
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 159
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 160
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 161
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 162
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 163
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 164
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 165
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 166
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 167
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 168
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 169
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 170
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 171
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 172
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 173
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 174
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 175
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 176
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 177
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 178
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 179
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 180
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 181
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 182
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 183
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 184
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 185
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 186
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 187
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 188
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 189
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 190
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 191
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 192
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, // 193
    0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xFE, 0xFC, 0x7C, 0x38, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x3E, 0x1C, // 194
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 195
    0xE0, 0xF0, 0xF8, 0xFC, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0xFC, 0xF8, 0xF0, 0xE0, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, // 196
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x61, 0x61, 0x61, 0x61, 0x60, 0x60, // 197
    0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0x76, 0x3E, 0x1E, 0x0E, 0x70, 0x78, 0x7C, 0x6E, 0x67, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0x60, // 198
    0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, // 199
    0xF8, 0xFC, 0xFC, 0xFE, 0x8E, 0x86, 0x86, 0x86, 0x86, 0x8E, 0xFE, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x3F, 0x7F, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x7F, 0x3F, 0x3F, 0x1F, // 200
    0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, // 201
    0xFE, 0xFE, 0xFE, 0xFE, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x06, 0x02, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0x60, 0x40, // 202
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, // 203
    0xFE, 0xFE, 0xFE, 0xFE, 0x3C, 0xF0, 0xC0, 0xC0, 0xF0, 0x3C, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, // 204
    0xFE, 0xFE, 0xFE, 0xFE, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0x80, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x7F, 0x7F, 0x7F, 0x7F, // 205
    0x06, 0x06, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x60, 0x60, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x60, 0x60, // 206
    0xF8, 0xFC, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, // 207
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, // 208
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x8E, 0xFE, 0xFC, 0xFC, 0xF8, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, // 209
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 210
    0x06, 0x0E, 0x1E, 0x3E, 0x76, 0xE6, 0xC6, 0x86, 0x06, 0x06, 0x06, 0x06, 0x60, 0x70, 0x78, 0x7C, 0x6E, 0x67, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, // 211
    0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // 212
    0x1E, 0x3E, 0x7E, 0xFE, 0xC0, 0x80, 0x00, 0x00, 0x80, 0xC0, 0xFE, 0x7E, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, // 213
    0xE0, 0xF0, 0xF8, 0x38, 0x18, 0xFE, 0xFE, 0xFE, 0xFE, 0x18, 0x38, 0xF8, 0xF0, 0xE0, 0x07, 0x0F, 0x1F, 0x1C, 0x18, 0x7F, 0x7F, 0x7F, 0x7F, 0x18, 0x1C, 0x1F, 0x0F, 0x07, // 214
    0x0E, 0x1E, 0x3E, 0x7E, 0xE0, 0xC0, 0x80, 0x80, 0xC0, 0xE0, 0x7E, 0x3E, 0x1E, 0x0E, 0x70, 0x78, 0x7C, 0x7E, 0x07, 0x03, 0x01, 0x01, 0x03, 0x07, 0x7E, 0x7C, 0x78, 0x70, // 215
    0xFE, 0xFE, 0xFE, 0x80, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x80, 0xFE, 0xFE, 0xFE, 0x00, 0x01, 0x03, 0x03, 0x03, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x03, 0x03, 0x01, 0x00, // 216
    0xFC, 0xFE, 0xFE, 0xFF, 0x07, 0x03, 0x03, 0x03, 0x03, 0x07, 0xFF, 0xFE, 0xFE, 0xFC, 0x63, 0x67, 0x6F, 0x6F, 0x7C, 0x78, 0x00, 0x00, 0x78, 0x7C, 0x6F, 0x6F, 0x67, 0x63, // 217
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 218
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 219
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 220
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 221
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 222
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 223
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 224
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x71, 0x3F, 0x7F, 0x7F, 0x60, 0x60, // 225
    0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0xCE, 0xFE, 0x7C, 0x38, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x61, 0x61, 0x61, 0x61, 0x73, 0x7F, 0x3F, 0x1E, 0x00, // 226
    0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x71, 0xFB, 0xFF, 0xCE, 0xCE, 0xFF, 0xFB, 0x71, 0x00, // 227
    0x06, 0x0E, 0x9E, 0xFE, 0xF6, 0xE6, 0xC6, 0x86, 0x06, 0x06, 0x1E, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x1E, // 228
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x1B, 0x3F, 0x7F, 0x64, 0x64, 0x64, 0x64, 0x60, // 229
    0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0x76, 0x3E, 0x1E, 0x0E, 0x3C, 0x7E, 0x7F, 0x63, 0x61, 0x60, 0x60, 0xE0, 0xE0, 0xC0, // 230
    0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x01, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, // 231
    0xF8, 0xFC, 0xFE, 0x8E, 0x86, 0x86, 0x86, 0x86, 0x8E, 0xFE, 0xFC, 0xF8, 0x1F, 0x3F, 0x7F, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x7F, 0x3F, 0x1F, // 232
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x70, 0x60, 0x60, 0x60, // 233
    0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x04, 0x0E, 0x1F, 0x3B, 0x71, 0x60, 0x40, // 234
    0x06, 0x86, 0x86, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xCE, 0xFC, 0xF8, 0xF0, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, // 235
    0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x30, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x7F, 0x60, 0x60, // 236
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x07, 0x0F, 0x1F, 0x38, 0x70, 0x60, 0x70, 0x38, 0x1F, 0x0F, 0x07, // 237
    0xE6, 0xF6, 0xF6, 0x1E, 0x1E, 0x0E, 0x0E, 0x06, 0x06, 0x06, 0x1C, 0x3F, 0x7F, 0x63, 0x63, 0x63, 0x60, 0xE0, 0xE0, 0xC0, // 238
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x1F, // 239
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, // 240
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x1F, // 241
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x07, 0x0F, 0x1F, 0x1D, 0x18, 0x18, 0xD8, 0xF8, 0x70, 0x00, // 242
    0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x1F, 0x3F, 0x7F, 0x71, 0x60, 0x60, 0x60, 0x71, 0x7F, 0x3F, 0x1E, 0x00, // 243
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, // 244
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x1F, 0x3F, 0x7F, 0x70, 0x60, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x1F, // 245
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x30, 0x30, 0xFF, 0xFF, 0xFF, 0x30, 0x30, 0x3F, 0x1F, 0x0F, 0x00, // 246
    0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0x80, 0xC0, 0xE1, 0x73, 0x3F, 0x1E, 0x1E, 0x3F, 0x73, 0xE1, 0xC0, 0x80, // 247
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x0F, 0x1F, 0x3F, 0x38, 0x30, 0xFF, 0xFF, 0xFF, 0x30, 0x38, 0x3F, 0x1F, 0x0F, // 248
    0x00, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x7C, 0x3C, 0x7C, 0x60, 0x60, 0x7F, 0x3F, 0x1F, // 249
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 250
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 251
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 252
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 253
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 254
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 255
    
};

#endif
