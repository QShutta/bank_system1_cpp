#include<iostream>
#include"convert_string.h";
using namespace std;

enum enCapitalandSmall {
	smallLetter = 0, capitalLetter = 1, all = 3
};

short countAll(string userInput,enCapitalandSmall whatToCount=enCapitalandSmall::all) {

	if(whatToCount==enCapitalandSmall::all){
		return userInput.length();
	}

	short counter = 0;
	for (short i = 0;i < userInput.length();i++) {
		if(whatToCount==enCapitalandSmall::capitalLetter&&isupper(userInput[i])) {
			counter++;
		}else if (whatToCount == enCapitalandSmall::smallLetter && islower(userInput[i])) {
			counter++;
		}
	}
	return counter;
}

int countSmallLetterInString(string userInput) {
	int counter = 0;
	for (int i = 0;i < userInput.length();i++) {
		if (islower(userInput[i])) {
			counter++;
		}
	}
	return counter;
}

int countCapitalLetterInString(string userInput) {
	int counter = 0;
	for (int i = 0;i < userInput.length();i++) {
		if (isupper(userInput[i])) {
			counter++;
		}
	}
	return counter;
}


int main() {

	string userInput = stringConvert::readString();
	cout << endl << "String length=" << userInput.length() << endl;
	cout << "Capital Letter=" << countCapitalLetterInString(userInput) << endl;
	cout <<  "Small Letter=" << countSmallLetterInString(userInput) << endl;

	cout << "\n\n" << "secound method\n\n";

	cout <<  "String length=" << countAll(userInput) << endl;
	cout << "Capital Letter=" << countAll(userInput,enCapitalandSmall::capitalLetter) << endl;
	cout << "Small Letter=" << countAll(userInput, enCapitalandSmall::smallLetter) << endl;



}