
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

int main() {
	//load in the file 
	ifstream myfile;
	myfile.open("C://Users//samue//Documents//Projects//AOC_2022_C++//input_day_1.txt");
	string myline;


	list<int> aList;
	//initialise logic variables
	
	int current_count = 0;

	//read the file
	if (myfile.is_open()) {
		while (myfile) { //reads the line
			getline(myfile, myline);
			//if the line isn't blank (contains a number) convert it to an int and add it to the variable current_count
			if (myline != "") {
				current_count += stoi(myline);
			}
			//if the line is blank then check if current_count > max_count, if it is replace max_count with the current value of current_count
			else {
				aList.push_front(current_count);
				current_count = 0;
			}
		}
	}
	else {
		cout << "Couldn't open file\n";
	}
	aList.sort();
	int firstElf = aList.back();
	aList.pop_back();
	int secondElf = aList.back();
	aList.pop_back();
	int thirdElf = aList.back();

	cout << firstElf + secondElf + thirdElf;
	
	
	return 0;
}