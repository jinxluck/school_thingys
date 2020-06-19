/*
 ============================================================================
 Name        : pe15-1-start.c
 Author      : Henning Slavensky
 Version     : 1.0
 Date		 : 220217
 Copyright   : Open
 Description : Start up template for program xercise 15-1
 ============================================================================
 */

/* pe15-1.c */
#include <stdio.h>
#include <stdbool.h>  // C99 -- otherwise use int
#include <limits.h>   // for CHAR_BIT
#include <string.h>   // for strchr()

int bstr_to_dec(const char * str); // function to convert bitstring to decimal
bool check_val(const char * str); // check if '0' or '1'
char * s_gets(char * st, int n); //substitute '\n' with '\0'

int main(void)
{
	const size_t SLEN = CHAR_BIT * sizeof(int) + 1;
	char value[SLEN];

	printf("Enter a binary number with up to %lu digits: ", sizeof(SLEN) - 1);
	//-1 to make space for \0

	while (s_gets(value, SLEN) && value[0] != '\0') {
		if ((check_val(value)) == 0)
		{
			puts("Wrong input !!!");
		}
		else
			printf("Your binary number: %s has the decimal value: %d \n"
					,value,bstr_to_dec(value));
		puts("Enter next value (empty line to quit):\n");
	}

	puts("Done");
	return 0;
}

int bstr_to_dec(const char * str)
{
	int val = 0;
	int i = 0;
	int increment_val = 2;
	int increment = 1;
	int i_end = 0;
	int bin = 0;

	for(i_end = 0; str[i_end] != '\0' ;i_end++)
	{

	}

	i_end -= 1;

	while(i_end>=0)
	{
		if(i >= 1)
		increment *= increment_val;

		if(str[i_end]=='1')
			bin = 1;
		else
			bin = 0;
		val += bin*increment;

		i_end--;
		i++;
	}

	return val;
}

bool check_val(const char * str)
{
	bool valid = 1;
	int i = 0;
	int i_end = 0;

	for(i_end = 0; str[i_end] != '\0' ;i_end++)
	{

	}

	while(i <= i_end-1)
	{
		if(valid == 1)
		{
			if(str[i] == '1' || '\0')
			{
				valid = 1;
			}
			else if (str[i] == '0' || '\0')
			{
				valid = 1;
			}
			else
				valid = 0;
		}
		else
			break;

		i++;
	}

	return valid;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');   // look for newline
		if (find)                  // if the address is not NULL,
			*find = '\0';          // place a null character there
		else
			while (getchar() != '\n')
				continue;          // dispose of rest of line
	}
	return ret_val;
}



