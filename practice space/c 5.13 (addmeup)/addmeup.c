//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	addmeup.c												  
// Author: 		Jan K. Schiermer													  
// Created on: 	19 Sep 2018													      
// Description:															      
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	int count, sum;

	count = 0;
	sum = 0;

	while (count++ < 20)

		sum = sum + count;

	printf("sum = %d \n", sum);


	return 0;
}
