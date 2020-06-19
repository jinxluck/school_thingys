//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		jinxluck
// Created on: 	6 Sep 2018
// Description: radius to areal and circumference
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <math.h>

int main(void)
{
	double radius, areal, circ;

	while (1)
	{

		printf("Enter radius:");
		scanf("%lf", &radius);

		areal = M_PI * radius * radius;
		circ = 2 * M_PI * radius;

		printf("\n");
		printf("radius = %.2f, areal = %.2f, circumference = %.2f.\n\n ",
				radius, areal, circ);

	}

	return 0;
}
