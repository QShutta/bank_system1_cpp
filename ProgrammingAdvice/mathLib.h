#pragma once
#include<iostream>
using namespace std;

namespace mathLib {
	int sumToNumbers(int num1,int num2){
		return num1 + num2;
	
	
	}

	int multNumbers(int number1,int number2){
		return number1 * number2;
	}

	bool checkPostiveOrNegtive(int number){
		bool result = (number < 0) ? false : true;
		return result;
	}
}