#include<iostream>
#include"convert_string.h";
using namespace std;

string replaceWordInString(string userInput,string newWord,string oldWord,bool matchCase) {
	vector<string> vWords = stringConvert::mySplit(userInput," ");
	string newString = "";

	vector<string>::iterator iter = vWords.begin();

	while (iter != vWords.end()) {
		if(matchCase==true){
			if (*iter == oldWord) {
				*iter = newWord;
			}
		}
		else {
			stringConvert::convertStringToLower(*iter);
			stringConvert::convertStringToLower(oldWord);
			if (*iter == oldWord) {
				*iter = newWord;
			}
		}
		newString += *iter + " ";
		iter++;
	}
	newString = newString.substr(0,newString.length()-1);

	return newString;
}






//int main() {
//	string text = "Wlcome to Jordan , Jordan is a nice countery";
//	cout << "Orignal string" << endl;
//	cout << text << endl;
//
//	text = replaceWordInString(text,"Qatar","jordan",true);
//	cout << "String after replace" << endl;
//	cout << text << "Test" << endl;
//
//}


//Instructotr solution:

string convertStringToLower(string& userInput) {
	string text = "";
	for (int i = 0;i < userInput.length();i++) {
		text= tolower(userInput[i]);
	}
	return text;
}

string insReplaceWordInString(string s1,string stringToReplace,string stringToReplaceTo,bool matchCase=true){
	vector<string> vWords = stringConvert::mySplit(s1," ");

	for(string &word:vWords){
	    if(matchCase){
		     if(word==stringToReplace){
				 word = stringToReplaceTo;
			 }
		}
		else {
			if (convertStringToLower(word) == convertStringToLower(stringToReplace)) {
				word = stringToReplaceTo;
			}
		}
	}

	return stringConvert::joinString(vWords," ");
}


int main() {

		string text = "Welcome to Jordan , Jordan is a nice countery";
		cout << "Orignal string" << endl;
		cout << text << endl;
		cout << endl;
		text = replaceWordInString(text,"Qatar","jordan",true);
		cout << "String after replace using match case" << endl;
		cout << text << "Test" << endl;
		cout << endl;
		text = replaceWordInString(text, "Qatar", "jordan", false);
		cout << "String after replace using don't match case" << endl;
		cout << text << "Test" << endl;
}