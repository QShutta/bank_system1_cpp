#include<iostream>
#include<string>
#include"convert_string.h";
using namespace std;





int main() {

	string userInput= stringConvert::readString();
	cout << "String after inverting case:" << endl;
	userInput = stringConvert::inverString(userInput);
	cout << userInput << endl;

}