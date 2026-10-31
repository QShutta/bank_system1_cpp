#include<iostream>
using namespace std;
//---------------------------------------------36-----------------------------------------
//enum enOperationType {
//	sum = '+', sub = '-', multi = '*',myDiv = '/'
//};
//
//float readNumberCalc(string message) {
//	float number;
//	cout << "----------------------------------------------------" << endl;
//	cout << message << endl;
//	cin >> number;
//	return number;
//}
//
//enOperationType readOpType() {
//	enOperationType myOpType;
//	char opT = '+';
//	cout << "Please enter the operation type:" << endl;
//	cin >> opT;
//	myOpType = (enOperationType)opT;
//	return myOpType;
//}
//
//float calculate(float num1,float num2,enOperationType opT){
//	switch(opT){
//	case enOperationType::sum:return num1 + num2;
//	case enOperationType::sub:return num1 - num2;
//	case enOperationType::multi:return num1 *num2;
//	case enOperationType::myDiv:return num1 / num2;
//	default:num1 + num2;
//	}
//
//}
//-----------------------------------------------37-----------------------------------

#include<string>

float readNumber(string message) {
	float number;
	cout << "----------------------------------------------------" << endl;
	cout << message << endl;
	cin >> number;
	return number;
}


int sumNumbers() {
	int number = 0, sum = 0, counter = 1;
	do {
		number = readNumber("Please enter number:" + to_string(counter));
		if (number == -99) {
			break;
		}
		sum += number;
		counter++;

	} while (number != -99);
	return sum;
}
//------------------------------------------------#38 my Solution------------------------------------------
//int checkPrime(int number) {
//	int flag = 1;
//	for (int i = 2;i < number - 1;i++) {
//		cout << "---------------------------------the number of itreation is:" << i << endl;
//		cout << "-------------------------------the flag is:" << flag << endl;
//		if (number % i == 0) {
//			flag = 0;
//		}
//		else {
//			flag = 1;
//		}
//		return flag;
//	}
//}
//
//void printFlag(int flag) {
//	if (flag == 0) {
//		cout << "Not primaray" << endl;
//	}
//	else {
//		cout << "Primary" << endl;
//	}
//}
//---------------------------------------------38 The isntructor solution-------------------------------
enum enPrimeNumber {
	prime = 1, notPrime = 2
};

//int readPositiveNumber(string message) {
//	int number = 0;
//	do {
//		cout << message << endl;
//		cin >> number;
//	} while (number<=0);
//	return number;
//}

enPrimeNumber checkPrime(int number) {
	int m = round(number / 2);
	for (int counter = 2;counter <= m;counter++) {
		if (number % counter == 0) {
			return enPrimeNumber::notPrime;
		}
		return enPrimeNumber::prime;
	}
}

	void printPrimary(int number) {
		
		switch (checkPrime(number)) {
		case enPrimeNumber::prime:cout << "Primary Number" << endl;break;
		case enPrimeNumber::notPrime:cout<< "Not primary number" << endl;break;
		}
	}
	//--------------------------------------------#39------------------------------------------
	//struct stTotalBillCashPaid {
	//	float totalBill;
	//		float cashPaid;
	//};

	//stTotalBillCashPaid readTotalBillCashPaid() {
	//	stTotalBillCashPaid myTotalBillAndCash;
	//	cout << "Please enter the total Bill" << endl;
	//	cin >> myTotalBillAndCash.totalBill;
	//	cout << "Please enter the Cash Paid" << endl;
	//	cin >> myTotalBillAndCash.cashPaid;
	//	return myTotalBillAndCash;
	//}

	//float getReminder(stTotalBillCashPaid myTotalBillAndCashPaid){
	//	float reminder = myTotalBillAndCashPaid.cashPaid - myTotalBillAndCashPaid.totalBill;
	//	return reminder;
	//}
	//-------------------------------------------#39 instructor #39-------------------------------------
	//int readPositiveNumber(string message) {
	//	int number = 0;
	//	do {
	//		cout << message << endl;
	//		cin >> number;
	//	} while (number <= 0);
	//	return number;
	//}
	//
	//float calculateReminder(float totalBill,float totalCashPaid){
	//	return totalCashPaid - totalBill;
	//}


	//-------------------------------------------#40-----------------------------------------------------------
	float readBillValue() {
		float billValue;
		cout << "Pleas enter the bill value" << endl;
		cin >> billValue;
		return billValue;
	}

float addServiceFee(float billValue){
	return billValue * 1.1;
}

float addSalesTax(float billValueWithServiceFee) {
	return billValueWithServiceFee * 1.16;
}

void printTotalBillAfterServiceFeeAndSalesTax(float billWithServiceFee_salesTax){
	cout << "The bill after adding the service fee and bill tax is:" << billWithServiceFee_salesTax << endl;
}
	int main() {
		printTotalBillAfterServiceFeeAndSalesTax(addSalesTax(addServiceFee(readBillValue())));

	}