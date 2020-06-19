//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	22 Nov 2018
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int menu(void);
void show_soduko(void);
void set_array(void);
void solve_soduko(void);

int main(void)
{
	int choice;

	printf("Welcome to the soduko solver\n");
	while(choice!=4)
	{
		choice=menu();

		switch(choice)
		{
		case 1:
			show_soduko();
			break;
		case 2:
			set_array();
			break;
		case 3:
			solve_soduko();
			break;
		}
	}

	printf("%d",choice);

	return 0;
}

int menu(void)
{
	int keypress;

	printf("Key             Function\n");
	printf("1)              Show soduko\n");
	printf("2)              Set array\n");
	printf("3)              Solve soduko\n");
	printf("4)              Exit\n");

	while(1)
	{
		scanf("%d",&keypress);

		switch(keypress)
		{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		default:
			printf("Sorry wrong input try again\n");
			while((getchar())!='\n');
			continue;
		}
	}
}
void show_soduko(void)
{

}
void set_array(void)
{

}
void solve_soduko(void)
{

}
