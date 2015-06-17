#include "Runner.h"


string Runner::get_firstname() { return firstname; }
string Runner::get_lastname() { return lastname; }

int Runner::get_pace() { return pace; }

void Runner::set_firstname(string first) { firstname = first; }

void Runner::set_lastname(string last){ lastname = last; }

void Runner::set_pace(int num) { pace = num; }


fstream& operator<<(ofstream& str, Runner& r) {
	string file;
	str.open(file + ".txt");

	if (r.get_pace() >= 0 && r.get_pace() <= 360) { 
		file = "white";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}

	else if (r.get_pace() >= 361 && r.get_pace() <= 420) {
		file = "yellow";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}

	else if (r.get_pace() >= 421 && r.get_pace() <= 480) {
		file = "green";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}
	
	else if (r.get_pace() >= 481 && r.get_pace() <= 540) {
		file = "orange";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}
	
	else if (r.get_pace() >= 541 && r.get_pace() <= 600) {
		file = "blue";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}

	else if (r.get_pace() >= 601 && r.get_pace() <= 720) {
		file = "lilac";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}
	
	else if (r.get_pace() >= 721 && r.get_pace() <= 1200) {
		file = "red";
		str << r.get_firstname() << " " << r.get_lastname() << " " << r.get_pace();
		str.close();
	}
	return;
	
}