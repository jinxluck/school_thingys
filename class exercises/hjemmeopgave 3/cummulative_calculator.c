//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	Cummulative_calculator.c
// Author: 		Jan K. Schiermer
// Created on: 	5 Oct 2018
// Description: A cumulative calculator.
// Notice:      The comments are purely for my own convenience when designing
//              and setting up the program.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

#define MAX 100 //can be changed between 1 and up to the arrays memory cap.

int main(void)
{
	// Values
	double a1[MAX]; // Array 1
	double a2[MAX]; // Array 2
	double mem = 0; // Accumulative calculator
	int count, i; // Helpers/counters for the loops.

	// "Intro"
	printf("Enter a string of max %d values to get a cumulative value string.\n"
			"At the end of your values hit q for 'quit' and then 'enter',\n"
			"the program will then close and show you the results!: \n",
	MAX);

	// The "calculator"
	for (count = 0; (scanf("%lf", &a1[count])) != 0; count++)
	{
		mem = mem + a1[count];
		a2[count] = mem;
	}

	// Array printers
	printf("\nEntered values:    ");

	for (i = 0; i < count; i++)
		printf("%9.2lf ", a1[i]);

	printf("\nCumulative values: ");

	for (i = 0; i < count; i++)
		printf("%9.2lf ", a2[i]);

	printf("\n");

	//Return value
	return 0;
}
