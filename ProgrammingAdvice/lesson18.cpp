#include<iostream>
using namespace std;

int main() {
	short age;
	cout << "Enter you'r age" << endl;
	cin >> age;
	cout << "After 5 years you will be " << 5 + age << " years old" << endl;
	//---------------------------------------------------------
	short x , y , z;
	cout << "Enter the first Number" << endl;
	cin >> x;
	cout << "Enter the secound Number" << endl;
	cin >> y;
	cout << "Enter the third Number" << endl;
	cin >> z;
	cout << endl;
	cout << x << "+" << endl;
	cout << y << "+" << endl;
	cout << z << endl;
	cout << "------------------------------------------" << endl;
	cout << "Total=" << x + y + z << endl;
	//-------------------------------------------------------------
	//string name;
	//unsigned short int age;
	//string city;
	//string country;
	//float monthlySalary;
	//unsigned char gender;
	//bool isMarried;


	//cout << "Please enter you'r name"<< endl;
	//cin >> name;
	//cout << "Please enter you'r age" << endl;
	//cin >> age;
	//cout << "Enter Monthly country" << endl;
	//cin >> country;
	//cout << "Enter Monthly monthlySalary" << endl;
	//cin >> monthlySalary;
	//cout << "Enter  Gender" << endl;
	//cin >> gender;
	//cout << "Enter Material Status" << endl;
	//cin >> isMarried;
	//cout << "*****************************************" << endl;
	//cout << "Name:" << name << endl;
	//cout << "Age :" << age << " Years" << endl;
	//cout << "City:" << city << "." << endl;
	//cout << "Country:" << country << "." << endl;
	//cout << "Monthly Salary:" << monthlySalary << "." << endl;
	//cout << "Yearly Salary:" << monthlySalary * 12 << endl;
	//cout << "Gender:" << gender << "." << endl;
	//cout << "Married:" << isMarried << "." << endl;

	//cout << "*****************************************" << endl;
	return 0;
}


/*
1-Age is a valid variable name because he meet all of the condition of naming in  the variable.
2-MY-Age :Is not a valid variable name because it has spechil character - in the middle
3-My_Age :Is a valid variable name because the special charcter  underscore _ is allowed
4-_Age this is also allowed because the the underscore is allowed too.
5-2x  is not allowed why?Because it's not allowed to use the number in the beginging of the variable
6-X2 is allowed because the number here come after character
7-My Name is not a vaild var name because it contain space in the name of the variable and the space is not allowed
8-MyName is allowe dbecause it meet all of the nameing condition
9-#Name
10-$Name is also a valid name because it contain special charcter too.
11-N@M is also not valid name because it contain specil charcter in the middle of variable.
12-int is not a valid variable name because  it's areserved word
3-float Is the same as 12
*/