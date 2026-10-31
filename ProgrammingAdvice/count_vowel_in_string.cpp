#include<iostream>
#include"convert_string.h";
using namespace std;

short countVowelInString(string userInput){
	short counter = 0;
	for (short i = 0;i < userInput.length();i++) {
	if(stringConvert::isVowel(userInput[i])) {
		counter++;
	}
	}
	return counter;
}

void printVowelsInString(string userInput) {
	cout << "Vowels in string are:";
	for (short i = 0;i < userInput.length();i++) {
		if (stringConvert::isVowel(userInput[i])) {
			cout << userInput[i] << "   ";
		}
	}
}
int main() {
	string userString = stringConvert::readString();
	printVowelsInString(userString);

}