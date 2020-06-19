///////////////////////////////
//File name:  home_asignment_5.c
//version:
//Created on: 7 Nov 2018
//Author:     jan k. schiermer
///////////////////////////////

#include <stdio.h>

void fibonacci(int count);

#define MAX 100

int main(void)
{
	int count;

	printf("Enter amount of fibonacci numbers you want.\n"
			"Max amount of numbers is %d:", MAX);
	scanf("%d", &count);

	fibonacci(count);

	return 0;
}
void fibonacci(int count)
{
	int n, fibonacci[MAX];
	n = 0;
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	fibonacci[3] = 2;
	fibonacci[4] = 3;
	for (; n != count; n++)
	{
		if (n < 5)
			printf("%d\n", fibonacci[n]);
		else
		{
			fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
			printf("%d\n", fibonacci[n]);
		}
	}
}
