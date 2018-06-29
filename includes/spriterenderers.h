#ifndef __SPRITERENDERERS_H__
#define __SPRITERENDERERS_H__

void WriteCheckerboard(unsigned short color1, unsigned short color2, int x, int y, int width, int height);
void WriteGlyph(unsigned char glyph[], unsigned short color, int x, int y);
void WriteCompoundGlyph(const char string[], unsigned int length, unsigned short color, int x, int y);

#endif