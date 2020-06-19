//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// File name: 	praise.c												 	  //
// Author: 		jinxluck													  //
// Created on: 	9 Sep 2018												      //
// Description:															      //
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

#define praise "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("Whats your name?\n");
	scanf("%s", name);
	printf("Hello, %s, %s\n", name, praise);

	return 0;
}
