#include <fstream>
#include <string>
#include <iostream>
using namespace std;
char enemyTurn;
char myTurn;

int shapeScore;
int matchScore;
int totalScore = 0;
int lineCount = 0;

int main() {
	//load in the file 
	ifstream myfile;
	myfile.open("C://Users//samue//Documents//Projects//AOC_2022_C++//input_day_2.txt");
	string myline;
	if (myfile.is_open()) {
		while (myfile) { //reads the line
			getline(myfile, myline);
			enemyTurn = myline.at(0);
			myTurn = myline.at(2);
			switch(enemyTurn){
			//Rock
			case 'A':
				switch (myTurn) {
					//lose
				case 'X':
					matchScore = 0;
					shapeScore = 3;
					break;
					//Win
				case 'Z':
					matchScore = 6;
					shapeScore = 2;
					break;
					//Draw
				case 'Y':
					matchScore = 3;
					shapeScore = 1;
					break;
				}
				break;
			//Paper
			case 'B' : 
				switch (myTurn) {
					//lose
				case 'X':
					matchScore = 0;
					shapeScore = 1;
					break;
					//Win
				case 'Z':
					matchScore = 6;
					shapeScore = 3;
					break;
					//Draw
				case 'Y':
					matchScore = 3;
					shapeScore = 2;
					break;
				}
				break;
			//scissors
			case 'C' :
				switch (myTurn) {
					//lose
				case 'X':
					matchScore = 0;
					shapeScore = 2;
					break;
					//Win
				case 'Z':
					matchScore = 6;
					shapeScore = 1;
					break;
					//Draw
				case 'Y':
					matchScore = 3;
					shapeScore = 3;
					break;
				}
				break;
			}
			totalScore = totalScore + shapeScore + matchScore;
		}
	}
	else {
		cout << "Couldn't open file\n";
	}
	cout << totalScore - (shapeScore + matchScore);
	return 0;
}