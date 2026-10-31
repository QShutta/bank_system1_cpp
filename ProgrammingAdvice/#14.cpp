#include<iostream>
using namespace std;

int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};

//Shutta Solution-------------------------------
void printInvertedPattern(int number) {
	int charCounter = 64 + number;
	for (int i = charCounter;i >= 65;i--) {
		for (int j = 65;j <= i;j++) {
			cout << char(i);
		}
		cout << endl;
	}
}

//The instructor solution-------------------------------------

void printInvertedPatternLetter(int number){
	//We said -1 because we want to include the 65 whihch is the 'a' character with them.
	cout << endl;
	for (int i = 65 + number - 1;i >= 65;i--) {
		for (int j = 1;j <= number - (65 + number - 1 - i);j++) {
			cout << char(i);
		}
		cout << endl;
	}
}

int main(){
	int number = readPositiveNumber("Please enter a postive number");
	printInvertedPatternLetter(number);
}