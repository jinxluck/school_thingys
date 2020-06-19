//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		jinxluck
// Created on: 	6 Sep 2018
// Description: Age converter to seconds.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	int years;      //years of the user
	float seconds;  //years converted to seconds

	while (years < 100)
	{
		printf("Enter your age: ");
		scanf("%d", &years);

		seconds = 3.156e7 * years; //Years converted to seconds

		printf("%d years is %.2e\n\n", years, seconds);
	}

	return 0;
}

