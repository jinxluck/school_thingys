//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	1 Oct 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	char ui;
	int blank = 0; //spaces
	int n_line = 0;
	int bla = 0;

	printf("Enter text for analyzis (press # when done):\n");

	while ((ui=getchar())!='#')
	{

	if (ui==' ')
	{
		blank++ && bla--;
	}

	if (ui=='\n')
	{
		n_line++ && bla--;
	}

	bla++;

	}

	printf("You entered:\n"
			"Spaces: %d\n"
			"New lines: %d\n"
			"Other characters: %d"
			,blank,n_line,bla);

	return 0;
}
