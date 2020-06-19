//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	squares.c												  
// Author: 		Jan K. Schiermer													  
// Created on: 	12 Sep 2018													      
// Description:															      
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	int num = 1;

	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}

	return 0;
}
