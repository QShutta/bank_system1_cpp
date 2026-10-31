#include<iostream>
using namespace std;
//--------------------------------------45-----------------------------------
void readMonth(int& month) {
	cout << "Please enter day:" << endl;
	cin >> month;
}

void printMonth(int month) {
	if (month == 1) {
		cout << "January" << endl;
	}
	else if (month == 2) {
		cout << "February" << endl;
	}
	else if (month == 3) {
		cout << "March" << endl;
	}
	else if (month == 4) {
		cout << "April" << endl;
	}
	else if (month == 5) {
		cout << "May" << endl;
	}
	else if (month == 6) {
		cout << "June" << endl;
	}
	else if (month == 7) {
		cout << "July" << endl;
	}
	else if (month == 8) {
		cout << "August" << endl;
	}
	else if (month == 9) {
		cout << "Septamber" << endl;
	}
	else if (month == 10) {
		cout << "October" << endl;
	}
	else if (month == 11) {
		cout << "November" << endl;
	}
	else if (month == 12) {
		cout << "December" << endl;
	}
	else {
		cout << "Wrong month please enter a correct month" << endl;
		readMonth(month);
		printMonth(month);
	}
}
int main() {
	int month;
	readMonth(month);
	printMonth(month);
}
//---------------------------------------44----------------------------------
//void readDay(int &day){
//	cout << "Please enter day:" << endl;
//	cin >> day;
//}
//void printDay(int day) {
//	if (day == 1) {
//		cout << "Sunday" << endl;
//	}
//	else if (day == 2) {
//		cout << "Monday" << endl;
//	}
//	else if (day == 3) {
//		cout << "Tusday" << endl;
//	}
//	else if (day == 4) {
//		cout << "Wednsday" << endl;
//	}
//	else if (day == 5) {
//		cout << "Thursday" << endl;
//	}
//	else if (day == 6) {
//		cout << "Friday" << endl;
//	}
//	else if (day == 7) {
//		cout << "Saturday" << endl;
//	}
//	else {
//		cout << "Wrong day please enter a correct day" << endl;
//	}
//}
//int main() {
//	int day;
//	readDay(day);
//	printDay(day);
//}
//----------------------------------------36-------------------------------------------------
//void readData(float &num1,float &num2,char &op) {
//	cout << "Please enter the first number" << endl;
//	cin >> num1;
//	cout << "Please enter the secound number" << endl;
//	cin >> num2;
//	cout << "Please enter the operation" << endl;
//	cin >> op;
//}
//
//float calculation(float num1, float num2, char op) {
//	if (op=='+') {
//		return num1 + num2;
//	}
//	else if (op == '-') {
//		return num1 - num2;
//	}
//	else if (op == '*') {
//		return num1 * num2;
//	}
//	else {
//		return num1 / num2;
//	}
//}
//
//
//int main() {
//	float num1, num2;
//	char op;
//	readData(num1,num2,op);
//	float result = calculation(num1, num2, op);
//	cout << "The result of calculation is:  " << result << endl;;
//}
//----------------------------------------------------------------------------------

//void readTotalSales(float &totalSales) {
//	cout << "Please enter totalSales" << endl;
//	cin >> totalSales;
//}
//+
//float getCommision(float totalSale){
//	if (totalSale > 1000000) {
//		return totalSale * 0.01;
//	}
//	else if (totalSale > 500000) {
//		return totalSale * 0.02;
//	}
//	else if (totalSale>100000) {
//		return totalSale * 0.03;
//	}else if(totalSale>=50000){
//		return totalSale * 0.05;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	float totalSales;
//	readTotalSales(totalSales);
//	cout << "The commision is:" << getCommision(totalSales) << endl;
//}


//void readGrade(int& grade) {
//	cout << "Please enter grade" << endl;
//	cin >> grade;
//}
//
//void validateGrade(int grade){
//if(grade>=90&&grade<=100){
//	cout << "A" << endl;
//}
//else if (grade >= 80) {
//	cout << "B" << endl;
//}
//else if (grade >= 70) {
//	cout << "C" << endl;
//}
//else if (grade >= 60) {
//	cout << "D" << endl;
//}
//
//else if (grade >= 50) {
//	cout << "E" << endl;
//}
//else {
//	cout << "F" << endl;
//}
//}
//
//int main() {
//	int grade;
//	readGrade(grade);
//	validateGrade(grade);
//}