/*
 * File name: fathm.c
 * Author: jinxluck
 * Created on: 2 Sep 2018
 */

#include <stdio.h>

int main(void)
{
	int feet, fathom;

	fathom = 2;
	feet = 6 * fathom;

	printf("There are %d feet in %d fathoms!\n", feet, fathom);
	printf("Yes, I said %d feet!\n", 6 * fathom);

	return 0;
}
