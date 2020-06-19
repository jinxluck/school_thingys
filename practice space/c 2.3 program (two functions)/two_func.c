/*
 * two_func.c
 *
 *  Created on: 29 Aug 2018
 *      Author: jinxluck
 */

//*two_func.c -- a program using two functions in one file */
# include <stdio.h>
void butler(void);  /*ANSI/ISO C function prototyping */
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writable DVD's.\n");

	return 0;
}

void butler(void)  /*start of function definition */
{
	printf("You rang, sir?\n");
}
