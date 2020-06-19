/*
 * filename: Squaring_program.c
 * Author: Jan k. schiermer
 * date: Created on: 30 Aug 2018
 */

#include <stdio.h>

int main(void)
{
	int number; //number for squaring
	int square;

	printf("Put a number and let it be squared!\n");
	printf("number: ");

	scanf("%d", &number);
	printf("\n");

	square = number * number;

	printf("Here is your number:%d, now bugger off!", square);

	return 0;
}
