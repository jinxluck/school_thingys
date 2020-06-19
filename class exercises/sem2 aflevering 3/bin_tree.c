//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	bin_tree.c
// Author: 		Jan K. Schiermer
// Created on: 	1 Apr 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "bin_tree.h"

void init_tree(Tree * bin_tree)
{
	printf("init tree\n\n");
	bin_tree -> th = NULL;
	bin_tree -> tv = NULL;
	bin_tree ->word.word_in_struct[0] = '+';
}

void add_list(char list_name[], Tree * bin_tree)
{
	FILE * fp;
	char holder[50];
	int count = 0;

	printf("add_list\n");

	if((fp = fopen("/home/jinxluck/eclipse-workspaces/class "
	"exercises/sem2 aflevering 3/Debug/test.txt","r"))==NULL) //skal ændres
	{
	printf("error");
	}

	printf("fileopen\n");

	while((fscanf(fp, "%s", holder)) == 1)
	{
		printf("holder\n");
		add_word(holder, bin_tree);
		count++;
	}
	printf("%d\n",count);
	fclose(fp);
}

void add_word(char word_to_add[], Tree * bin_tree)
{
	Tree * search = bin_tree;
	Tree * hold;
	Tree * new;
	new = (Tree *) malloc(sizeof(Tree));

	strcpy(new->word.word_in_struct,word_to_add);

	int cmpval = 0;
	int i = 0;

	if(bin_tree->tv!=NULL)
	printf("while løkke start=%s\n",bin_tree->tv->word.word_in_struct);

	while(i != 1)
	{
		//printf("while løkke=%c\n",bin_tree->word.word_in_struct[0]);
	if(search->word.word_in_struct[0] == '+')
	{
		printf("1\n");
		strcpy(bin_tree->word.word_in_struct, new->word.word_in_struct);
		printf("root= %s \n",search->word.word_in_struct);
		i = 1;
	}
	else
	{
		cmpval = strcmp(search->word.word_in_struct,word_to_add);
		//printf("%d",cmpval);
		if(cmpval < 0)
		{
			printf("2 cmpval = %d\n",cmpval);
			if(search->tv==NULL)
			{
				printf("tja\n");
				search->tv=new;
				search = search -> tv;
				printf("search->tv= %s \n",search->word.word_in_struct);
				i =1;
			}
			if(search->tv!=NULL)
			{
				printf("lol\n");
				search = search -> tv;
				printf("search->word= %s \nsearch->tv= %s "
						"word to add=%s\n",search->word.word_in_struct,search->tv->word.word_in_struct,word_to_add);
			}
		}
		if(cmpval > 0)
		{
			printf("3\n");
			if(search->th==NULL)
			{
				search->th = new;
				i = 1;
			}
			else
				search = search -> th;

		}
	}
	}
	free(new);

	if(bin_tree->tv!=NULL)
		printf("while løkke slut=%s\n\n",bin_tree->tv->word.word_in_struct);
}

void search_word(char word_to_search, Tree * bin_tree)
{
	Tree * search = bin_tree;
	int cmpval = 0;
	int i = 0;

	while(i != 1)
	{

	}

}
