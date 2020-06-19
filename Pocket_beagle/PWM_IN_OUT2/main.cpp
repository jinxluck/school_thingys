/*
 * main.cpp
 *
 *  Created on: 20 Mar 2020
 *  Author: jinxluck
 *
 *  Description:
 *  	Program to test the time delay for an incoming PWM signal,
 *  	to be copied and sent out, on another gpio pin.
 */

#include<iostream>
#include<unistd.h> //for usleep
#include"GPIO_controle.h"

using namespace std;

int GPIO_IN = 52; //P2.10
int GI_pin = 210;

int GPIO_OUT = 15; //P2.09
int GO_pin = 209;

int main(void)
{
	printf("PWM input to output V2.5\n\n");
	int val= 0;

	//Initialize gpio's
	init_gpio(GI_pin);
	init_gpio(GO_pin);

	//Set gpio directions
	set_direction(GPIO_IN, 0);
	set_direction(GPIO_OUT, 1);

	//Start polling loop
	printf(" *Starting loop\n");
	printf("   |-Use ctrl+c to stop program \n");
	while(1)
	{
		val = read_value(GPIO_IN);
		if(val)
		{
			set_value(GPIO_OUT, 1);
		}
		else
		{
			set_value(GPIO_OUT, 0);
		}
	}

	return 0;
}
