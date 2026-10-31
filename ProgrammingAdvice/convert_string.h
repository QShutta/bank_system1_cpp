#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;


namespace stringConvert {

	



	string joinString(vector<string>& vWords, string delim) {
		string s1;
		for (string& word : vWords) {
			s1 += word + delim;
		}
		return s1.substr(0, s1.length() - delim.length());
	}


	bool isVowel(char c1){
		char smallChar = tolower(c1);
		return ((smallChar=='a')||(smallChar=='e')||(smallChar=='i')||(smallChar=='u')||(smallChar=='o'));
	}

	string readString(string text) {
		string userInput = " ";
		cout << text << endl;
		getline(cin>>ws, userInput);
		return userInput;
	}

	double readDouble(string text) {
		double userInput = 0.0;
		cout << text << endl;
		cin>>userInput;
		return userInput;
	}

	void convertStringToUpper(string& userInput) {
		for (int i = 0;i < userInput.length();i++) {
			userInput[i] = toupper(userInput[i]);
		}
	}

	void convertStringToLower(string& userInput) {
		for (int i = 0;i < userInput.length();i++) {
			userInput[i] = tolower(userInput[i]);
		}
	}

	vector<string> mySplit(string userInput, string dilm) {
		vector<string> vWords;
		string sWord = "";
		short pos = 0;
		while ((pos = userInput.find(dilm)) != string::npos) {
			sWord = userInput.substr(0, pos);
			if (sWord != "") {
				vWords.push_back(sWord);
			}
			userInput.erase(0, pos + dilm.length());
		}
		if (userInput != "") {
			vWords.push_back(userInput);
		}
		return vWords;
	}

	void printVector(vector<string> vMyVector) {
		for (string& word : vMyVector) {
			cout << word << endl;
		}
	}



	char readChar(string text) {
		char char1 = ' ';
		cout << text << endl;
		cin >> char1;
		return char1;
	}


	char invertChar(char c){

	if(c>=65&&c<=90){
		c = tolower(c);

	}
	else if(c>=97&&c<=122){
		c = toupper(c);

	}
	return c;
	}


	char instructInverteCharecter(char char1){
		return isupper(char1) ? tolower(char1) : toupper(char1);
	}

	string inverString(string userInput){
		for (int i = 0;i < userInput.length();i++) {
			userInput[i] = invertChar(userInput[i]);
		}
		return userInput;
	
	}
}