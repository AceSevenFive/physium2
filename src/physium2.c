#include "keyboard.hpp"
#include "color.h"
#include "display.h"
#include "keyboard_syscalls.h"
#include "rtc.h"
#include "spriterenderers.h"
#include "PhysiumGlyphs.h"
#include <CONVERT_syscalls.h>
#include "display_syscalls.h"
#include <STD_syscalls.h>
#include "mathlib.h"

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
int cursorx = 22;
int cursory = 38;
int lastkey = 0;
int lastpress;

int main() {
	Bdisp_EnableColor(1);
	lastpress = RTC_GetTicks();
	while(1) {
		int key = PRGM_GetKey();
		unsigned char buffer[12];
		itoa(RTC_GetTicks() - lastpress, buffer);
		locate_OS(15,8);
		Print_OS(buffer,0,0);
		if(key == KEY_PRGM_MENU) {  GetKey(&key); }
		if(key == KEY_PRGM_F6) {
			GetKey(&blah);
			Bdisp_Fill_VRAM(0, 1);
			WritePeriodicTable(cursorx, cursory);
			lastpress = RTC_GetTicks();
		}
		if(key == KEY_PRGM_F5) {
			Bdisp_Fill_VRAM(0, 1);
			lastpress = RTC_GetTicks();
		}
		if(((key == KEY_PRGM_RIGHT) || (key == KEY_PRGM_LEFT) || (key == KEY_PRGM_UP) || (key == KEY_PRGM_DOWN)) && (RTC_GetTicks() - lastpress >= 6)) {
			Bdisp_Fill_VRAM(0, 1);
			WritePeriodicTable(AddWithOverflow(cursorx, TernaryValueCompare(key == 27, key == 38) * 20, 384), AddWithOverflow(cursory, TernaryValueCompare(key == 37, key == 28) * 15, 168));
			cursorx = AddWithOverflow(cursorx, TernaryValueCompare(key == 27, key == 38) * 20, 384);
			cursory = AddWithOverflow(cursory, TernaryValueCompare(key == 37, key == 28) * 15, 168);
			Bdisp_PutDisp_DD();
			lastpress = RTC_GetTicks();
		}
	}
	return 0;
}
