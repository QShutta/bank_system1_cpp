//#include<iostream>
//using namespace std;
//
//void readInput(int &number) {
//	
//	cout << "Please enter number" << endl;
//	cin >> number;
//}
//
//void validateNumber(int &number){
//	while (number < 0) {
//		cout << "Wrong Number! Please enter a valid number" << endl;
//		cin >> number;
//}
//
//}
//
//int ReadNumberInRange(int from,int to){
//	int number;
//	cout << "Please enter number" << endl;
//	cin >> number;
//	while(number<from||number>to){
//		cout << "Wrong Input!! Please enter a valid input from" << from << " to " << to << endl;
//		cin >> number;
//	}
//	return number;
//}
//
//
//
//int main() {
//	int number = ReadNumberInRange(18, 45);
//	cout << "Congratulation:the correct number that you have enter is:" << number<< endl;
//
//	//int number;
//	//readInput(number);
//	//validateNumber(number);
//	//cout << "The number is:" << number << endl;
//	//for (int i = 1;i <= 5;i++) { cout << i << endl; }
//	//int i = 1;
//	//while(i<=5){
//	//	cout << i << endl;
//	//	i++;
//	//}
//}

//-----------------------------------------Home work----------------------------------------
#include<iostream>
#include<cmath>
using namespace std;


void readNumber(int &number){
	cout << "Please enter number" << endl;
	cin >> number;
}

void readPositiveOnly(int& number) {
	cout << "Please enter number" << endl;
	cin >> number;
	while(number<=0){
		cout << "Wrong number!!Please enter a positive number" << endl;
		cin >> number;
	}
}


void printNumber(int number){
	int i = 1;
while(i<=number){
	cout << i << endl;
	i++;
}
}


void printReverse(int number){
	cout << "----------------------------" << endl;
	while(number>=1){
		cout << number << endl;
		number--;
	}
}

void sumOddNumber(int &number,int &sum){
	int i = 1;
	while (i<=number) {
		if (i % 2 != 0) {
			sum += i;
		}
		i++;
}
}

void sumEvenNumber(int& number, int& sum) {
	int i = 1;
	while (i <= number) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	}
}

int getFact(int &number,int &fact) {
	while (number >=1) {
		fact *= number;
		number--;
	}
	return fact;

}

float getPowOf(float &n,float &m){
	
	int pow=1,i=1;
	cout << "Please enter the value of N" << endl;
	cin >> n;
	cout << "Please enter the value of M" << endl;
	cin >> m;
	while(i<=m){
		pow *= n;
		i++;
	}
	return pow;
}


void sumNumbers(int& number,int &sum) {
	readNumber(number);
	while (number !=-99) {
		sum += number;
		readNumber(number);
	}
	cout << "The sum of the numbers is :" << sum << endl;
}

void printCapitalLetters() {
	int i = 65;
	while(i<=90){
		cout << char(i) << endl;
		i++;
	}
	
}

void readPIN(int &number){
	int i = 0;
	cout << "Please enter number" << endl;
	cin >> number;

	
	if(number==1234){
		cout << "You'r Balance is 7500" << endl;
	}
	else {
		while(i!=3){
			cout << "Wrong PIN!! Please enter password again:" << endl;
			cin >> number;
			i++;
			if (number == 1234) {
				cout << "You'r Balance is 7500" << endl;
				break;
			}
		}
		if(i==3){
			cout << "Card is locked" << endl;
		}
	}
	}

int main() {
	int number;
	readPIN(number);
	//printCapitalLetters();
}