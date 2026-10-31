#include<iostream>
using namespace std;
//
//int readNumber() {
//	int num;
//	cout << "Please enter number:" << endl;
//	cin >> num;
//	return num;
//}
//
//void printPowOf2_3_4(int number) {
//	int a, b, c;
//	a = number * number;
//	b = number * number * number;
//	c = number * number * number * number;
//	cout << a << " " << b << " " << c << endl;
//}
////-------------------------------------32---------------------------------------------
//int readValueOfN(){
//	int n;
//	cout << "Please enter the value of N:" << endl;
//	cin >> n;
//	return n;
//}
//
//int readM() {
//	int m;
//	cout << "Please enter the value of M:" << endl;
//	cin >> m;
//	return m;
//}
//
//int calcPowOfNwithM(int n,int m){
//	if (m == 0) {
//		return 1;
//	}
//	//why did he define the p;
//	//why he didn't just do n*=n;instead of define the n?
//	int p = 1;
//	for (int i = 1;i <= m;i++) {
//		//I think that he should simply do n*=n; but i get wrong result when do that why ?
//		p = p * n;
//	}
//	return p;
//}
//
//void printValueOfNpowM(int pow) {
//	cout << "The pow of the number is:" <<pow<< endl;
//}
////-----------------------------------#31---------------------------------------------------
//int readGrade() {
//	int grade;
//	do {
//		cout << "Please enter the grade:" << endl;
//		cin >> grade;
//	} while (grade<0||grade>100);
//	return grade;
//}
//char getGradeLetter(int grade){
//	if (grade >= 90) {
//		return 'A';
//	}
//	else if (grade >= 80) {
//		return 'B';
//	}
//	else if (grade >= 70) {
//		return 'C';
//	}else if(grade>=60){
//		return 'D';
//	}else if(grade>=60){
//		return 'E';
//	}
//	else {
//		return 'F';
//	}
//}
////------------------------------------#34---------------------------------------
//float readTotalSales() {
//	float totalSales;
//	cout << "------------------------------------------------------------" << endl;
//	cout << "Please enter the totalSales:" << endl;
//	cin >> totalSales;
//	return totalSales;
//}
//
//float getCommision(float totalSale) {
//	if(totalSale>1000000){
//		return  (0.01);
//	}
//	else if (totalSale>500000) {
//		return  (0.02);
//	}
//	else if (totalSale > 100000) {
//		return  (0.03);
//	}
//	else if (totalSale > 50000) {
//		return  (0.05);
//	}
//	else {
//		return 0.0;
//	}
//}
//float totalSaleAfterCommition2(float totalSale){
//	return getCommision(totalSale) * totalSale;
//}
//
////--------------------------------------#35---------------------------------------------
//
//
//struct enPiggyBank {
//	int penny, nickel, dime, quarter, dollar;
//};
//enPiggyBank readDataPennies(){
//	enPiggyBank myPiggyBank;
//	cout << "Please enter number of penny" << endl;
//	cin >> myPiggyBank.penny;
//	cout << "Please enter number of nickel" << endl;
//	cin >> myPiggyBank.nickel;
//	cout << "Please enter number of dime" << endl;
//	cin >> myPiggyBank.dime;
//	cout << "Please enter number of quarter" << endl;
//	cin >> myPiggyBank.quarter;
//	cout << "Please enter number of dollar" << endl;
//	cin >> myPiggyBank.dollar;
//	return myPiggyBank;
//}
//
//
//
//float getTotalPennies(enPiggyBank myPiggyBank) {
//	float totalNumberOfPennies;
//	totalNumberOfPennies = myPiggyBank.penny  + myPiggyBank.nickel * 5 + myPiggyBank.dime * 10 + myPiggyBank.quarter * 25 + myPiggyBank.dollar * 100;
//	return totalNumberOfPennies;
//}
////-----------------------------------------------#36---------------------------------------
//struct stNumAndOperation {
//	int num1, num2;
//	char op;
//};
//stNumAndOperation readNumberAndOperation(){
//	stNumAndOperation myNumAndOperation;
//	cout << "Please enter number one:" << endl;
//	cin >> myNumAndOperation.num1;
//	cout << "Please enter number tow:" << endl;
//	cin >> myNumAndOperation.num2;
//	cout << "Please enter opearation:" << endl;
//	cin >> myNumAndOperation.op;
//	return myNumAndOperation;
//}
//
//float getCalculationResult(stNumAndOperation myNumAndOp){
// switch(myNumAndOp.op){
// case '+':return myNumAndOp.num1 + myNumAndOp.num2;
// case '-':return myNumAndOp.num1 - myNumAndOp.num2;
// case '*':return myNumAndOp.num1 * myNumAndOp.num2;
// case '/':return myNumAndOp.num1 / myNumAndOp.num2;
// default:return 0;
// }
//}
//
//void printResultOfCalculation(stNumAndOperation myNumAndOp){
//	cout << "The result of calculation is:" << getCalculationResult(myNumAndOp) << endl;
//}
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
//------------------------------------------------#38------------------------------------------
int checkPrime(int number) {
	int flag = 1;
	for (int i = 2;i < number - 1;i++) {
		cout << "---------------------------------the number of itreation is:" << i << endl;
		cout << "-------------------------------the flag is:" << flag << endl;
		if (number % i == 0) {
			flag = 0;
		}
		else {
			flag = 1;
		}
		return flag;
	}
}

void printFlag(int flag) {
	if (flag == 0) {
		cout << "Not primaray" << endl;
	}
	else {
		cout << "Primary" << endl;
	}
}
//------------------------------
int main() {
	int flag;
	flag = checkPrime(readNumber("Please enter the number"));
	printFlag(flag);
}