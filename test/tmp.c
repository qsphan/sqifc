//============================================================================
// Name        : SQIFC
// Author      : Quoc-Sang Phan <dark2bright@gmail.com>
// Version     : 0.1
// Copyright   : No
// Description : Symbolic Quantitative Information Flow Analysis for C
//============================================================================

//#include "ex41.c"
//#include "grade.c"
#include "dining.c"
//#include "vote.c"


int main(void)
{
	int K = 32;
	
	int output = func();
	
	int bv[K];
	for(int i = 0; i < K; i++)
		bv[i] = (output >> i) & 1;

	assert (!(1 && !bv[0] && !bv[1] && !bv[2]));
	return 0;
}
