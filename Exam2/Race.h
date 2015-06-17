#ifndef RACE_H
#define RACE_H

#include <iostream>
#include <string>
#include <vector>
#include "Runner.h"
using namespace std;

class Race {
private:
	string race_name;
	vector<Runner*> person;

public:
	int size();

	 

};

#endif