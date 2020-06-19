/*
 * File name: print1.c
 * Author: jinxluck
 * Created on: 2 Sep 2018
 */

// the fail in this one is made on purpose...

#include <stdio.h>

int main(void)
{
	int ten=10;
	int two=2;

	printf("doing it right: ");
	printf("%d minus %d is %d\n", ten, two, ten-two);

	printf("doing it wrong: ");
	printf("%d minus %d is %d\n", ten); //forgot 2 arguments.

	return 0;
}
