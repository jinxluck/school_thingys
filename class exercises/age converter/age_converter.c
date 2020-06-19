/*
 * filename: age_converter.c
 * Author: Jan k. schiermer
 * date: Created on: 30 Aug 2018
 */

#include <stdio.h>

int main(void)
{
	int year;
	int days;

	printf("Your age please: ");

	scanf("%d", &year);
	printf("\n");

	days = year * 365;

	printf("Congratulation you have survived %d days!\n", days);

	return 0;
}
