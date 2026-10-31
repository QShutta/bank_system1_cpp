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


bool checkPerfect(int number) {
	int sum = 0;
	for (int counter = 1;counter <number;counter++) {
		if (number % counter == 0) {
			sum += counter;
		}
	}
	return sum == number;
}


void printPerfectFrom1toN(int number) {
	cout << "\n\n\t The perfect numbers from 1 to " << number << " are" << endl;
	for (int counter= 1;counter <= number;counter++) {
	if(checkPerfect(counter)){
		cout << counter << endl;
	}
	}
}


int main() {
	printPerfectFrom1toN(readPositiveNumber("Please enter a postive number:"));

}