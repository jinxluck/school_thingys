//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	homeassignment1.c
// Author: 		jinxluck
// Created on: 	3 Sep 2018
// Description:	build a pint converter that can convert to cups, ounce and ml.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	float pint, cups, ounce, ml; //The different amounts
								 //Using float so in case of ex. 2.5 pint works

	printf("Enter amounts of pints\n");
	printf(":");
	scanf("%f", &pint);

	cups = pint * 2;		//1 pint = 2 cups
	ounce = 8 * pint;		//1 pint = 8 ounces
	ml = 473.1765 * pint;	//1 pint = 473.1765 ml

	printf("%.2f pints is = %.2f cups = %.2f ounces = %.2f ml", pint, cups,
			ounce, ml);

	return 0;

}

