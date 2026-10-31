#pragma once
#include<iostream>
using namespace std;

namespace inputLib {
	int readNumber(string msg) {
		int num = 0;
			cout << msg;
			cin >> num;
			while(cin.fail()){
				//clear means remove the error message
				cin.clear();
				//This to discard from the input that the user enter
				cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

				cout << "Invalid number, Enter a valid number:" << endl;
				cin >> num;
			}
		return num;
	}

	int readPostiveNumber(string msg) {
		int num = 0;
		do {
			cout << msg;
			cin >> num;
		} while (num<0);
		return num;
	}

	int readNumberInRange(int from,int to,string msg) {
		int number = 0;
		do {
			cout << msg << endl;
			cin >> number;

		} while (number<from||number>to);
		return number;
	}
}