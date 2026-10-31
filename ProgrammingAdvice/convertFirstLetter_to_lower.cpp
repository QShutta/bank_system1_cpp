#include<iostream>
#include<string>
using namespace std;

string readString() {
	string userInput = "";
	cout << "Please enter you'r string?" << endl;
	getline(cin,userInput);
	return userInput;
}

string convertFirstLetterToLower(string userInput){
	bool isFirstLetter = true;
	for (int i = 0;i < userInput.length();i++) {

		if((userInput[i]!=' ')&&(isFirstLetter==true)) {
			userInput[i] = tolower(userInput[i]);
		}
		
		isFirstLetter = (userInput[i] == ' '?true:false);
	}
	return userInput;
}

int main() {
	string userInput = readString();
	userInput = convertFirstLetterToLower(userInput);
	cout << userInput << endl;
}