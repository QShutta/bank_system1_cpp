#include<iostream>
#include"convert_string.h";
using namespace std;


//short countCharInString(string userString,char userChar){
//	short counter = 0;
//	for (short i = 0;i < userString.length();i++) {
//	
//		if(userString[i]==userChar) {
//			counter++;
//		}
//	}
//	return counter;
//}

//short countCharInStringIgnoreCase(string userString, char userChar) {
//	short counter = 0;
//
//	for (short i = 0;i < userString.length();i++) {
//		
//		if (userString[i] == userChar||userString[i] == toupper(userChar)) {
//			counter++;
//		}
//	}
//	return counter;
//}
//
//
//
//int main() {
//	string userInputString = " ";
//	char userInputChar = ' ';
//	userInputString = stringConvert::readString();
//	userInputChar = stringConvert::readChar();
//	cout << "Letter '" << userInputChar << "' Count=" << countCharInString(userInputString,userInputChar) << endl;
//	cout << "Letter '" << userInputChar << "' Or '" << stringConvert::invertChar(userInputChar) << " ' Count=" << countCharInStringIgnoreCase(userInputString, userInputChar) << endl;
//
//
//}

//instructro solution:
//the matchcase means:هل نراعي  حالة الحرف سواء كابيتال او  small
short countCharacterInString(string s1,char c1,bool matchCase=true){
	short counter = 0;
	for (short i = 0;i < s1.length();i++) {
	if(matchCase){
	if(s1[i]==c1) {
		counter++;
	}
	}
	else {
		if(tolower(s1[i])==tolower(c1)) {
			counter++;
		}
	}
	}
	return counter;
}


int main() {
		string userInputString = " ";
	char userInputChar = ' ';
	userInputString = stringConvert::readString();
	userInputChar = stringConvert::readChar();
	cout << "Letter '" << userInputChar << "' Count=" << countCharacterInString(userInputString,userInputChar) << endl;
	cout << "Letter '" << userInputChar << "' Or '" << stringConvert::invertChar(userInputChar) << " ' Count=" << countCharacterInString(userInputString, userInputChar,false) << endl;
//
}