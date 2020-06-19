/*
 * Options.h
 *
 *  Created on: 28 Aug 2019
 *  Author: jinxluck
 *
 * Comments:
 * semester 3 module class for option setting
 *
 * Limits:
 * Can only take single char arguments
 * Can only hold 10 user given options (savedopt)
*/

#ifndef OPTIONS_H_
#define OPTIONS_H_

#include<string>
#include<bits/stdc++.h>

using namespace std;

class Options {
public:
	Options();								// default constructer
	Options(int argC, char** argV);			// constructer
	virtual ~Options();						// destructer
	int checkoptions(void);					// checks if argV and savedopt is ==
	int setOptstring(string optstring);		// set's savedopt string
	int numOpt();							// Returns number of compatible options given in argV
	int getop();							// shows what options have been saved

	int C;									// used to save number of options
	char savedopt[10];						// user given options
	vector <string> V;						// argV options (vector[y][x])

	bool opt1;								// if true an option has been set
	bool opt2; 								// if true an option has been set
	char optnames[10];						// name of option 2
};

#endif /* OPTIONS_H_ */
