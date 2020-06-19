/*
 * Options.cpp
 *
 *  Created on: 28 Aug 2019
 *      Author: jinxluck
 */

#include "Options.h"
#include <iostream>
#include<string.h>

Options::Options() {
	// TODO Auto-generated constructor stub
Options::optA=false;
Options::optB=false;
}

Options::~Options() {
	// TODO Auto-generated destructor stub
}

int Options::checkoptions(string o)
{
	string a = "optionA";
	string b = "optionB";

	if(a == o)
	{
		Options::optA = true;
	}
	if(b == o)
	{
		Options::optB = true;
	}

	return 0;
}
