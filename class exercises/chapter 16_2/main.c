//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	4 Mar 2019
// Description: use a macro to find the harmonic mean of 2 numbers.
//				the harmonic mean is the inverse of the two numbers ->
//				avering them -> inverse the result.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include "rf.h"
#include <strings.h>

#define harmonic(a,b) inverse((inverse(a)+inverse(b))/2)

int main(int argc, char * argv[])
{
	char *ca = argv[1];
	int a = atoi(ca);
	char *cb = argv[2];
	int b = atoi(cb);
	int harm = harmonic(a,b);

	printf("Your number: %d & %d, harmonic mean is: %d\n",a,b,harm);

	return 0;
}
