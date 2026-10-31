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

int getFrequancyOfNumber(short digit,int number){
	int freqCount = 0,reminder=0;
	while (number>0) {
		//كدة انا عندي اخر خانة او اخر عنصر
		reminder = number % 10;
		number = number / 10;
		if(reminder==digit){
			freqCount++;
		}
	}
	return freqCount;
}




int main() {
	int number = readPositiveNumber("Please enter a postive number:");
	
	short digit = readPositiveNumber("Please enter the digit:");
	cout << "Digit " << digit << " Frequancy is " << getFrequancyOfNumber(digit, number) << " Times" << endl;
}