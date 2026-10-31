#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

int main() {
	//-------------------------------double to int-----------------------------
	//int num1;
	//double num2 = 10.19;
	//num1 = num2;//implicit conversion
	////cout << num1 << endl;
	//num1 = int(num2);//explicit conversion.
	////cout << num1 << endl;
	//num1 = (int)num2;//explicit conversion.
	//cout << num1 << endl;

	//-----------------------------------string to int,float,double--------------------
	//string myS = "123.20932093029320930293039";

	//int numInt = stoi(myS);

	//float numFloat = stof(myS);

	//double numDouble = stod(myS);

	//cout << "The int is :" << numInt << endl;

	//cout << fixed << setprecision(20);

	//cout << "The float is :" << numFloat << endl;

	//cout << "The double is :" << numDouble << endl;
	//------------------------------------convert int/double to string--------------------
	//int num1 = 1000;
	//double num2 = 14.23;
	//string st1, st2;
	//st1 = to_string(num1);
	//st2 = to_string(num2);
	//cout << "the first string is :" << st1 << endl;
	//cout << "the secound string is :" << st2 << endl;
	//-----------------------------------HomeWork------------------------
	//string st1 = "43.22";
	//double numDouble=stod(st1);
	//float numFloat=stof(st1);
	//int numInt=stoi(st1);

	//cout << "double:" << numDouble << " " << numFloat << " " << numInt << endl;

	//int n1 = 20;
	//string st1 = to_string(n1);
	//
	//double n2 = 33.5;
	//string st2 = to_string(n2);

	float n3 = 55.23;
	string str1 = to_string(n3);

	int n1;
	n1 = n3;
	//cout << n1 << endl;
	n1 = (int)n3;
	//cout << n1 << endl;
	n1 = int(n3);
	cout << n1 << endl;
	

}