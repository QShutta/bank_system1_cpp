#include<iostream>
#include"convert_string.h";
using namespace std;

//
//
//
//
//string trimLeft(string userInput){
//	short counter = 0;
// هنا ال counter var is not neccery and it can be removed and 
// the right thing is to remove it to free up some memory
//	while(userInput[counter]==' ') {
//		userInput.erase(0,1);
//	}
//	return userInput;
//}
//
//
//string trimRight(string userInput) {
//	short counter = userInput.length()-1;
//	while (userInput[counter] == ' ') {
//		userInput.erase(counter, 1);
//		counter--;
//	}
//	return userInput;
//}
//
//string trimLeftAndRight(string userInput){
//	userInput = trimLeft(userInput);
//	userInput = trimRight(userInput);
//	return userInput;
//}
//
//int main() {
//	string userInput = stringConvert::readString();
//	string leftTrim, rightTrim, leftAndRightTrim;
//	cout << "User input before of trim:" << userInput << endl;
//	leftTrim=trimLeft(userInput);
//	cout << "Trim Left:" << leftTrim << endl;
//	rightTrim = trimRight(userInput);
//	cout << "Trim Right:" << rightTrim  << endl;
//	leftAndRightTrim=trimLeftAndRight(userInput);
//	cout << "Trim Right&Left:" << leftAndRightTrim << endl;
//
//}


//The instructor solution:-------------------------------------

string trimLeft(string userInput){

	for (short i = 0;i < userInput.length();i++) {
	if(userInput[i]!=' ') {
		return userInput.substr(i,userInput.length()-i);
	}
	}

	return "";
}

string trimRight(string userInput) {

	for (short i = userInput.length()-1;i >= 0;i--) {
		if (userInput[i] != ' ') {
			return userInput.substr(0,i+1);
		}
	}

	return "";
}


string trim(string userInput){
	return trimRight(trimLeft(userInput));
}

int main() {
	string userIn = "          Ali mohmed Ali        ";
	cout << "The trim left result is:" << trimLeft(userIn)<<"Shutta" << endl;
	cout << "The trim right result is:" << trimRight(userIn) << "Shutta" << endl;
	cout << "The trim right&left result is:" << trim(userIn) << " Shutta" << endl;


}