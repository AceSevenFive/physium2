#include "color.h"
#include "display.h"
#include "display_syscalls.h"
#include <CONVERT_syscalls.h>
#include <STD_syscalls.h>
#include "string.h"
#include "spriterenderers.h"
#include "PhysiumGlyphs.h"

unsigned char powers[8] = {
	128, 64, 32, 16, 8, 4, 2, 1
};

void WriteCheckerboard(unsigned short color1, unsigned short color2, int x, int y, int width, int height) {
	int posx = x;
	int posy = y;
	while(1) {
		if((posx % 2 == 0 && posy % 2 != 1) || (posx % 2 == posy % 2)) {
			Bdisp_SetPoint_VRAM(posx, posy, color2);
		}
		else {
			Bdisp_SetPoint_VRAM(posx, posy, color1);
		}
		posx += 1;
		if(posx > x + width) {
			if(posy == y + height) {
				break;
			}
			else {
				posx = x;
				posy += 1;
			}
		}
	}
}

void WriteGlyph(unsigned char glyph[], unsigned short color, int x, int y) {
	for(int a = 0; a < 8; a++) {
		for(int b = 0; b < 8; b++) {
			if(glyph[a] & powers[b]) {
				Bdisp_SetPoint_VRAM(x + b, y + a, color);
			}
		}
	}
}

void WriteCompoundGlyph(const char string[], unsigned int length, unsigned short color, int x, int y) {
	for(int i = 0; i < length; i++) {
		unsigned char glyph[8];
		for(int r = 0; r < 8; r++) {
			glyph[r] = *(*(PHYSIUM_PERIODTABLE_GLYPHS + string[i] + 1) + r);
		}
		WriteGlyph(glyph, color, x + (5 * i), y);
	}
}