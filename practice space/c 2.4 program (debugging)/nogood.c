/*
 * nogood.c
 *
 *  Created on: 29 Aug 2018
 *      Author: jinxluck
 */

/* nogood.c -- a program with errors */
/* initial tried to fix version */ /* fixed in first try, except for semantic error regarding n3*/

#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	/* this program has several errors */
	n = 5;
	n2 = n * n;
	n3 = n2 * 5;
	printf("n = %d, n squared = %d, n cubed = %d\n",n,n2,n3);

	return 0;
}
