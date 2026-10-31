#include<iostream>
#include<cmath>
using namespace std;



int readNumber(string msg) {
	int number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}

int myABS(int number){
	if(number>=0){
		return number;
	}
	return number *-1;
}

int main() {
	int number = readNumber("Please enter the number");
	cout << "The number before MYABS:" << number << endl;
	cout << "My abs result:" << myABS(number) << endl;
	cout << "C++ abs result:" << abs(number) << endl;

}