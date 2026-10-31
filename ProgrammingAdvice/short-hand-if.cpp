#include<iostream>
#include"mathLib.h"
#include"input.h"

using namespace std;

int main() {
	int number = inputLib::readNumber("please enter a number");
	string result = (number == 0) ? "Zero" : (number < 0) ? "Negtive" : "Postive";
	cout << result << endl;
	
}
