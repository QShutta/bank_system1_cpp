#include<iostream>
#include"convert_string.h";
using namespace std;

//string replaceWordInString(string userInput,string newWord,string oldWord) {
//	vector<string> vWords = stringConvert::mySplit(userInput," ");
//	string newString = "";
//
//	vector<string>::iterator iter = vWords.begin();
//
//	while (iter != vWords.end()) {
//		if (*iter == oldWord) {
//			*iter = newWord;
//		}
//		newString += *iter + " ";
//		iter++;
//	}
//	newString = newString.substr(0,newString.length()-1);
//
//	return newString;
//}


string insStringToReplace(string text,string stringToReplace,string stringToReplaceTo) {

	short pos = text.find(stringToReplace);
	while(pos!=string::npos){
		text = text.replace(pos,stringToReplace.length(),stringToReplaceTo);
		//then check if the text contain the word again twice.
		pos = text.find(stringToReplace);
	}

	return text;
}



int main() {
	string text = "Wlcome to Jordan , Jordan is a nice countery";
	cout << "Orignal string" << endl;
	cout << text << endl;

	//text = replaceWordInString(text,"Qatar","Jordan");
	text = insStringToReplace(text,"Jordan","Qatar");
	cout << "String after replace" << endl;
	cout << text <<"Test" << endl;

}