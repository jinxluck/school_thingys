/*
 * main.cpp
 *
 *  Created on: 27 Aug 2019
 *  Author: jinxluck
 */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(void)
{
	cout << "Goddag, jeg er dit interaktive Hej Verden program." << endl;

	for(char input;;)
	{
		cout << endl << "tryk 1 - 5 for et citat" << endl <<
				"tryk 9 for at afslutte" << endl;
		cin >> input;

		switch(input)
		{
		case '1':
			cout << "Talk is cheap, show me the code!" << endl;
			while(getchar() != '\n');
			break;
		case '2':
			cout << "Programs must be written for people to read, "
				 << endl <<
					"and only incidentally for machines to execute" << endl;
			while(getchar() != '\n');
			break;
		case '3':
			cout << "Always code as if the guy who ends up maintaining "
					<< endl <<
					"your code will be a violent psychopath who knows "
					<< endl <<
					"where you live" << endl;
			while(getchar() != '\n');
			break;
		case '4':
			cout << "Programming today is a race between software engineers "
					<< endl <<
					"striving to build bigger and better idiot-proof programs, "
					<< endl <<
					"and the Universe trying to produce bigger and better idiots. "
					<< endl <<
					"So far, the Universe is winning." << endl;
			while(getchar() != '\n');
					break;
		case '5':
			cout << "You've baked a really lovely cake, "
					<< endl <<
					"but then you've used dog shit for frosting."
					<< endl;
			while(getchar() != '\n');
					break;
		case '9':
			cout << "Tak fordi du andvendte Hej Verden i c++" << endl;
			return 0;
		default:
			cout << "Wrong input try again" << endl;
			while(getchar() != '\n');
			break;
		}
	}
}

