#include<iostream>
using namespace std;

struct stEmployee {
	string empName;
	double empSalary;
};

int main() {

	stEmployee  emp, * stPtr;

	emp.empName = "AbuElqasim Mohamed Ibrahim";
	emp.empSalary = 4000000;

	cout << emp.empName << endl;
	cout << emp.empSalary << endl;

	cout << "=========================" << endl;
	
	stPtr = &emp;
	cout << stPtr->empName << endl;
	cout << stPtr->empSalary << endl;


}