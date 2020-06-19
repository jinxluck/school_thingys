//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	12 Nov 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

#define LIMIT 5

int main(void)
{
	double bla[LIMIT]={1,2,3,4,5};
	int counter;
	double bla_a_n[LIMIT]; // array notation
	double bla_p_n[LIMIT]; // pointer notation
	double bla_t_a[LIMIT]; // third argument copy
	double s_p,e_p;

	printf("array notation\n");

	for(counter=0;counter<LIMIT;counter++) //array notation
	{
		bla_a_n[counter]=bla[counter];
		printf("%.0lf ",bla_a_n[counter]);
	}

	printf("\npointer notation\n");

	for(counter=0;counter<LIMIT;counter++) //pointer notation
	{
		bla_p_n[counter]=*(counter+bla);
		printf("%.0lf ",bla_p_n[counter]);
	}

	printf("\nthird\n");

	s_p=*(0+bla);
	e_p=*((LIMIT-1)+bla);

	for(counter=0;s_p<e_p;counter++)
	{
		bla_t_a[counter]=*(counter+bla);
		printf("%.0lf ",bla_t_a[counter]);
		s_p=*(counter+bla);
	}

	return 0;
}
