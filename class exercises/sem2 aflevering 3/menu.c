//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	menu.c
// Author: 		Jan K. Schiermer
// Created on: 	1 Apr 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include "bin_tree.h"

int main(void)
{
	char file[MAX];
	Tree bin;

	init_tree(&bin);

	printf("Write file name / path\n");
	scanf("%s", file);

	add_list(file, &bin);

	printf("done\n");

	return 0;
}

