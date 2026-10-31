#include<iostream>
#include<cmath>
using namespace std;



float readNumber(string msg) {
	float number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}

float getFraction(float number) {
	return  number - int(number);
}

//الفلور هو التقريب للادني
//int myCeil(float number) {
//	if(number>0){
//		return int(number) + 1;
//	}
//	else {
//		return int(number);
//	}
//}



int myCeil(float number){
	float fractionPart = getFraction(number);
	if (abs(fractionPart) > 0) {
	if(number>0){
		return int(number) + 1;
	}
	else {
		return int(number);
	}
	}
	else {
		return number;
	}
}


int main() {
	float number = readNumber("Please enter the number");

	cout << "My ceil result:" << myCeil(number) << endl;
	cout << "C++ ceil result:" << ceil(number) << endl;

}