#include<iostream>
#include"convert_string.h";
using namespace std;

//bool isVowel(char c1){
//if(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u') {
//	return true;
//}
//else {
//	return false;
//}
//}

//Isvowel the instructor solution:

bool isVowel(char c1){
	char charInSamll = tolower(c1);
	return (c1=='a')||(c1=='e')||(c1=='i')||(c1=='o')||(c1=='u');
}

int main() {
	char c1 = stringConvert::readChar();
	if(isVowel(c1)){
		cout << "Yes letter'" << c1 << "' is vowel" << endl;
	}
	else {
		cout << "No letter'" << c1 << "' is not vowel" << endl;
	}

}