/*
 * indiana.c
 *
 *  Created on: 29 Aug 2018
 *      Author: jinxluck
 */

#include <stdio.h>
void jolly(void); //prototype
void deny(void); //prototype
void br(void); //prototype
void ic(void); //prototype
void smile(void); //prototype
void one_three(void); //prototype
void two(void); //prototype

int main(void)
{
	/* exercise 4 */
	/* this prints the number of weeks in a year */

	int s;
	s = 52; /* there's 52 weeks in 2018, not 56 */

	printf("exercise 4\n");
	printf("There are %d weeks in a year.\n", s);

	printf("\n\n");

	/*exercise 7 */

	int wordcount, linecount;
	wordcount = 3020;
	linecount = 350;

	printf("exercise 7\n");
	printf("There were %d words and %d 350 lines.\n", wordcount, linecount);

	printf("\n\n");

	/* programming exercises */

	// programming exercise 1:
	printf("Prg. exercise 1:\n");
	printf("Jan schiermer\n");
	printf("jan \nschiermer \n");
	printf("jan ");
	printf("schiermer\n");

	printf("\n\n");

	// programming exercise 2:

	printf("Prg. exercise 2: \n");
	printf("Jan schiermer\n");
	printf("Kølkær hovedgade 56, 7400 Herning\n");

	printf("\n\n");

	//programming exercise 3:

	int day, year;
	day = 365;
	year = 26;

	printf("Prg. exercise 3: \n");
	printf("I'm %d years, which is %d days.\n", year, day * year);

	printf("\n\n");

	//programming exercise 4:

	printf("Prg. exercise 4: \n");
	jolly();
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
	deny();

	printf("\n\n");

	//programming exercise 5:

	printf("Prg exercise 5: \n");
	printf("Brazil, Russia, India, China\n");
	ic();
	br();

	printf("\n\n");

	//programming exercise 6:

	int toes;

	toes = 10;

	printf("Prg. exercise 6: \n");
	printf("A normal set of toes: %d \n", toes);
	printf("Two times normal amount of toes: %d \n", toes * 2);
	printf("Toes squares: %d\n", toes * toes);

	printf("\n\n");

	//programming exercise 7:

	printf("Prg. exersice 7:\n");
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();

	printf("\n\n");

	//programming exercise 8:

	printf("Prg. exercise 8: \n");
	printf("Starting now:\n");
	one_three();
	printf("Done!\n");

	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

void br(void)
{
	printf("Brazil, Russia\n");
}

void ic(void)
{
	printf("India, China\n");
}

void smile(void)
{
	printf("smile!");
}

void one_three(void)
{
	printf("One\n");
	two();
	printf("Three\n");
}

void two(void)
{
	printf("Two\n");
}
