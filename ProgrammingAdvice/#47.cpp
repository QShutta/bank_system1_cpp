#include<iostream>
#include<cmath>
using namespace std;



float readNumber(string msg) {
	float number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}

//int myRound(float number){
//	int temp = number * 10;
//	int reminder = temp%10;
//
//	float result = 0;
//	if(number>0){
//		if (reminder > 5) {
//			result= ((number * 10) / 10) + 1;
//
//			return result;
//			
//		}
//		else {
//			return ((number * 10) / 10);
//		}
//	}else {
//		if (reminder <-5) {
//			return ((number * 10) / 10) - 1;
//		}
//		else {
//		return((number * 10) / 10);
//		}
//	}
//}
//----------------------------------------myRound function:the instuctor solution:
float getFraction(float number,int intPart){
	return  number - intPart;
}

int myRound(float number){
	int intPart = 0;
	intPart = (int)number;
	float fractionPart = getFraction(number,intPart);
	if(abs(fractionPart)>=.5){
	if(number>0){
		return ++intPart;
	}
	else {
		return --intPart;
	}
	}
	else {
		return intPart;
	}

}

int main() {
	float number = readNumber("Please enter the number");
	myRound(number);
	cout << "The number before MYROUND():" << number << endl;
	cout << "My round result:" << myRound(number) << endl;
	//float cRound = readNumber("Please enter the number");
	cout << "C++ round result:" << round(number) << endl;

}