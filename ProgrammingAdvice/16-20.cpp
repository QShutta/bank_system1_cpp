#include<iostream>
#include<cmath>
using namespace std;

void readOneSideAndDiagonal(float &a,float& d){
	cout << "Please enter one side of the rectangle" << endl;
	cin >> a;
	cout << "Please enter diagonal of the rectangle" << endl;
	cin >> d;
}

float getRectangleAreaBySideAndDiagonal(float a,float d){
	float area = a * sqrt(pow(d,2)-pow(a,2));
	return area;
}

void printArea(float area){
	cout << "The area of the rectangle using digonal and one side is:" << area << endl;
}
//------------------------------------------#17--------------------------------------------
void readNumbers(double &a,double &h) {
	cout << "Please enter the value of a:" << endl;
	cin >> a;
	cout << "Please enter the value of h:" << endl;
	cin >> h;
}

double getAreaOfTringle(double a,double h){
	double area = (a / 2) * h;
	return area;
}


void printAreaOfTringle(double area) {
	cout << "The area of tringle is:" << area << endl;
}
//------------------------------------------------#18--------------------------------------------
float readValueOfR() {
	float r;
	cout << "Please enter value of R" << endl;
	cin >> r;
	return r;
}

float getAreaOfCircle(float r) {
	const float pi = 3.14;
	float area = pi * pow(r,2);
	return area;
}

void printAreaOfCircle(float area) {
	cout << "The area of Circle is:" << area << endl;
}
//-----------------------------------------------------#19-----------------------------------------
float readDiameter() {
	float diameter;
	cout << "Please enter the value of diameter:" << endl;
	cin >> diameter;
	return diameter;
}

float getAreaOfCircleByDiameter(float d){
	const float pi = 3.14;
	float area = (pi * pow(d, 2)) / 4;
	return area;
}

void printAreaOfCircleByDiameter(float area){
	cout << "The area of the circle is:" << area << endl;
}
//-----------------------------------------------------#20-----------------------------------
float readA() {
	float a;
	cout << "Please enter the value of a:" << endl;
	cin >> a;
	return a;
}

float getCirecleAreaInscripedInSquare(float a) {
	const float pi = 3.14;
	float area = (pi * pow(a, 2)) / 4;
	return area;
}

void printCircleAreaInscripedInSquare(float area) {
	cout << "The area of the circle is:" << area << endl;
}

int main() {
	printCircleAreaInscripedInSquare(getCirecleAreaInscripedInSquare(readA()));
}