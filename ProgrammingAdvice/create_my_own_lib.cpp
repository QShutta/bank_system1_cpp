#include<iostream>
using namespace std;

#include "input.h";
#include "mathLib.h";


int main() {
	int number = mathLib::multNumbers(3, 9);
	cout << "The number is:" << number << endl;
}