/*
 * Options.cpp
 *
 *  Created on: 28 Aug 2019
 *  Author: jinxluck
 */

#include "Options.h"
#include <iostream>
#include <string.h>

using namespace std;

//Default constructer if no commandline arguments are given
Options::Options() {
Options::opt1=false;								//default value
Options::opt2=false;								//defalut value
Options::C=0;										//default value
memset(Options::savedopt,0,sizeof(Options::savedopt));

cout << "default constructor has been used \n" << endl;
}

//constructor if commandlines are given
Options::Options(int argC, char** argV)
{
	Options::opt1 = false;							//default value
	Options::opt2 = false;							//default value
	Options::C = 0;									//default value
	memset(Options::savedopt,0,sizeof(Options::savedopt));

	for(int count = 1 ; count != argC ; count++)
	{
		Options::V.push_back(argV[count]);			//sets argV arguments in a vector
	}
}

//Destructor
Options::~Options() {
	// TODO Auto-generated destructor stub
}

//if default constructor has been used
int Options::argsetter(int argC, char** argV)
{
	for(int count = 1 ; count != argC ; count++)
	{
		Options::V.push_back(argV[count]);			//sets argV arguments in a vector
	}

	return 0;
}

//Checks if arguments given in argV are the same as one given in premade options
int Options::checkoptions(void)
{
	//This loop goes through the argV saved vector (V)
	for(vector<string>::iterator i = Options::V.begin();i < Options::V.end();++i)
	{
		string checker;
		checker.clear(); //this block isto saved the vector string pointer into a string
		checker = *i;

		if(checker.length() == 2)
		{
			if(checker[0] == '-') // arguments start with -
			{
				//This loop goes through the saved options string looking for a match
				for(unsigned int soc = 0; soc < sizeof(Options::savedopt);soc++)
				{
					if(checker[1] == Options::savedopt[soc])
					{
						if(Options::opt2 != true)
						{
							if(Options::opt1 == true)
							{
								// sets option 2 to be true
								Options::opt2 = true;
								Options::optnames[1] = checker[1];
								cout << "Option " << Options::savedopt[soc] << " has been chosen and is option 2 (opt2)" << endl;
							}

							if(Options::opt1 == false)
							{
								// Sets option 1 to be true
								Options::opt1 = true;
								Options::optnames[0] = checker[1];
								cout << "Option " << Options::savedopt[soc] << " has been chosen and is option 1 (opt1)" << endl;
							}
						}
						else
						{
							cout << "All option slot have been filled" << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

//Function to set user determined options to check against
//can only take single chars options
//Can only take 10 options
int Options::setOpts(string optstring)
{
	int c = 0;

	//Loop to go through the user given string
	for(unsigned int i = 0; i < sizeof(Options::savedopt); i++)
	{
		if(Options::savedopt[i] == 0)
		{
			if(optstring[i] == '-') //Only saves an option if it starts with -
			{
				Options::savedopt[c] = optstring[i+1];
				c++;
			}
		}
		else
		{
			c++;
		}
	}
	cout << "Saved options: " << Options::savedopt << endl;
	return 1;
}

int Options::setOpts(char optchar[1])
{
	unsigned int c = 0;

	if(optchar[0] == '-')
	{
		for(;c <= sizeof(Options::savedopt);c++)
		{
			if(Options::savedopt[c] == 0)
			{
				Options::savedopt[c] = optchar[1];
				cout << "Saved options: " << optchar[1] << endl;
				return 1;
			}
		}
	}
	else
	{
		cout << "Wrong syntax" << endl;
	}

	return 0;
}

//Function to show how many "compatible" arguments given in argV
int Options::numOpt()
{
	Options::C = 0;

	for(vector<string>::iterator i = Options::V.begin();i < Options::V.end();++i)
	{
		string checker;
		checker.clear();
		checker = *i;

		if(checker.length() == 2)
		{
			if(checker[0] == '-')
				Options::C += 1;
		}
	}

	cout<<"Number of options given in argV is: " << Options::C <<endl;

	return Options::C;
}

int Options::getop()
{
	if(Options::opt1 == true)
		cout<<"opt1 name is: "<<Options::optnames[0]<<endl;
	else
		cout<<"no options have been set"<<endl;

	if(Options::opt2 == true)
		cout<<"opt2 name is: "<<Options::optnames[1]<<endl;

	return 0;
}
