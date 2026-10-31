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

int getFrequancyOfNumber(short digit, int number) {
	int freqCount = 0, reminder = 0;
	while (number > 0) {
		//كدة انا عندي اخر خانة او اخر عنصر
		reminder = number % 10;
		number = number / 10;
		if (reminder == digit) {
			freqCount++;
		}
	}
	return freqCount;
}

//void printAllDigitFrequancy(int number) {
//	int reminder = 0, number2 = 0;
//	while (number > 0) {
//		//1234->123.4 and the reminder is 4
//		reminder = number % 10;
//		//1234->123
//		number = number / 10;
//		//كدة انا عندي الارقام معكوسات من الاخير لللاول .يعني لو الرقم 1234 انا كدة عندي ليهو 4321
//		number2 = number2 * 10 + reminder;
//	}
//
//	while(number2>0){
//		reminder = number2 % 10;
//		number2 = number2 / 10;
//		cout << "Digit " << reminder << " Frequancy is " << getFrequancyOfNumber(reminder, number2) << " Times" << endl;
//	}
//}


void printFrequancyOfEachNumber(int number) {
	int freq = 0;
	for (int i = 0;i <= 9;i++) {
		freq = getFrequancyOfNumber(i,number);
		if(freq>0){
			cout << "The frequancy of "<<i<<" Is " << freq << endl;
		}
	}

}

int main() {
	int number = readPositiveNumber("Please enter a postive number:");
	printFrequancyOfEachNumber(number);

}