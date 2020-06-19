//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// File name: 	skip.c														  //
// Author: 		jinxluck													  //
// Created on: 	12 Sep 2018												      //
// Description:															      //
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	return 0;
}
