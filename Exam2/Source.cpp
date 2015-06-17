#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <cstdlib>
#include "Runner.h"
#include "Race.h"
using namespace std;





int main() {
	fstream registrants("registrants.txt", ios::beg | ios::in);

	// If can't open file
	if (!registrants){
		cout << "File could not be read.\n";
		system("pause");
		return 0;
	}

	string line;

	vector<Runner> person;

	string temp_first; string temp_last; int temp_pace;
	
	int i = 0;

	ofstream text;

	while (getline(registrants, line)){

		registrants >> temp_first >> temp_last >> temp_pace;
		
		// read and set characteristics of runner into vector
		person[i].set_firstname(temp_first); person[i].set_lastname(temp_last),
			person[i].set_pace(temp_pace);

		i++;
		text << person[i];
	}



}