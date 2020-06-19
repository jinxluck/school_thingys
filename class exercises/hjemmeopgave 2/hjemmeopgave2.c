//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	hjemmeopgave2.c
// Author: 		Jan K. Schiermer
// Created on: 	20 Sep 2018
// Description: converter for fahrenheit to celcius and kelvin using a function
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

void TemperatureConv(double fahrenheit);

int main(void)
{
	double fahrenheit; //User input.

	printf("Enter temp. in fahrenheit to convert it to celsius and kelvin"
			" (enter q to exit).\n"
			"Fahrenheit:");

	while (scanf("%lf", &fahrenheit) != 0)
	{
		TemperatureConv(fahrenheit); //function call

		printf("Enter temp. in fahrenheit to convert it to celsius and kelvin"
				" (enter q to exit).\n"
				"Fahrenheit:");
	}
	printf("\nGoodbye"); // Exit verification notice

	return 0;
}

//Fahrenheit converter:
void TemperatureConv(double fahrenheit)
{
	const double CELSIUS = 5.0 / 9.0 * (fahrenheit - 32.0);
	const double KELVIN = CELSIUS + 273.16;

	printf("Fahrenheit: %.2f\n"
			"Celsius: %.2f\n"
			"Kelvin: %.2f\n\n", fahrenheit, CELSIUS, KELVIN);
}
