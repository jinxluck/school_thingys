//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		jinxluck
// Created on: 	11 Sep 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{

	// Asignment a
	char name[20];
	char first[20];
	char last[20];
	char adress[40];
	char city[40];
	int number,zip;
	char test[40];

	printf("Write your name:\n");
	scanf("%s", name);
	printf("Your name in quotation signs. \n");
	printf("\"%s\"\n\n", name);

	//Asignment b

	printf("Your name to the right, in a 20 sign space.\n");
	printf("\"%20s\"\n\n", name);

	//Asignment c

	printf("Your name to the left, in a 20 sign space.\n");
	printf("\"%-20s\"\n\n", name);

	//Asignment d

	printf("Your name with 3 spaces in front.\n");
	printf("   %3s\n\n", name);

	printf("Enter your first and last name:");
	scanf("%s", first);
	scanf("%s", last);
	printf("Enter your street and house number:");
	scanf("%s %d",adress,&number);
	printf("Enter your city and zip number:");
	scanf("%s %d",city,&zip);
	printf("%s %s\n",first,last);
	printf("%s %d\n",adress,number);
	printf("%s %d\n\n",city,zip);

	printf("*%s %s*",first,last);

	return 0;
}
