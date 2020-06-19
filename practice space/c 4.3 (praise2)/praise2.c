//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// File name: 	praise2.c													  //
// Author: 		jinxluck													  //
// Created on: 	9 Sep 2018												      //
// Description:															      //
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>
#include <string.h>

#define praise "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, praise);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
			strlen(name), sizeof(name));
	printf("The phrase of praise has %zd letters", strlen(praise));
	printf(" and occupies %zd memory cells.\n", sizeof(praise));

	return 0;
}
