#include<iostream>
#include "input.h";
using namespace std;

int readNumber(string msg){
	int number = 0;
	cout << msg;
	cin >> number;
	while(cin.fail()){

		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		cout << "Please enter a vlid number" << endl;
		cin >> number;

	}
	return number;
}

int main() {
	//The result is it how?
	//because it get the binary of 12 .
	//and the binary of 25 and then do the & between of them .
	cout << "Result" << (12 | 25) << endl;
}