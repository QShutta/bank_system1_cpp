#include<iostream>
#include<string>
using namespace std;



int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};
//
//
//int getSumOfDigits(int number) {
//
//	int reminder = 0;
//	string reversed = "";
//	while (number > 0) {
//
//		reminder = number % 10;
//		number = number / 10;
//		reversed +=to_string(reminder);
//	}
//	return stoi(reversed);
//}
//----------------------------------------the instructor solution------------------------------------
int reversedNumber(int number){
	int reversed = 0;int reminder = 0;
	while(number>0){
		//This to get the last digit
		reminder = number % 10;
		//This to discard from the last digit in the number
		number = number / 10;

		reversed = reversed * 10 + reminder;
	}
	return reversed;
}

int main() {
	int number = readPositiveNumber("Please enter a postive number");
	cout << "The number in reversed is " << reversedNumber(number) << endl;
}