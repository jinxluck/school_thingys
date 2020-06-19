//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	pyramide.c
// Author: 		Jan K. Schiermer
// Created on: 	27 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#define LIMIT 250

int main(void)
{
	char ent_val[LIMIT];
	int n;

	printf("Enter a anything:");

	for (n=0;n<LIMIT;n++)
	{
		scanf("%c",&ent_val[n]);
		if (ent_val[n]=='\n')
			break;
	}

	for (;n>-1;n--)
		printf("%c",ent_val[n]);


	return 0;
}
