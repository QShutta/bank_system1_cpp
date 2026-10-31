#include<iostream>
#include<cmath>
using namespace std;



float readNumber(string msg) {
	float number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}





float mySqrt(float number){
	for (float i = 0.0;i < 9.0;i++) {
		if((i*i)==number){
			return i;
		}
	}
	return 0;
}


//the instructor mySqrt function:
//why did he make the return type int?
float inMySqrt(float number){
	//the instructr said that this a rule in math said that any number for the pow of 0.5 is the sqrt of the number
	return pow(number,0.5);
}


int main() {
	float number = readNumber("Please enter the number");

	cout << "My sqrt result:" << inMySqrt(number) << endl;
	cout << "C++ sqrt result:" << sqrt(number) << endl;

}