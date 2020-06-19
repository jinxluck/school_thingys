/*
 * main.cpp
 *
 *  Created on: 28 Aug 2019
 *      Author: jinxluck
 */

#include <iostream>
#include "Options.h"

using namespace std;

int main(int argC, char *argV[])
{
	Options op;

	for(int noac = 0;noac <= argC-1; noac++)
	{
	op.checkoptions(argV[noac]);
	}

	if(op.optA == 1)
		cout << "Option A is set" << endl;

	if(op.optB == 1)
		cout<< "option B is set" << endl;

	return 0;
}


