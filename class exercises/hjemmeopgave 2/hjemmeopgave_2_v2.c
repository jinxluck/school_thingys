//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	hjemmeopgave_2_v2.c
// Author: 		Jan K. Schiermer
// Created on: 	28 Sep 2018
// version:     2
// Description: converter for fahrenheit to celcius and kelvin using a function
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int TemperatureConv2(void);

int main2(void)
{
	while(TemperatureConv2());

	return 0;
}

//Fahrenheit converter:
int TemperatureConv2(void)
{
	int scanfreturn;
	double Fahrenheit;
	const double CELSIUS = 5.0 / 9.0 * (Fahrenheit - 32.0);
	const double KELVIN = CELSIUS + 273.16;

	printf("Enter fahrenheit:");
	scanfreturn=scanf("%lf",&Fahrenheit);
	printf("%.2f in celsius: %.2f, in kelvin: %.2f\n\n", Fahrenheit, CELSIUS,
			KELVIN);

	return scanfreturn;
}

