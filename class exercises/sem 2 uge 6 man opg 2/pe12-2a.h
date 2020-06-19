//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	pe12-2a.h
// Author: 		Jan K. Schiermer
// Created on: 	4 Feb 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#ifndef PE12_2A_H_
#define PE12_2A_H_

extern int mode;
extern int mode_val;
extern double distance;
extern double fuel_consumed;

#endif /* PE12_2A_H_ */

#include <stdio.h>
#include <strings.h>

void set_mode(int n);
void get_info(void);
void show_info(void);

void set_mode(int n)
{
	if (n == -1)
		mode = -1;
	else
		switch (n)
		{
		case 1:
			mode_val = 1;
			printf("You chose US mode\n");
			break;
		case 0:
			mode_val = 0;
			printf("You chose metric mode\n");
			break;
		default:
			printf(
					"You didn't choose any mode, so mode will be set to "
					"last chosen mode\n");
			break;
		}
}

void get_info(void)
{
	if (mode_val == 0)

	{
		printf("Write distance in kilometers:");
		scanf("%lf", &distance);
		printf("enter fuel consumed in litres:");
		scanf("%lf", &fuel_consumed);
	} else
	{
		printf("Write distance in miles:");
		scanf("%lf", &distance);
		printf("enter fuel consumed in gallons:");
		scanf("%lf", &fuel_consumed);
	}
}

void show_info(void)
{
	if (mode_val == 0)
	{
		printf("Fuel consumption is: %.2lf litres pr. 100 kilometer\n",
				(fuel_consumed/distance) * 100);
	} else
		printf("Fuel consumption is: %.2lf miles pr. gallon\n"
				, (distance/fuel_consumed));
}
