#include "mathlib.h"

int AddWithOverflow(short term1, short term2, short maxval) {
	return (term1 + term2) % maxval;
}

int TernaryValueCompare(int term1, int term2) {
	if(term1 > term2) {
		return 1;
	}
	else if(term2 > term1) {
		return -1;
	}
	else {
		return 0;
	}
}