//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	converter.c
// Author: 		Jan K. Schiermer
// Created on: 	19 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

#define M_H 60

int main(void)
{
	int input, min, hour, min_2, hour_2,h_m;

	printf("Program 1:    will convert minutes to hours and minutes!\n"
			"Program 2:    will convert minutes and hours to minutes! \n"
			"Program 3:    will add to times together!\n"
			"(OBS the programs will start directly after each other!\n\n");

	//assignment 1

	printf("Enter how many minutes should be converted to hours and"
			" minutes (enter 0 to stop program!):\n");
	scanf("%d", &input);

	while (input > 0)
	{
		hour = input / M_H;
		min = input % M_H;

		printf("%d seconds is: %d hours, %d minutes\n\n", input, hour, min);

		printf("Enter new value (enter 0 to stop program!)\n");
		scanf("%d", &input);
	}
	printf("First program has stopped!\n\n");

	//asignment 2

	printf("Second program has started!\n");
	printf("Enter first hours and then minutes that should be converted"
			" (enter 0 to stop program!):\n");
	printf("hours:");
	scanf("%d", &hour);
	printf("min:");
	scanf("%d", &min);

	while (hour + min > 0)
	{
		h_m = hour * M_H;

		printf("%d hours and %d minutes is %d minutes in total!\n\n", hour, min,
				h_m + min);

		printf("Enter first hours and then minutes that should be converted"
				" to minutes (enter 0 to stop program!):\n");
		printf("hours:");
		scanf("%d", &hour);
		printf("min:");
		scanf("%d", &min);
	}
	printf("Second program has stopped!\n\n");

	//asignment 3

	printf("Third program has started!\n");
	printf("Enter the first time (enter 0's to stop program!):\n");
	printf("hours:");
	scanf("%d", &hour);
	printf("min:");
	scanf("%d", &min);
	printf("Enter the second time:\n");
	printf("hours:");
	scanf("%d", &hour_2);
	printf("min:");
	scanf("%d", &min_2);

	while (hour + min > 0)
	{
		printf("%d hours and %d minutes + %d hours and %d minutes is:"
				"\n%d hours %d minutes\n\n", hour, min, hour_2, min_2,
				hour + hour_2, min + min_2);

		printf("Enter the first time (enter 0's to stop program!):\n");
		printf("hours:");
		scanf("%d", &hour);
		printf("min:");
		scanf("%d", &min);
		printf("Enter the second time:\n");
		printf("hours:");
		scanf("%d", &hour_2);
		printf("min:");
		scanf("%d", &min_2);
	}

	printf("\nAll programs succesfully ended.");

	return 0;
}
