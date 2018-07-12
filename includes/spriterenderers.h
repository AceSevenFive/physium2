#ifndef __SPRITERENDERERS_H__
#define __SPRITERENDERERS_H__

void WriteCheckerboard(unsigned short color1, unsigned short color2, int x, int y, int width, int height);
void WriteCompoundGlyph(const char string[], unsigned int length, unsigned int spacing, unsigned short color, int x, int y);
void WriteCompoundGlyphStates(const char string[], unsigned int length, unsigned int spacing, unsigned short color, int x, int y);

#define SOLID_COLOR (unsigned short)0xFFFE
#define LIQUID_COLOR (unsigned short)0x9E7F
#define GAS_COLOR (unsigned short)0xFF51

#endif