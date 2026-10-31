#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char x;
	char y;

	x = toupper('a');
	y = tolower('B');

	cout << x << endl;
	cout << y << endl;

	cout << "Did the A is upper?" << isupper('A') << endl;
	cout << "Did the D is upper?" << islower('D') << endl;


	cout << "did the 10 is digig" << isdigit('9') << endl;

	cout << "did the ; is punctuation?" << iswpunct('*') << endl;
}