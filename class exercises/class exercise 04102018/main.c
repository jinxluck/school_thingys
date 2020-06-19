//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	4 Oct 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	char input;
	int loop,dots,exclam;
	loop=1;
	dots=0;
	exclam=0;

	printf("Enter # to exit!\n");
	printf("Enter a text where all . will become !, "
					"and all ! becomes !!.\n");

	while (loop!=0)
	{
	if ((input=getchar())=='#')
	{
		loop=0;
		printf("\nYou have changed: %d dots, and %d exclamations"
				" in total",dots,exclam);
	}
	else if (input=='.')
	{
		printf("!");
		dots++;
	}
	else if (input=='!')
	{
		printf("!!");
		exclam++;
	}
	else
	{
		printf("%c",input);
	}

	}



	return 0;
}
