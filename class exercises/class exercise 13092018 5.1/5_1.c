//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	5_1.c
// Author: 		jinxluck
// Created on: 	13 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	int tal, x;

	printf("Enter a number:");
	scanf("%d", &tal);

	x = tal;

	while (x < tal + 10)
	{
		printf("%d\n", x);

		x = x + 1;
	}
	printf("Done!");

	return 0;
}
