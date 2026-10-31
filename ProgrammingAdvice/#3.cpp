#include<iostream>
using namespace std;
//
//enum enPerfectNotPerfect {
//	perfect = 0,notPerfect=1,
//};
//
//int readPositiveNumber(string msg) {
//	int number;
//	do {
//		cout << msg << endl;
//		cin >> number;
//
//	} while (number < 0);
//	return number;
//};
//
//int getSumDivisor(int number){
//	int sum = 0;
//	int halfOfNumber = round(number/2);
//	for (int i = 1;i <= halfOfNumber;i++) {
//	if(number%i==0){
//		sum += i;
//	}
//	}
//	return sum;
//}
//
//enPerfectNotPerfect checkPerfectionism(int number,int sum) {
//	if(sum==number){
//		return enPerfectNotPerfect::perfect;
//	}
//	else {
//		return enPerfectNotPerfect::notPerfect;
//	}
//}
//
//void printResult(int number,int sum) {
//	if(checkPerfectionism(number,sum)==enPerfectNotPerfect::perfect){
//		cout << "The number " << number << " Is a perfect number" << endl;
//	}
//	else {
//
//		cout << "The number " << number << " Is not a perfect number" << endl;
//	}
//}

//-----------------------------------------The instructor solution-----------------------------------------------

int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};


bool checkPerfect(int number){
	int sum = 0;
	for (int counter = 1;counter < number;counter++) {
	if(number%counter==0){
		sum += counter;
	}
	}
	return sum == number;
}

void printResult(int number) {

	if(checkPerfect(number)){
		cout << "The number:" << number << " is a perfect number" << endl;
	}
	else {
		cout << "The number " << number << " is not a perfect number" << endl;
	}
}

int main() {
	printResult(readPositiveNumber("Please enter a postive number"));
}