//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	exercise_6.1.c
// Author: 		Jan K. Schiermer
// Created on: 	24 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <math.h>

int main(void)
{
	float input_1;
	float input_2;
	int ret_value;

	printf("Enter the first number (q to exit):");

	while ((ret_value = scanf("%f", &input_1)) == 1)
	{
		printf("Enter next number:");
		scanf("%f", &input_2);

		input_1 = (fabs(input_1 - input_2)) / (input_1 + input_2);

		printf("The value is: %.5f\n", input_1);

		printf("Enter the first number (q to exit):\n");
	}
	printf("Program has ended");

	return 0;
}
