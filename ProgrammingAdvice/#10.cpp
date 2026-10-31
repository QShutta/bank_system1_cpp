#include<iostream>
using namespace std;

int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};


void printNumberByNumber(int number){
	int reminder = 0,number2=0;

	while (number>0) {
		reminder = number % 10;
		number = number / 10;
		//If the number is 1234 now it will become 4321
		number2 = number2 * 10 + reminder;
}

	while(number2>0){
		reminder = number2 % 10;
		number2 = number2 / 10;
		cout << "The number is:" << reminder << endl;
	}


}
//The instructor solution--------------------------------------------------

int reverseNumber(int number){
	int reminder = 0,number2=0;
	while(number>0){
		reminder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + reminder;
	}
	return number2;
}

void printDigits(int number){
	int reminder = 0;
 while(number>0){
	 //4321
	 reminder = number %10;
	 number = number / 10;
	 cout << reminder << endl;
 }
}

int main() {
	int number = readPositiveNumber("Please enter a postive number:");
	printDigits(reverseNumber(number));
	
}