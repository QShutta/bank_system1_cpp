#include<iostream>
#include"convert_string.h";
using namespace std;

//void printEachWordOfString(string userString){
//	bool isEmpty = false;
//	for (short i = 0;i < userString.length();i++) {
//		isEmpty = (userString[i]==' ')?true:false;
//		if(isEmpty==false){
//			cout << userString[i];
//		}
//		else {
//			cout << endl;
//		}
//	
//	}
//}
//The instructor solution:



void printEachWordOfString(string s1){
	short pos = 0;
	string delim = " ";
	string sWord;

	//Here we assign the value of the first empty space to the 'pos' var.then make sure it's not null
	//يعني بنتاكد انو في مساحة فاضية
	//In case of there is no empty space will print the entire text directly
	while((pos=s1.find(delim))!=string::npos){
		//How did the substr work?the first paramter specfiy to start from where
		//the secound parameter specfiy the number of charcters that will be taken.
		sWord = s1.substr(0,pos);
		//What is the meaning of this coditon?xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
		//I think it chekc if the sword not empty in this case print it
		if(sWord!="") {
			cout << sWord << endl;
		}
		//delim.length will count the number of char in string the space is dealing with as a char
		s1.erase(0,pos+delim.length());
	}
	//This if exected if there is no spaces in the text
	//In case of there is no empty space will print the entire text directly
 //We put this to handle the last word in the string
	if(s1!="") {
		cout << s1 << endl;
	}

}

















int main(){

	string userInput = stringConvert::readString();
	printEachWordOfString(userInput);


}