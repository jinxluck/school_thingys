//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	21 Mar 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h> // has the malloc prototype
#include <string.h>  // has the strcpy prototype

#define TSIZE 45 // size of the array to hold the title

struct film
{
	char title[TSIZE];
	int rating;
	struct film *next; // points to the next struct in the list
	struct film *pre;
};

char * s_gets(char * st, int n);

int main(void)
{
	struct film * head = NULL;
	struct film * prev, * current, *tail;
	char input[TSIZE];

	//gather an store information
	puts("Enter first movie title");

	while(s_gets(input,TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *) malloc(sizeof(struct film));
		if(head == NULL)
			head = current;
		else
		{
			prev -> next = current;
			current -> pre = prev;
		}

		current -> next = NULL;
		strcpy(current -> title, input);

		puts("Enter your rating <1-10>:");
		scanf("%d",&current->rating);

		while(getchar() != '\n')
			continue;

		puts("Enter next movie title (empty line to stop)");

		prev = current;
		tail = current;
	}

	//show list of movies in normal order
	if(head == NULL)
		printf("No data entered.");
	else
		printf("Here is the movie list:\n");

	current = head;

	while(current != NULL)
	{
		printf("Movie: %s Rating: %d\n",current -> title, current -> rating);

		current = current -> next;
	}

	//show of movies in reverse order
	if(head == NULL)
		printf("No data entered");
	else
		printf("\nHere is the reverse movie list:\n");

	current = tail;
	while(current != NULL)
	{
		printf("Movie: %s Rating: %d\n",current -> title, current -> rating);

		current = current -> pre;
	}

	//program done so free allocated memory
	current = head;

	while(head != NULL)
	{
		current = head;
		head = current -> next;
		free(current);
	}

	printf("Bye!\n");

	return 0;
}

char * s_gets(char * st,int n)
{
	char * ret_val;
	char * find;

	ret_val= fgets(st,n,stdin);

	if(ret_val)
	{
		find = strchr(st,'\n');
		if(find)
			*find= '\0';
		else
			while(getchar() != '\n')
				continue;
	}

	return ret_val;
}
