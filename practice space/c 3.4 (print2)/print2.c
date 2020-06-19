/*
 * File name: print2.c
 * Author: jinxluck
 * Created on: 2 Sep 2018
 */

#include <stdio.h>

int main(void)
{
	unsigned int un = 3000000000; // system with 32-bit int
	short end = 200; // and 16-bit short
	long big = 65637;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}
