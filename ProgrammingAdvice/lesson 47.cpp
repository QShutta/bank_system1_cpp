

#include<iostream>
#include<cmath>
using namespace std;

//
void readNumber(int& number) {
	cout << "Please enter number:" << endl;
	cin >> number;
}

void printNumbers(int number) {
	for (int i = number;i >= 1;i--) {
		cout << i << endl;
	}
}

void sumOddNumber(int number,int &sum) {
	for (int i = 1;i <= number;i++) {
		
		if(i%2==0){
			sum += i;
		}
	}
}





int getPow(int number,int m){
	int result = pow(number,m);
	return result;
}

void printCapital() {
	for (int i = 65;i <= 90;i++) {
		cout << char(i) << endl;
	}
}
void printSmallLetters() {
	for (int i = 97;i <= 122;i++) {
		cout << char(i) << endl;
	}
}

int getFactorial(int number, int fact) {
	for (int i = number;i >= 1;i--) {
		fact = fact * i;
	}
	return fact;
}
int main() {
	int result=getFactorial(5,1);
	cout << result << endl;
	
}








//
//
//int main() {
//	for (int i = 0;i <= 10;i+=2) {
//		cout << i << endl;
//}
//
//}