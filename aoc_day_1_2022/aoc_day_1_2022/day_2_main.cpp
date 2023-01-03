#include <fstream>
#include <string>
#include <iostream>
using namespace std;


int day_2_main_method() {
	//load in the file 
	ifstream myfile;
	myfile.open("C://Users//samue//Documents//Projects//AOC_2022_C++//input_day_2.txt");
	string myline;
	if (myfile.is_open()) {
		while (myfile) { //reads the line
			getline(myfile, myline);
			cout << myline;
		}
	}
	else {
		cout << "Couldn't open file\n";
	}
	return 0;
}