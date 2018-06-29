#ifndef _PHYSIUM_GLYPHS_H
#define _PHYSIUM_GLYPHS_H

/*unsigned char PHYSIUM_SPACE[8] = {
	0, 0, 0, 0, 0, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_1[8] = {
	192, 64, 64, 64, 64, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_2[8] = {
	240, 16, 240, 128, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_3[8] = {
	240, 16, 240, 16, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_4[8] = {
	144, 144, 112, 16, 16, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_5[8] = {
	240, 128, 240, 16, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_6[8] = {
	240, 128, 240, 144, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_7[8] = {
	240, 16, 32, 32, 32, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_8[8] = {
	240, 144, 240, 144, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_9[8] = {
	240, 144, 240, 16, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLNUM_0[8] = {
	240, 144, 144, 144, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_A[8] = {
	96, 144, 240, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_B[8] = {
	224, 144, 224, 144, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_C[8] = {
	112, 128, 128, 128, 112, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_D[8] = {
	224, 144, 144, 144, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_E[8] = {
	240, 128, 224, 128, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_F[8] = {
	240, 128, 224, 128, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_G[8] = {
	112, 128, 176, 144, 112, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_H[8] = {
	144, 144, 240, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_I[8] = {
	224, 64, 64, 64, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_K[8] = {
	144, 160, 192, 160, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_L[8] = {
	128, 128, 128, 128, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_M[8] = {
	136, 216, 168, 136, 136, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_N[8] = {
	144, 208, 176, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_O[8] = {
	96, 144, 144, 144, 96, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_P[8] = {
	224, 144, 224, 128, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_R[8] = {
	224, 144, 224, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_S[8] = {
	112, 128, 224, 16, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_T[8] = {
	248, 32, 32, 32, 32, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_U[8] = {
	144, 144, 144, 144, 96, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_V[8] = {
	136, 136, 136, 80, 32, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_W[8] = {
	168, 168, 168, 168, 80, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_X[8] = {
	144, 96, 96, 96, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLCAP_Z[8] = {
	240, 16, 32, 64, 240, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_A[8] = {
	192, 32, 112, 144, 112, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_B[8] = {
	128, 128, 224, 144, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_C[8] = {
	96, 144, 128, 144, 96, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_D[8] = {
	16, 16, 112, 144, 112, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_E[8] = {
	96, 144, 240, 128, 112, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_F[8] = {
	32, 64, 224, 64, 64, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_G[8] = {
	112, 144, 112, 16, 96, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_H[8] = {
	128, 128, 224, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_I[8] = {
	128, 0, 128, 128, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_K[8] = {
	128, 128, 160, 196, 160, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_L[8] = {
	128, 128, 128, 128, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_M[8] = {
	0, 208, 168, 168, 168, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_N[8] = {
	0, 160, 208, 144, 144, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_O[8] = {
	0, 96, 144, 144, 96, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_P[8] = {
	0, 224, 144, 224, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_R[8] = {
	0, 160, 192, 128, 128, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_S[8] = {
	112, 128, 96, 16, 224, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_T[8] = {
	64, 224, 64, 64, 32, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_U[8] = {
	0, 144, 144, 176, 80, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_V[8] = {
	0, 136, 136, 80, 32, 0, 0, 0
};

unsigned char PHYSIUM_SMALLLOW_Y[8] = {
	0, 160, 96, 32, 192, 0, 0, 0
};*/

extern unsigned char PHYSIUM_PERIODTABLE_GLYPHS[256][8];

#endif
	