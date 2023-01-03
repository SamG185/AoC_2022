#include <fstream>
#include <string>
#include <iostream>
#include <set>
#include <vector>
using namespace std;




int main() {
	//load in the file 
	ifstream myfile;
	myfile.open("C://Users//samue//Documents//Projects//AOC_2022_C++//input_day_3.txt");
	string myline;

	int totalValue = 0;
	
	vector<string> group;
	string line1;
	string line2;
	string line3;
	int counter = 0;

	if (myfile.is_open()) {
		for (int i = 0; i < 300; i = i+3) {
			
			for (int c = 0; c < 3; c++) {
				getline(myfile, myline);
				group.push_back(myline);
			}

			line1 = group.at(0);
			line2 = group.at(1);
			line3 = group.at(2);
			
			
			for (int d = 0; d < line1.size(); d++) {
				if (line2.find(line1.at(d)) != string::npos || line3.find(line1.at(d)) != string::npos) {
					if ((int)line1.at(d) > 96) {
							totalValue += (int)line1.at(d) - 96;
							
						}
					else {
							totalValue += (int)line1.at(d) - 38;
							
					}
					counter++;
					cout << "1 = " << line1.at(d) << " 2 = " << line2.at(d) << " 3 = " << line3.at(d) << "\n";
					break;
				}
				
			}
			
			group.clear();
		}
		//while (myfile) { //reads the line
		//	getline(myfile, myline);
		//	int lineValue = 0;
		//	

		//	
		//	for (std::set<char>::iterator it = compartmentOne.begin(); it != compartmentOne.end(); ++it){
		//		if (compartmentTwo.find(*it) != compartmentTwo.end()) {
		//			std::cout << ' ' << (int)*it << " " << *it;

		//			if ((int)*it > 96) {
		//				lineValue += (int)*it - 96;
		//			}
		//			else {
		//				lineValue += (int)*it - 38;
		//			}

		//		}
		//	}
		//	cout << "\n";
		//	compartmentOne.clear();
		//	compartmentTwo.clear();
		//	totalValue += lineValue;
		//}
	}
	cout << totalValue;
	return 0;
}






