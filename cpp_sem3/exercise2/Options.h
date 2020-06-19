/*
 * Options.h
 *
 *  Created on: 28 Aug 2019
 *      Author: jinxluck
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_

#include<string>

using namespace std;

class Options {
public:
	Options();
	int checkoptions(string o);
	bool optA;
	bool optB;
	virtual ~Options();
};

#endif /* OPTIONS_H_ */
