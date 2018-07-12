#include "color.h"
#include "display.h"
#include "display_syscalls.h"
#include <STD_syscalls.h>
#include "string.h"
#include "spriterenderers.h"
#include "PhysiumGlyphs.h"

void WriteCheckerboard(unsigned short color1, unsigned short color2, int x, int y, int width, int height) {
	for(int posx = x; posx < x + width; posx++) {
		for(int posy = y; posy < y + height; posy++) {
			if((posx % 2 == 0 && posy % 2 != 1) || (posx % 2 == posy % 2)) {
				Bdisp_SetPoint_VRAM(posx, posy, color2);
			}
			else {
				Bdisp_SetPoint_VRAM(posx, posy, color1);
			}
		}
	}
}

void WriteCompoundGlyph(const char string[], unsigned int length, unsigned int spacing, unsigned short color, int x, int y) {
	for(int i = 0; i < length; i++) {
		unsigned char glyph[8];
		for(int r = 0; r < 8; r++) {
			glyph[r] = *(*(PHYSIUM_PERIODTABLE_GLYPHS + string[i] - 31) + r);
		}
		for(int a = 0; a < 8; a++) {
			for(int b = 0; b < 8; b++) {
				if(glyph[a] & 128 >> b) {
					Bdisp_SetPoint_VRAM(x + (spacing * i) + b, y + a, color);
				}
			}
		}
	}
}

void WriteCompoundGlyphStates(const char string[], unsigned int length, unsigned int spacing, unsigned short color, int x, int y) {
	for(int i = 0; i < length; i++) {
		unsigned char glyph[8];
		for(int r = 0; r < 8; r++) {
			glyph[r] = *(*(PHYSIUM_PERIODTABLE_STATES + string[i] - 48) + r);
		}
		for(int a = 0; a < 8; a++) {
			for(int b = 0; b < 8; b++) {
				if(glyph[a] & 128 >> b) {
					Bdisp_SetPoint_VRAM(x + (spacing * i) + b, y + a, color);
				}
			}
		}
	}
}