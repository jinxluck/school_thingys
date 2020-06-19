///////////////////////////////
//File name:  home_assignment_4.c
//version:
//Created on: 3 Nov 2018
//Author:     jinxluck
//Version:    2
//Note:       It might look like there's gold plating, but there's been
//            added no extra future there's not been asked for...
///////////////////////////////

#include <stdio.h>

int menu(void);
void invoice(int, int, int, int, int);
void sales_list(void);

int main(void)
{
	int mv = 0; //Chooses which case to use, gets value from the menu function
	int ga; //Grocery amount
	int total; // Total price
	char gc; //Grocery choice
	int ap = 0, ac = 0, ao = 0, as = 0; // Amount of groceries ex. potatoes

	printf("Welcome!\n");

	while (mv != 5)
	{
		mv = menu();

		switch (mv)
		{
		case 2: //Buying calculations with no function invoking
			printf("\nBuying menu:\n");
			printf(
					"Write p for potatoes, c for carrots and so forth, followed by");
			printf(" by the amount you want to buy.\n");
			printf("Example: \"p 2\" (will add to 2kg's of potatoes to your ");
			printf("shopping list.)\n");

			gc = 'a'; //"Resets" gc to avoid malfunctions

			while (gc != 'q')
			{
				printf("\nTotal amount bought so far:\n"
						"Potatoes:    %d kg\nCarrots:     %d kg\nOnions:      "
						"%d bundles\nStrawberries:%d trays\nTotal without "
						"discount:%d kr\n(Enter q q to exit)\n", ap, ac, ao, as,
						total);

				ga = 0; //"Resets" ga to avoid malfunctions
				while (getchar() != '\n')
					; //buffer clearing
				scanf("%c %d", &gc, &ga);

				if (gc != 'q' && ga == 0) //Fail announcement
				{
					printf("Remember the example \"p 2\"? follow it...\n");
					continue;
				}

				if (gc == 'q') //Buffer clearing
				{
					while (getchar() != '\n')
						;
					break;
				}

				switch (gc)
				//Calculator
				{
				case 'p':
					ap = ap + ga;
					total = total + ga * 25;
					continue;
				case 'c':
					ac = ac + ga;
					total = total + ga * 28;
					continue;
				case 'o':
					ao = ao + ga;
					total = total + ga * 15;
					continue;
				case 's':
					as = as + ga;
					total = total + ga * 35;
				default:
					printf("Remember the example \"p 2\"? follow it...");
					continue;
				}
			}
			continue;
		case 3: //ordered items, invokes the invoice function
			invoice(ap, ac, ao, as, total);
			printf("(Press enter to return to the menu");
			while (getchar() != '\n')
				;
			break;
		case 4: //Ware list, invokes the listing function
			sales_list();
			continue;
		default:
			continue;
		}
	}

	invoice(ap, ac, ao, as, total); //Exit invoice/final invoice
	printf("Have a nice day and thank you for ordering from us!");

	return 0;
}
int menu(void)
{
	int decision = 0; //Chooses the action done in main.c
	char choice; //Switch value

	printf("\nShopping menu:\n");

	while (decision < 1)
	{
		printf("Press:   To:\n"
				"b        buy\n"
				"s        ordered items so far\n"
				"l        list of possible items to buy\n"
				"a or A   to quit and get an invoice\n");

		choice = getchar();

		switch (choice)
		{
		case 'b':
			decision = 2;
			break;
		case 's':
			decision = 3;
			break;
		case 'l':
			decision = 4;
			break;
		case 'a':
			decision = 5;
			break;
		case 'A':
			decision = 5;
			break;
		default:
			printf("\n\nPress either lowercase b,s,l,a or an uppercase A!\n\n");
			while (getchar() != '\n')
				; //Buffer flushing for avoiding fails
			break;
		}
	}

	return decision;
}
void invoice( ap, ac, ao, as, total)
{
	double total_discount = 0; //total with the discount
	double final_price = 0;
	double discount;
	int sd; //switch decider

	//Discount decider's
	if (total < 101)
		sd = 1;

	if (total > 100 && total < 351)
		sd = 2;

	if (total > 350 && total < 601)
		sd = 3;

	if (total > 600)
		sd = 4;

	//Discount price calculator
	switch (sd)
	{
	case 1:
		total_discount = total;
		break;
	case 2:
		total_discount = total - (total * 0.05);
		break;
	case 3:
		total_discount = total - (total * 0.1);
		break;
	case 4:
		total_discount = total - (total * 0.15);
		break;
	}

	//Discount+freight price calculator
	final_price = total_discount + (ap * 12) + (ac * 12) + (ao * 5) + (as * 12);

	//Discount gotten calculator
	discount = total - total_discount;

	//Invoice printout
	printf("\nWares:                     Units bought   Freight price \n"
			"Potatoes:                  %d              %d kr\n"
			"Carrots:                   %d              %d kr\n"
			"Onions:                    %d              %d kr\n"
			"Strawberries:              %d              %d kr\n\n"
			"Total unit price:          %d kr\n"
			"Total freight price:       %d kr\n"
			"Total discount:           -%.2f kr\n"
			"Final price incl discount: %.2lf kr\n\n", ap, ap * 12, ac, ac * 12,
			ao, ao * 5, as, as * 12,
			(ap * 25) + (ac * 28) + (ao * 15) + (as * 35),
			(ap * 12) + (ac * 12) + (ao * 5) + (as * 12), discount,
			final_price);

	while (getchar() != '\n')
		; //used as a stop
}
void sales_list(void)
{
	printf(
			"\nWares:        Price:  Unit:    Freight incl. wrapping of each unit:\n"
					"Potatoes      25 kr.  kg.      12 kr\n"
					"Carrots       28 kr.  kg.      12 kr\n"
					"Onions        15 kr.  bundle   5 kr\n"
					"Strawberries  35 kr.  tray     12 kr\n");
	printf("\nDiscounts:0-100kr=0%, 101-350kr=5%, 351-600kr=10%, "
			"over 600kr=15%\n");
	//the % characters gives a warning only sometimes, but works none the less?

	printf("(Press enter to return to the menu)\n");

	while (getchar() != '\n')
		; //Buffer flusher
	while (getchar() != '\n')
		; //Used as a stop
}
