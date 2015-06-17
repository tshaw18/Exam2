#ifndef RUNNER_H
#define RUNNER_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class Runner {
private:
	string firstname;
	string lastname;
	int pace;
	

public:
	int count = 0;
	string get_firstname();
	string get_lastname();
	int get_pace();
	
	
	void set_firstname(string first);
	void Runner::set_lastname(string last);
	void Runner::set_pace(int num);
	void Runner::sort(Runner& r);


	friend fstream& operator>>(ifstream& str, Runner& r);
	friend fstream& operator<<(ofstream& str, Runner& r);
};

#endif