/*
 * filename: age_converter.c
 * Author: Jan k. schiermer
 * date: Created on: 30 Aug 2018
 */

#include <stdio.h>

int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinium?\n");
	printf("Let's check it out.\n");
	printf("Please enter you weight in pounds: ");

	//get input from the user
	scanf("%f", &weight);

	//asume platinium is 1700$ pr ounce
	//14.5833 converts pounds avd. to ounce troy
	value=1700*weight*14.5833;
	printf("Your weight in platinium is worth $%.3f.\n",value);
	printf("Your easily worth that! If platinium prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
