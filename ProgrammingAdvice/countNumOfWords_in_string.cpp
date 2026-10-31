#include<iostream>
#include"convert_string.h";
using namespace std;

short countWordsInString(string userInput){
	string dilm = " ",sword;
	short pos = 0;
	short counter = 0;
	while((pos=userInput.find(dilm))!=string::npos){
		sword = userInput.substr(0,pos);
		if(sword!="") {
			counter++;
		}

		userInput.erase(0,pos+dilm.length());
	}
	if(userInput!="") {
		counter++;
	}
	return counter;
}
int main(){
	string userInput = stringConvert::readString();	
	cout << "The number of words in your string is:" << countWordsInString(userInput)<< "  words" << endl;


}