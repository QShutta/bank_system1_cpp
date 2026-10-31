#include<iostream>
#include<string>
#include"convert_string.h";
using namespace std;


string readString() {
	string userInput = "";
	cout << "Please enter your string" << endl;
	getline(cin,userInput);
	return userInput;
}

void convertStringToUpper(string &userInput) {
	for (int i = 0;i < userInput.length();i++) {
		userInput[i] = toupper(userInput[i]);
	}
}

void convertStringToLower(string& userInput) {
	for (int i = 0;i < userInput.length();i++) {
			userInput[i] = tolower(userInput[i]);
	}
}

int main() {
	string userInput = readString();
	convertStringToUpper(userInput);
	cout <<endl<< "String After Upper" << endl;
	cout << userInput << endl;
	cout << endl<<"String After lower" << endl;
	convertStringToLower(userInput);
	cout << userInput << endl;
}