//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	main.c
// Author: 		Jan K. Schiermer
// Created on: 	11 Mar 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main(void)
{
	FILE * pt;
	int bla = 12345;

	pt = fopen("test5.bin","wb");
	fwrite(&bla,sizeof(int),1,pt);
	fclose(pt);

	return 0;
}
