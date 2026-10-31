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

//void printLetterPattern(int number) {
//	cout << "\n";
//	for (int i = 65;i <= 65 + number - 1;i++) {
//		for (int j = 65;j <= i;j++) {
//			cout << char(i);
//		}
//		cout << endl;
//	}
//	
//}
//The instructor solution:

void printLetterPattern(int number) {
	cout << "\n";
	for (int i = 65;i <= 65 + number - 1;i++) {
		for (int j = 1;j<=i-65+1;j++) {
			cout << char(i);
		}
		cout << endl;
	}

}

int main() {
	int number = readPositiveNumber("Please enter a postive number:");
	printLetterPattern(number);
}