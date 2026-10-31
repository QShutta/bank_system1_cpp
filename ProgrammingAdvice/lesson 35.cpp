#include<iostream>
#include<cmath>
using namespace std;
//
//int calc(int num1,int num2) {
//	return num1 + num2;
//}
//
//int main() {
//	int num1, num2;
//	cout << "Enter the first number" << endl;
//	cin >> num1;
//	cout << "Enter the secound number" << endl;
//	cin >> num2;
//
//	cout << calc(num1, num2) << endl;
//	cout << calc(30, 40) << endl;
//	cout << calc(50, 60) << endl;
//	cout << calc(70, 80) << endl;
//	cout << calc(90, 100) << endl;
//
//}

//--------------------------------HomeWork-------------------------
//void printMyName() {
	//cout << "Abu-algasim Mohamed Ibrahim" << endl;
//}
#include<string>
//void printName2() {
//	string name;
//	cout << "Please enter you'r name:" << endl;
//	getline(cin,name);
//	cout << name << endl;
//}

//-------------------------------------14-------------------------
//void swapFunction() {
//	int temp,num1,num2;
//	cout << "Please enter the first number" << endl;
//	cin >> num1;
//	cout << "Please enter the secound number" << endl;
//	cin >> num2;
//	
//	cout << "Num1=" << num1 << endl;
//	cout << "Num2=" << num2 << endl;
//
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "-------------------------" << endl;
//
//	cout << "Num1=" << num1 << endl;
//	cout << "Num2=" << num2 << endl;
//}
//--------------------------------------15-------------------
//double calculateRectangleArea(double width, double hight) {
//	return width * hight;
//}
//-------------------------------------16-----------------
//double calculateRectangleAreaThroughDigaonal(double oneSideOfRec, double dignoal) {
//	double area;
//	area = oneSideOfRec * (sqrt(pow(dignoal,2)-pow(oneSideOfRec,2)));
//	return area ;
//}
//-----------------------------------18---------------------------------
//double getCircleArea(double r) {
//	const double pi = 3.14;
//	double area = pi * pow(r,2);
//	return area;
//}
//--------------------------------------19-----------------------
//double getCircleAreaBydiameter(double diameter) {
//		const double pi = 3.14;
//		double area = (pi * pow(diameter,2))/4;
//		return area;
//	}
//--------------------------------------20-------------------
//
//double getCircleAreaInsideSquare(double a) {
//	const double pi = 3.14;
//	double area = (pi * pow(a, 2)) / 4;
//	return area;
//}
//---------------------------------------21-----------------------

//double getCircleAreaByCircumference(double l) {
//	const double pi = 3.141592653589793;
//	double area = (pow(l, 2)) / (4 * pi);
//	return area;
//}
//-----------------------------------22---------------------
//
//double getCircleAreaInTringle(double a,double b) {
//	const double pi = 3.141592653589793;
//	double area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
//	return area;
//}
//-------------------------------23--------------------------
//double getCircleAroundTringle(double a,double b,double c){
//	const double pi = 3.141592653589793;
//	double p = (a + b + c) / 2;
//	double area = pi * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
//	return area;
//	
//}
//-------------------------------------31--------------------------
//void calcFun() {
//	int number;
//	cout << "Please enter number" << endl;
//	cin >> number;
//	cout << "Number^2:" << pow(number, 2) << endl;
//	cout << "Number^3:" << pow(number, 3) << endl;
//	cout << "Number^4:" << pow(number, 4) << endl;
//}
//--------------------------------------32------------------------------------
//double getPowerOfM(int n,int m) {
//	return pow(n,m);
//}
//---------------------------------------42---------------------------
//int  getNumberOfSecounds(int days, int hours, int minutes, int secounds) {
//	int numberOfSecoundPerDay, numberOfSecoundPerHour, numberOfSecoundPerMinutes;
//	numberOfSecoundPerDay = (24 * 60 * 60) * days;
//	numberOfSecoundPerHour = (60 * 60) *hours;
//	numberOfSecoundPerMinutes = 60 * minutes;
//	return numberOfSecoundPerDay + numberOfSecoundPerHour + numberOfSecoundPerMinutes + 60;
//}

//----------------------------------------43---------------------------------------
void getNumOfDaysHoursMinutesSecound(int totalNumberOfSecounds) {
	int numberOfSecoundPerDay, numberOfSecoundPerHour, numberOfSecoundMinutes,numOfDays,numOfHours,numOfMinutes,numOfSecounds,reminder;
	numberOfSecoundPerDay = 24 * 60 * 60;
	numberOfSecoundPerHour = 60 * 60;
	numberOfSecoundMinutes= 60;

	numOfDays =  totalNumberOfSecounds/numberOfSecoundPerDay;
	reminder= totalNumberOfSecounds %numberOfSecoundPerDay;
	numOfHours = reminder / numberOfSecoundPerHour;
	reminder= reminder % numberOfSecoundPerHour;
	numOfMinutes = reminder / numberOfSecoundMinutes;
	reminder = reminder % numberOfSecoundMinutes;
	numOfSecounds = reminder;

	cout << numOfDays << ":" << numOfHours << ":" << numOfMinutes << ":" << numOfSecounds << endl;
	
}


int main() {
	int totalNumberOfSecounds;
	cout << "Please enter the total number of secound" << endl;
	cin >> totalNumberOfSecounds;

	getNumOfDaysHoursMinutesSecound(totalNumberOfSecounds);

}