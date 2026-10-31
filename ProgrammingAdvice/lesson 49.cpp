#include<iostream>
using namespace std;
//make instead of 10 a variable and editable number.
void readNumber(int &number) {
	cout << "Please enter number" << endl;
	cin >> number;
}
void printMultiplicationTable(int number) {
	for (int i = 1;i <= number;i++) {
		cout << "i=" << i << endl;
		for (int j = 1;j <= 10;j++) {
			cout << i << "*" << j <<"=" << (i * j) << endl;
		}
		cout << "------------------------------------" << endl;
	}
}

void printStar(){
	for (int i = 1;i <= 10;i++) {
		for (int j = 1;j <= i;j++) {
			cout << "*";
		}
		cout << "\n" << endl;
	}
}

void printChar() {
	for (int i = 65;i <= 90;i++) {
		for (int j = 65;j <= 90;j++) {
			cout << char(i) << char(j) << endl;
		}
		cout << "------------------------------" << endl;
	};
}

void printStar2(){
	for (int i = 10;i >= 1;i--) {

		for (int j = i;j >= 1;j--) {
			cout << "*" << " "; 
		}

		cout << "\n";
	}
}

void printNumbers() {
	for (int i = 10;i >= 1;i--) {
		for (int j = i;j >= 1;j--) {
			cout << i-(j-1) << " ";
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
void printChar2() {
	for (int i = 65;i <= 70;i++) {
		for (int j = 65;j <= i;j++) {
			cout << char(j);
		}
		cout << endl;
	}
}
//mySolution
	void myPrintNumber3() {
		int x = 0;
		for (int i = 10;i >= 1;i--) {
			for (int j = i;j >= 1;j--) {
				//i=9,j=7
				//2,3,4
				cout << i - (j - 1)+(x)<< " ";
			}
			x++;
			cout << endl;
		}
	}
	//The instructor solution
	void printNumbers4() {
		for (int i = 1;i <= 10;i++) {
			for (int j = i;j <= 10;j++) {
				cout << j << " ";
			}
			cout << endl;
		}
	}
	
	void printNumbersTest() {
		for (int i = 1;i <= 10;i++) {
			for (int j = i;j <= 10;j++) {
				cout << j << " ";
			}
			cout << endl;
		}
	}
int main() {
	printNumbersTest();
	//myrintNumber3();
	//printNumbers4();
	//printChar2();
	//printNumbers();
	//printStar2();
}