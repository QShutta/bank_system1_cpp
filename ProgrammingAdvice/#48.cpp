#include<iostream>
#include<cmath>
using namespace std;



float readNumber(string msg) {
	float number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}

float getFraction(float number, int intPart) {
	return  number - intPart;
}

//الفلور هو التقريب للادني
int myFloor(float number) {
	int intPart = 0;
	intPart = (int)number;
	float fractionPart = getFraction(number, intPart);
		if (number > 0) {
			return intPart;
		}
		else {
			return --intPart;
		}
}


int inMyFloor(int number){
	if (number > 0)
		return int(number);
	else
		return int(number) - 1;
}

int main() {
	float number = readNumber("Please enter the number");
	
	cout << "The number before myFloor():" << number << endl;
	cout << "My floor result:" << inMyFloor(number) << endl;
	cout << "C++ floor result:" << floor(number) << endl;

}