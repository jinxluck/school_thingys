/*
 * File name: charcode.c
 * Author: jinxluck
 * Created on: 2 Sep 2018
 */

#include <stdio.h>

int main(void)
{
	char ch;

	printf("Please enter a character.\n");

	scanf("%c",&ch);

	printf("the code for %c is %x.\n",ch,ch);

	return 0;
}
