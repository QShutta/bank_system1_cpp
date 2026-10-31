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

int reverseNumber(int number) {
	int reminder = 0, number2 = 0;
	while (number > 0) {
		reminder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + reminder;
	}
	return number2;
}

bool isPlaindrosim(int number){
	return number == reverseNumber(number);
}


int main() {
	int number = readPositiveNumber("Please enter a postive number");
	if(isPlaindrosim(number)){
		cout << "Yes, It's a plaindrosim" << endl;
	}
	else {
		cout << "No, It's not a plaindrosim" << endl;
	}
}