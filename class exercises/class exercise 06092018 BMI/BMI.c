//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	BMI.c
// Author: 		jinxluck
// Created on: 	6 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	float height,weight,BMI;

	while(weight>0)
	{
		printf("BMI counter                Obs: Enter 0 in weight to exit!\n");

		printf("\nEnter your height in meters:");
		scanf("%f",&height);
		printf("Enter your weight in kilo:");
		scanf("%f",&weight);

		printf("\n");

		BMI=weight/(height*height);
		printf("your BMI is %.2f \n\n\n",BMI);
	}

	return 0;
}
