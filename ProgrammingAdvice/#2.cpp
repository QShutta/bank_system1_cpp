#include<iostream>
using namespace std;
//
//bool checkPrime(int number){
//	for (int i = 2;i < number;i++) {
//		//Why did when i was make it i%number==0 give me a wrong result why?
//		//Did the reason is that we should divide the big with the small not the vise ?
//		if (number%i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int readNumber() {
//	int number;
//	cout << "Please enter the number" << endl;
//	cin >> number;
//	return number;
//}
//
//void printResult(int num) {
//	if (checkPrime(num)) {
//		cout << "The number :" << num << " Is prime Number" << endl;
//
//	}
//	else {
//		cout << "The number :" << num << " Is not a prime Number" << endl;
//
//	}
//}
//
//void printPrime(int number){
//	for (int i = 1;i <= number;i++) {
//	if(checkPrime(i)){
//		cout << i << endl;
//	}
//	}
//}
//

int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};

enum enPrimeNotPrime {
	prime = 1, notPrime = 0
};

enPrimeNotPrime checkPrime(int number) {
	int halfOfNumber = round(number/2);

	for (int i = 2;i <= halfOfNumber;i++) {
	if(number%i==0){
		return enPrimeNotPrime::notPrime;
	}
	}
	return enPrimeNotPrime::prime;
}

void printPrimeNumberFrom1ToN(int number){
	cout << "\n\n";
	cout << "The primary numbers from 1 to "<<number<<"are:" << endl;
	for (int i = 1;i <= number;i++) {
	if(checkPrime(i)==enPrimeNotPrime::prime){
		cout << i << endl;
	}
	}
}

int main() {
	printPrimeNumberFrom1ToN(readPositiveNumber("Please enter a postive number:"));
	

}