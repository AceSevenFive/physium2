#include "mathlib.h"

int AddWithOverflow(int term1, int term2, int maxval) {
	int sum = term1;
	for(int i = 0; i < term2; i++) {
		sum++;
		if(sum > maxval) {
			sum = 0;
		}
	}
	return sum;
}