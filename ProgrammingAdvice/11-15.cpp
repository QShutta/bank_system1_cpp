#include<iostream>
using namespace std;

enum enPassFail { pass = 1,fail=0 };

void readNumbers(int &num1,int &num2,int &num3) {
	cout << "Please enter num1" << endl;
	cin >> num1;
	cout << "Please enter num2" << endl;
	cin >> num2;
	cout << "Please enter num3" << endl;
	cin >> num3;
}


int sumNumbers(int num1,int num2,int num3){
	return num1 + num2 + num3;
}


float calcAvg(int mark1,int mark2,int mark3){
	return (float)sumNumbers(mark1,mark2,mark3) / 3;
}

enPassFail checkAvg(float avg){
if(avg<50){
	return enPassFail::fail;
}
else {
	return enPassFail::pass;
}
}

void printResult(float avg){
	if(checkAvg(avg) == enPassFail::pass) {
		cout << "You succfuly pass the exam" << endl;
	}
	else {
		cout << "Sorry!!But you fail.good luck next time." << endl;
	}
}
//-------------------------------------------------#12---------------------------------------------------
void readMyNumbers(int &num1,int &num2,int &num3) {
	cout << "Please enter the first number" << endl;
	cin >> num1;
	cout << "Please enter the secound number" << endl;
	cin >> num2;
	cout << "Please enter the third number" << endl;
	cin >> num3;

}

int getMaxOf2Numbers(int num1,int num2){
	if(num1>num2){
	return num1;
	}
	else {
	return num2;
	}
}

//int getMaxOf3Numbers(int num1,int num2,int num3){
//	int max;
//	max = getMaxOf2Numbers(num1,num2);
//	max = getMaxOf2Numbers(max,num3);
//	return max;
//}

int getMaxOf3Numbers(int num1, int num2, int num3) {
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else
			return num3;

	else
		if (num2 > num3)
			return num2;
		else
			return num3;
}


void printMax(int max){
	cout << "The max of  numbers is:" << max << endl;
}
//-----------------------------------------------#14-------------------------------------------------
void read2Numbers(int &num1,int &num2){
	cout << "Please enter the first number" << endl;
	cin >> num1;
	cout << "Please enter the secound number" << endl;
	cin >> num2;
}

void swapNumbers(int &num1,int &num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void print2Numbers(int num1,int num2){
	cout << "The content of num1 is" << num1 << endl;
	cout << "The content of num2 is" << num2 << endl;
}
//-------------------------------------------------#15---------------------------------------------------
void readWidthHight(float &width,float &hight){
	cout << "Please enter the width of the rectangle" << endl;
	cin >> width;
	cout << "Please enter the hight of the rectangle" << endl;
	cin >> hight;
}

float getRectangleArea(float width,float hight) {
	return width * hight;
}

void printRectangleArea(float area){
	cout << "The rectangle area is:" << area << endl;
}

int main() {
	float width, hight;
	readWidthHight(width,hight);
	printRectangleArea(getRectangleArea(width,hight));
}