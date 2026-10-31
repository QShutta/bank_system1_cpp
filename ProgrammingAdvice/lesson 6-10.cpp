#include<iostream>
#include<string>
using namespace std;
//--------------------------------------------#6-----------------------------------------
struct stInfo {
	string fName;
	string lName;
};

stInfo readData() {
	stInfo myInfo;
	cout << "Please enter the first name:" << endl;
	cin >> myInfo.fName;

	cout << "Please enter the last name:" << endl;
	cin >> myInfo.lName;
	return myInfo;
}

string getFullName(stInfo myInfo,bool reverse) {
	string fullName = "";
	if(reverse==true){
		fullName = myInfo.lName + "," + myInfo.fName;
	}
	else {
		fullName = myInfo.fName + " " + myInfo.lName;
	}
	return fullName;
}

void printName(string name){
	cout << "Your name is :" << name << endl;
}
//---------------------------------------------#7-----------------------------------------------
int readNumber() {
	int number;
	cout << "Please enter number" << endl;
	cin >> number;
	return number;
}

float getHalfOfNumber(int number) {
	return float(number/2);
}

void printHalfNumber(int number){
	string result = "The half of :" + to_string(number) + " is: " + to_string(getHalfOfNumber(number));
	cout << result << endl;
}
//--------------------------------------------#8---------------------------------------------------
enum enPassFail {
	pass = 1, fail = 0,
};

int readMark(){
	int mark;
	cout << "Please enter your makrk:" << endl;
	cin >> mark;
	return mark;
}

enPassFail checkMark(int mark) {
	if(mark<50){
		return enPassFail::fail;
	}
	else {
		return enPassFail::pass;
	}
}
//MyOwnone
void printStatus(enPassFail myStatus) {
	if(myStatus==enPassFail::pass){
		cout << "You have succfuly passed" << endl;
	}
	else {
		cout << "You Faild" << endl;
	}
}
//The instructor one:
//Compare you'r code with the instructor code:
void printStatus2(int mark) {
	if (checkMark(mark) == enPassFail::pass) {
		cout << "You have succfuly passed" << endl;
	}
	else {
		cout << "Sorry!!You Faild" << endl;
	}
}
//-------------------------------------------------#9-------------------------------------------

//struct myNumbers {
//	int num1; int num2; int num3;
//};
//
//myNumbers readNumbers(){
//	myNumbers myNum;
//	cout << "Please enter the first number" << endl;
//	cin >> myNum.num1;
//	cout << "Please enter the Secound number" << endl;
//	cin >> myNum.num2;
//	cout << "Please enter the Third number" << endl;
//	cin >> myNum.num3;
//	return myNum;
//}
//
//int sumNumbers(myNumbers myNum) {
//	return myNum.num1 + myNum.num2 + myNum.num3;
//}
//void printNumbers(int sum) {
//	cout << "Your sum is:" << sum << endl;
//}
//int main() {
//	printNumbers(sumNumbers(readNumbers()));
//}



void readNumbers(int &num1,int &num2,int &num3) {
	cout << "Please enter the first number" << endl;
	cin >> num1;
	cout << "Please enter the Secound number" << endl;
	cin >> num2;
	cout << "Please enter the Third number" << endl;
	cin >> num3;
}

int sumNumbers(int num1,int num2,int num3) {
	return num1 + num2 + num3;
}
float calculateAvarage(int num1,int num2,int num3) {
	return (float)sumNumbers(num1,num2,num3) / 3.0;
}
void printNumbers(int sum) {
	cout << "Your Avarage is:" << sum << endl;
}
//------------------------------------------------------#10--------------------------------------------------
int main() {
	int num1, num2, num3;
	readNumbers(num1,num2,num3);
	printNumbers(calculateAvarage(num1,num2,num3));
}