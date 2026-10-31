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


void printInvertedPattern(int number) {
	for (int i = 1;i <= number;i++) {
		for (int j = 1;j <= i;j++) {
			cout << i;
		}
		cout << endl;
	}
}
int main() {
	int number = readPositiveNumber("Please enter a postive number");
	printInvertedPattern(number);
}