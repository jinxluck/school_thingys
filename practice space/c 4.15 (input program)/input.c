//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// File name: 	input.c					         							  //
// Author: 		jinxluck													  //
// Created on: 	12 Sep 2018												      //
// Description:															      //
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void)
{
	int age;
	float assets;
	char pet[30];

	printf("Enter your age, asset, and favourit pet.\n");
	scanf("%d %f", &age, &assets);
	scanf("%s", pet);
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
