/*
 * main.cpp
 *
 *  Created on: 10 Sep 2019
 *      Author: jinxluck
 */
#include "Options.h"
#include "iostream"
#include "string"

int main(int argC, char **argV)
{
	Options test(argC, argV);

	char opta[2] = {'a','a'};
	char optb[2] = {'-','a'};

	test.setOpts(opta);

	test.setOpts(optb);

	string optc = "-b-b-c";

	test.setOpts(optc);

	return 0;
}

