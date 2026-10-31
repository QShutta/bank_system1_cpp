#include<iostream>
#include<vector>
#include"convert_string.h";
using namespace std;


void printVector(vector<string> vMyVector) {
	for (string& word : vMyVector) {
		cout << word << endl;
	}
}

int main() {
	vector<string> vWords;
	//string userInput = stringConvert::readString();
	string s2 = "Abuelqasim#,,#Shutta#,,#Mohmed#,,#Ibrahim";
	vWords=stringConvert::mySplit(s2,"#,,#");
	cout << "Tokens " << vWords.size() << endl;
	printVector(vWords);


}