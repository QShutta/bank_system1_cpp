#include<iostream>
using namespace std;
void printAlphapet() {
	for (int i = 65;i <= 90;i++) {
		for (int j = 65;j <= 90;j++) {
			cout << char(i) << char(j) << endl;
		}
		cout << "--------------------------------" << endl;
	}
}

void printStars() {
	for (int i = 10;i >= 1;i--) {
		for (int j = i; j >= 1;j--) {
			cout <<  " *";
		}
		cout << endl;
	}
}

void printNumbers() {
	for (int i = 10;i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	
}
void printNumbers2() {
	for (int i = 1;i <= 10;i++) {
		for (int j = 1;j <= i;j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}

//void printChar() {
//	for (int i = 65;i <= 70;i++) {
//		for (int j = 65;j <= i;j++) {
//			cout << char(j) << " ";
//		}
//		cout << endl;
//	}
//}
int main() {
	//printStars();
	//printNumbers2();
	//printAlphapet();
	printChar();
}