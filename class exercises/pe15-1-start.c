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

int main(void) {
	const size_t SLEN = CHAR_BIT * sizeof(int) + 1;
	char value[SLEN];

	printf("Enter a binary number with up to %zu digits: ", SLEN - 1);

	while (s_gets(value, SLEN) && value[0] != '\0') {
		if (!check_val(value))
			puts("your failure message !!!");
		else
			printf("Your value and the decimal value");
		puts("Enter next value (empty line to quit):");
	}

	puts("Done");
	return 0;
}

int bstr_to_dec(const char * str) {
	int val;

	/* here you have to make stuff to convert bitstream to a dec value
	 * remember to take care of that '0' is actually 48 dec
	 */
	return val;
}

bool check_val(const char * str) {
	bool valid;
	/*
	 * Here you have to check if your input is '0' or '1', everything else
	 * is false
	 */

	return valid;
}

char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		find = strchr(st, '\n');   // look for newline
		if (find)                  // if the address is not NULL,
			*find = '\0';          // place a null character there
		else
			while (getchar() != '\n')
				continue;          // dispose of rest of line
	}
	return ret_val;
}

