#include<iostream>
#include<string>
using namespace std;
//My solution:

string readString() {
	string userInput = " ";
	cout << "Please enter your string" << endl;
	getline(cin, userInput);
	return userInput;
}


string convertFirstLetterOfString(string userInput) {
	bool isFirstLetter = true;

	for (int i = 0;i < userInput.length();i++) {
		//userInput.upper
		if ((isFirstLetter == true) && (userInput[i] != ' ')) {
			//my solution:
			// that means the char() conversion isn't neccery.but the toupper will return the number
			// of the char not the char it self right ?
			// the char is not neccery لانو التحويل لحرف بتم تلقائيا
			//userInput[i]=	char(toupper(userInput[i]));
			//instructor solution:
			userInput[i] = toupper(userInput[i]);
		}
		isFirstLetter = (userInput[i] == ' ' ? true : false);

	}
	return userInput;

}


string myImpConvertFristLetterOfString(string userInput){
	bool isFirstLetter = true;
	for (int i = 0;i < userInput.length();i++) {
	if(userInput[i]!=' '&&isFirstLetter==true) {
		userInput[i] = toupper(userInput[i]);
	}

	isFirstLetter = (userInput[i] == ' ' ? true : false);
	}
	return userInput;
}

int main() {
string input=myImpConvertFristLetterOfString(readString());
cout << input << endl;
	
}