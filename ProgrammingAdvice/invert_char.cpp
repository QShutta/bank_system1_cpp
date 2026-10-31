#include<iostream>
#include"convert_string.h";
using namespace std;

char readChar() {
	char c = ' ';
	cout << "Please enter a charcter?" << endl;
	cin >> c;
	return c;
}



int main() {

	char c = readChar();
	cout << "Char after inverting case:" << endl;
	c = stringConvert::instructInverteCharecter(c);
	cout << c << endl;

}