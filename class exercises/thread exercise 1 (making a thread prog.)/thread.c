//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// File name: 	thread.c
// Author: 		Jan K. Schiermer
// Created on: 	8 Apr 2019
// Description:
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
#include <ctype.h>
#include <pthread.h>

#define MAX 30

char input[MAX];
char result[MAX];
int flag1, flag2 = 0;
pthread_mutex_t inmut, resmut;

void *input_func(void *funin)
{
	if(flag1 == 0)
	{
	pthread_mutex_lock(&inmut);
	printf("Input:");
	scanf("%s",input);
	pthread_mutex_unlock(&inmut);
	flag1 = 1;
	}
	return NULL;
}

void *letter_change(void *funmid)
{
	int c = 0;
	int i = strlen(input);
	if(flag1 == 1 && flag2 == 0)
	{
	pthread_mutex_lock(&inmut);
	pthread_mutex_lock(&resmut);
	while(c != i)
	{
		if(isupper(input[c]))
		{
			result[c]=tolower(input[c]);
		}
		else
		{
			result[c]=toupper(input[c]);

		}
		c++;
	}
	pthread_mutex_unlock(&resmut);
	pthread_mutex_unlock(&inmut);
	flag1 = 0;
	flag2 = 1;
	}
	return NULL;
}

void *print(void *funout)
{
	if(flag2 == 1)
	{
	pthread_mutex_lock(&resmut);
	printf("input:  %s\n",input);
	printf("output: %s\n",result);
	pthread_mutex_unlock(&resmut);
	flag2 = 0;
	}
	return NULL;
}

int main(void)
{
	pthread_t in;
	pthread_t mid;
	pthread_t out;
	int ret=0;

	pthread_mutex_init(&inmut, NULL);
	pthread_mutex_init(&resmut, NULL);

	ret = pthread_create(&in,NULL,&input_func, NULL);
	if(ret==0)
		printf("t1 success\n");
	pthread_join(in,NULL);


	ret = pthread_create(&mid,NULL,&letter_change,NULL);
	if(ret==0)
		printf("t2 success\n");
	pthread_join(mid,NULL);

	ret = pthread_create(&out,NULL,&print,NULL);
	if(ret==0)
		printf("t3 success\n");
	pthread_join(out,NULL);

	pthread_mutex_destroy(&inmut);
	pthread_mutex_destroy(&resmut);


	return 0;
}
