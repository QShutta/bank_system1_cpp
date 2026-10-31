#include<iostream>
using namespace std;
void printAtoZ() {
	for (int i = 65;i <= 90;i++) {
		cout << char(i) << endl;
	}
}
//-----------------------------------------#47----------------------------------------

float readPositiveNumber(string message) {
	float number = 0;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <0);
	return number;
} 

struct stLoanInfo {
	float loanAmount, monthlyPayment;
};

stLoanInfo readLoanInfo() {
	stLoanInfo myLoanInfo;

	myLoanInfo.loanAmount = readPositiveNumber("Please enter teh loan amount that you want:");
	myLoanInfo.monthlyPayment = readPositiveNumber("Please enter the monthly payment that you can pay:");
	return myLoanInfo;
}

float getNumberOfMonthToSattleLoan(stLoanInfo myLoanInfo){
	return myLoanInfo.loanAmount / myLoanInfo.monthlyPayment;
}

//-----------------------------------------#48-----------------------------------------

float getMonthlyInstallment(float loanAmount,float numOfMonth){
	return (float)loanAmount / numOfMonth;
}
//------------------------------------------#49-----------------------------------
void showBalance() {
	int PIN = readPositiveNumber("Please enter the PIN:");
	while(PIN!=1234){
		PIN = readPositiveNumber("Wrong PIN!!Please enter valid the PIN:");
	}
	cout << "You'r balance is 7500";
}
//------------------------------------------#49 the instructor code-------------------------------------
string readPINCode() {
	string PIN;
	cout << "Please enter the pin code" << endl;
	cin >> PIN;
	return PIN;
}

bool login() {
	string myPIN;
	int counter = 3;
	do {
		counter--;
		myPIN = readPINCode();
		if (myPIN != "1234") {
			system("color 4F");
		

			cout << "Wrong PIN!!The number of reminign tries is:"<<counter << endl;
		}
		else {
			return true;
		}
	} while (myPIN!="1234"&&counter>=1);
	return false;
}
//-------------------------------------------------#50--------------------------------------------------------

int main() {
	if(login()){
		system("color 2F");
		cout << "You'r balance is:7500" << endl;
	}
	else {
		cout << "Your account is locked" << endl;
	}
}