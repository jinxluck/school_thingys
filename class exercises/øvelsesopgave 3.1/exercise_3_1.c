/*
 * filename: exercise_3_1.c
 * Author: Jan k. schiermer
 * date: Created on: 3 Sep 2018
 */

#include <stdio.h>

int main(void)
{
	int ch;

	printf("Input a number to see the corresponding ASCII value\n");
	printf(":");

	scanf("%d", &ch);

	printf("The number %d in ASCII is: %c ", ch, ch);

	return 0;
}
