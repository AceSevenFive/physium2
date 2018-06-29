#include "keyboard.hpp"
#include "color.h"
#include "display.h"
#include "keyboard_syscalls.h"
#include "rtc.h"
#include "spriterenderers.h"
#include "PhysiumGlyphs.h"
#include "PhysiumMenu.h"
#include <CONVERT_syscalls.h>
#include "display_syscalls.h"

/*void CopySprite(const color_t* sprite, int x, int y, int width, int height) {
   color_t* VRAM = (color_t*)0xA8000000;
   VRAM += LCD_WIDTH_PX*y + x;
   for(int j=y; j<y+height; j++) {
      for(int i=x; i<x+width; i++) {
         *(VRAM++) = *(sprite++);
      }
      VRAM += LCD_WIDTH_PX-width;
   }
}*/

int PRGM_GetKey() {
  unsigned char buffer[12];
  PRGM_GetKey_OS( buffer );
  return ( buffer[1] & 0x0F ) * 10 + ( ( buffer[2] & 0xF0 ) >> 4 );
}

int blah;

int main() {
  Bdisp_EnableColor(1);
  while(1) {
    int key = PRGM_GetKey();
    if(key == KEY_PRGM_MENU) {  GetKey(&key); }
    if(key == KEY_PRGM_F6) {
        GetKey(&blah);
		int time = RTC_GetTicks();
		WriteCheckerboard(0xFCCC, 0xFC8C, 23, 39, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 283, 54, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 303, 54, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 323, 54, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 343, 54, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 303, 69, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 323, 69, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 343, 69, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 323, 84, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 343, 84, 17, 12);
		WriteCheckerboard(0xFCCC, 0xFC8C, 343, 99, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 54, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 69, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 84, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 99, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 114, 17, 12);
		WriteCheckerboard(0xFAA0, 0xFAE1, 23, 129, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 54, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 69, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 84, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 99, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 114, 17, 12);
		WriteCheckerboard(0xDD60, 0xDD20, 43, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 63, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 63, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 83, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 83, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 83, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 83, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 103, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 103, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 103, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 103, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 123, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 123, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 123, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 123, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 143, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 143, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 143, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 143, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 163, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 163, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 163, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 163, 129, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 183, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 183, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 183, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 203, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 203, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 203, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 223, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 223, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 223, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 243, 84, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 243, 99, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 243, 114, 17, 12);
		WriteCheckerboard(0x8452, 0x8C73, 243, 129, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 263, 69, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 263, 84, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 263, 99, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 263, 114, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 283, 99, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 283, 114, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 283, 129, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 303, 114, 17, 12);
		WriteCheckerboard(0x89C0, 0x91C0, 323, 114, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 263, 54, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 283, 69, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 283, 84, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 303, 84, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 303, 99, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 323, 99, 17, 12);
		WriteCheckerboard(0xB490, 0xAC70, 343, 114, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 183, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 203, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 223, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 263, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 303, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 323, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 343, 129, 17, 12);
		WriteCheckerboard(0xBDF7, 0xC618, 363, 129, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 39, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 54, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 69, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 84, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 99, 17, 12);
		WriteCheckerboard(0xF986, 0xF908, 363, 114, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 83, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 103, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 123, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 143, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 163, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 183, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 203, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 223, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 243, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 263, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 283, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 303, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 323, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 343, 147, 17, 12);
		WriteCheckerboard(0x4651, 0x4630, 363, 147, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 83, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 103, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 123, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 143, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 163, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 183, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 203, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 223, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 243, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 263, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 283, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 303, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 323, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 343, 162, 17, 12);
		WriteCheckerboard(0x9C5F, 0xA47F, 363, 162, 17, 12);
		WriteCompoundGlyph("1", 1, GAS_COLOR, 31, 40);
		WriteCompoundGlyph("H", 1, GAS_COLOR, 30, 46);
		WriteCompoundGlyph("2", 1, GAS_COLOR, 371, 40);
		WriteCompoundGlyph("He", 2, GAS_COLOR, 368, 46);
		WriteCompoundGlyph("3   4", 5, SOLID_COLOR, 30, 55);
		WriteCompoundGlyph("Li  Be", 6, SOLID_COLOR, 28, 61);
		WriteCompoundGlyph("5   6", 5, SOLID_COLOR, 270, 55);
		WriteCompoundGlyph("B   C", 5, SOLID_COLOR, 270, 61);
		WriteCompoundGlyph("7   8   9", 9, GAS_COLOR, 310, 55);
		WriteCompoundGlyph("N   O   F", 9, GAS_COLOR, 310, 61);
		WriteCompoundGlyph("1", 1, GAS_COLOR, 369, 55);
		WriteCompoundGlyph("0", 1, GAS_COLOR, 373, 55);
		WriteCompoundGlyph("Ne", 2, GAS_COLOR, 368, 61);
		WriteCompoundGlyph("11  1", 5, SOLID_COLOR, 29, 70);
		WriteCompoundGlyph("2", 1, SOLID_COLOR, 53, 70);
		WriteCompoundGlyph("Na   g", 6, SOLID_COLOR, 28, 76);
		WriteCompoundGlyph("M", 1, SOLID_COLOR, 47, 76);
		WriteCompoundGlyph("1   1   1   1", 13, SOLID_COLOR, 269, 70);
		WriteCompoundGlyph("1   1", 5, GAS_COLOR, 349, 70);
		WriteCompoundGlyph("3   4   5   6", 13, SOLID_COLOR, 273, 70);
		WriteCompoundGlyph("7   8", 5, GAS_COLOR, 353, 70);
		WriteCompoundGlyph("Al  Si", 6, SOLID_COLOR, 269, 76);
		WriteCompoundGlyph("P   S", 5, SOLID_COLOR, 310, 76);
		WriteCompoundGlyph("Cl", 2, GAS_COLOR, 349, 76);
		WriteCompoundGlyph("Ar", 2, GAS_COLOR, 368, 76);
		WriteCompoundGlyph("1", 1, SOLID_COLOR, 29, 85);
		WriteCompoundGlyph("9  20  21  2", 12, SOLID_COLOR, 33, 85);
		WriteCompoundGlyph("2  23", 5, SOLID_COLOR, 93, 85);
		WriteCompoundGlyph("2   2   2   2   2   2", 21, SOLID_COLOR, 128, 85);
		WriteCompoundGlyph("4   5", 5, SOLID_COLOR, 133, 85);
		WriteCompoundGlyph("6   7   8   9   0   1   2   3   4", 33, SOLID_COLOR, 173, 85);
		WriteCompoundGlyph("3   3   3   3   3", 17, SOLID_COLOR, 248, 85);
		WriteCompoundGlyph("35", 2, LIQUID_COLOR, 348, 85);
		WriteCompoundGlyph("36", 2, GAS_COLOR, 368, 85);
		WriteCompoundGlyph("K", 1, SOLID_COLOR, 30, 91);
		WriteCompoundGlyph("Ca  Sc  T", 9, SOLID_COLOR, 48, 91);
		WriteCompoundGlyph("i", 1, SOLID_COLOR, 94, 91);
		WriteCompoundGlyph("V", 1, SOLID_COLOR, 110, 91);
		WriteCompoundGlyph("Cr", 2, SOLID_COLOR, 128, 91);
		WriteCompoundGlyph("M", 1, SOLID_COLOR, 147, 91);
		WriteCompoundGlyph("n  Fe  Co  Ni  Cu  Zn  Ga  Ge  As  Se", 37, SOLID_COLOR, 153, 91);
		WriteCompoundGlyph("Br", 2, LIQUID_COLOR, 348, 91);
		WriteCompoundGlyph("Kr", 2, GAS_COLOR, 368, 91);
		int time2 = RTC_GetTicks();
		unsigned char buffer[12];
		itoa(time2 - time, buffer);
		locate_OS(15,8);
		Print_OS(buffer,0,0);
	}
	if(key == KEY_PRGM_F5) {
		Bdisp_Fill_VRAM(0, 1);
	}
  }
  return 0;
}
