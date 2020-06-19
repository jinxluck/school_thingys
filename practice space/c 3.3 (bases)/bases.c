/*
 * File name: bases.c
 * Author: jinxluck
 * Created on: 2 Sep 2018
 */

#include <stdio.h>

int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n",x,x,x);
	printf("dec = %d; octal = %#o; hex = %#x;\n",x,x,x);

	return 0;
}
