/*
 * main.cpp
 *
 *  Created on: 28 Aug 2019
 *  Author: jinxluck
 *
 *  Comments:
 *  Testing for the sem 3 options module class
 */
#include <stdio.h>
#include <iostream>
#include "Options.h"
#include <vector>

using namespace std;

int main(int argC, char **argV)
{
	//test
	string options = "-a -b -c -d -fe";

	//test
	Options op(argC,argV);

	//test
	op.setOptstring(options);

	//test
	op.checkoptions();

	//test
	op.numOpt();

	//test
	op.getop();

	return 0;
}


