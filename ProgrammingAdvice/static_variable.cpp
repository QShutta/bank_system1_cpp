#include<iostream>
using namespace std;


void printNumber() {
	static int number = 1;
	cout << number << endl;
	number++;
}

int main() {
	printNumber();
	printNumber();
	printNumber();

}