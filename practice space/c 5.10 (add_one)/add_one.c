//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	add_one.c												  
// Author: 		Jan K. Schiermer													  
// Created on: 	19 Sep 2018													      
// Description:															      
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;
		++ultra;

		printf("super = %d, ultra = %d \n", super, ultra);
	}

	return 0;
}
