#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float readL() {
	float l;
	cout << "Please enter the value of l" << endl;
	cin >> l;
	return l;
}

float getCircleAreaByCircumfernce(float l) {
	const float pi = 3.14;
	float area = pow(l, 2) / (4 * pi);
	return area;
}
void printCircleAreaByCircumference(float area) {
	cout << "The circle area by circumference is :" << area << endl;
}
//---------------------------------------------------22---------------------------------
void readAandB(float &a,float &b) {
	cout << "Please enter the value of a" << endl;
	cin >> a;
	cout << "Please enter the value of b" << endl;
	cin >> b;
}
float getCircleAreaInscribedInTringle(float a,float b) {
	float const pi = 3.14;
	float area = pi * (pow(b, 2) / 4) * ((2*a-b)/(2*a+b));
	return area;
}

void printAreaOfCircleInscribedInTringle(float area) {
	cout << "The area of circle is:" << area << endl;
}
//-----------------------------------------23---------------------------------------
void readValueOfAandBandC(float& a, float& b, float& c) {
	cout << "Please enter the value of a" << endl;
	cin >> a;
	cout << "Please enter the value of b" << endl;
	cin >> b;
	cout << "Please enter the value of c" << endl;
	cin >> c;
}

float getCircleAreaAroundArbitaryTringle(float a,float b,float c){
	float const pi = 3.14;
	float p = (a+b+c)/2;
	float area = pi * pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))),2);
	return area;
}

void printCircleAreaAroundArbitaryTringle(float area) {
	cout << "The circle area discriped around arbitary tringle is" << area << endl;
}
//------------------------------------------------24----------------------------------------
int readAge() {
	int age;
	cout << "Please enter the 'age' value " << endl;
	cin >> age;
	return age;
	
}

bool validateNumberInRange(int number,int from,int to){
	return (number>=from&&number<=to);
}

void printRange(int age){
	if(validateNumberInRange(age,18,45)==true){
		cout << "The "<<age<< " number is valid" << endl;
	}else{
		cout << "The "<<age<<"  number is not valid" << endl;
	}
}
//--------------------------------------#25----------------------------------------
int readAgeWithValidation() {
	int age;
	do {
		cout << "Please enter age:" << endl;
		cin >> age;
	} while (!validateNumberInRange(age,18,45));
	return age;

}
void printAge(int age) {
	cout << "You'r age is :" << age << endl;
}
int main() {
	printAge(readAgeWithValidation());
	
}