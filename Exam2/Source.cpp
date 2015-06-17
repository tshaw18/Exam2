// Trevor Shaw
// Pete Tucker
// June 16, 2015
// CS2
// Exam 2
// I affirm that all code given below was written solely by me, Trevor Shaw, and that any help I received adhered to the rules stated for this exam. 

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include "Runner.h"
#include <algorithm>
using namespace std;



int main() {
	fstream registrants("registrants.txt", ios::beg | ios::in);

	// If can't open file
	if (!registrants){
		cout << "File could not be read.\n";
		system("pause");
		return 0;
	}

	cout << "Working...\n\n";

	string line;

	vector<Runner> person(1001);

	string temp_first; string temp_last; int temp_pace;

	int x = 0;

	string color;
	fstream file(color + ".txt", ios::app);

	do{
		color = "";

		registrants >> temp_first >> temp_last >> temp_pace; // read objects into temp locations

		// read and set characteristics of runner into vector
		person[x].set_firstname(temp_first); person[x].set_lastname(temp_last), person[x].set_pace(temp_pace);

		x++;
	} while (getline(registrants, line));

	cout << "Sorting racers...\n\n";

	//////////////////////////////////////////////////////////// *Sorting by pace
	for (int i = person.size() - 1; i > 0; i--){
		int NUMOFLETTERS = 0;
		vector<Runner> max(1); max[0] = person[0];

		
		for (int j = 1; j < i; j++){
			if (max[0].get_pace() < person[j].get_pace()){
				max[0] = person[j];
				
				
				NUMOFLETTERS = j;
			}
		}
		if (NUMOFLETTERS != i){
			
			person[NUMOFLETTERS] = person[i];
			person[i] = max[0];
		}
	}
	//////////////////////////////////////////////////////////// *Sorting by pace

	

	int p = 0; //loop
	do{
		color = person[p].sort_color(person[p]); // Determine color

		file.open(color + ".txt", ios::app); // open file

		// Write person[i] to specified file
		file << person[p].get_firstname() << " " << person[p].get_lastname() << " " << person[p].get_pace() << endl;

		p++;
		file.close();
	} while (p < x);

	cout << "Done!\n";
	string newcolor;
	fstream open("white.txt", ios::in);
	
	cout << "The fastest runner is wearing white." << endl;
	open >> temp_first >> temp_last >> temp_pace;
	cout << "Name: " << temp_first << " " << temp_last << endl <<
		"Pace: " << temp_pace << endl << endl;
	open.close();
	temp_first = ""; temp_last = ""; temp_pace = 0;

	fstream open2("red.txt", ios::in | ios::end);
	open2.seekg(-21, ios::end);
	open2 >> temp_first >> temp_last >> temp_pace;

	cout << "The slowest runner is wearing red." << endl;

	cout << "Name: " << temp_first << " " << temp_last << endl;
	cout << "Pace: " << temp_pace << endl;
	open.close();

	return 0;

}
