//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	8 Nov 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

double power(double n, int p); // ANSI prototype

int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power to which\n"
			"the number will be raised. Enter q to quit.\n");

	while (scanf("%lf %d", &x, &exp) == 2)
	{
		if(exp==0&&x<0)
		{
			printf("%.3g to the power %d is -1\n", x, exp);
			printf("Enter next pair of numbers or q to quit.\n");
			continue;
		}

		xpow = power(x, exp); // function call

		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}

	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}
double power(double n, int p) // function definition
{
	double pow = 1;
	int i=0;

	if(i<p)
	{
	for (i=1; i <= p; i++)
		{
		pow *= n;
		}
	}
	else
	{
	for (i=-1; i >= p; i--)
		{
		pow /= n;
		}
	}

	return pow; // return the value of pow
}
