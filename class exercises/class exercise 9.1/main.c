//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	5 Nov 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <assert.h>
#include <stdio.h>

double min(double x, double y);

int main(void)
{
	double x,y,val;

	printf("Enter 2 numbers and the lowest will be written");

	assert(min(1,2)==1);
	assert(min(2,1)==1);
	assert(min(-2,1)==-2);
	assert(min(2,-1)==-1);
	assert(min(2.2,1.2)==1.2);

	scanf("%lf %lf",&x,&y);

	val=min(x,y);

	printf("%.2lf",val);

	return 0;
}

double min(double x, double y)
{
	double val;

	if(x<y)
		val=x;

	if(x>y)
		val=y;

	return val;
}
