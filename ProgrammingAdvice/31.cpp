#include<iostream>
#include<string>
using namespace std;

int main() {
	//string mySt = "ABCDEFGHIGKLMNOBQRSTUWXYZ";
	//cout << "The length of the string is:" << mySt.length() <<endl;

	//cout << "The 3rd element in the string is:" << mySt[10] << endl;
	//string st1 = "AB", st2 = "CD";
	//cout << "the concatination is:"<<st1 + st2 << endl;
	//cout << "The sum of the strings are" << (stoi(st1) + stoi(st2)) << endl;

	//cout << "The sum of the strings are" << (stoi(st1) + stoi(st2)) << endl;
	string st1;
	string st2, st3;
	cout << "Please enter string1:" << endl;
	getline(cin,st1);
	cout << "Please enter string2:" << endl;
	cin >> st2;
	cout << "Please enter string3:" << endl;
	cin >> st3;
	cout << "*******************************" << endl;
	cout << "The length of string1:" << st1.length() << endl;
	cout << "The character at 0,2,4,7:" << st1[0] << "," << st1[2] << "," << st1[4] << "," << st1[7] << endl;
	cout << "The concatination of string2 and string3 are" << (st2 + st3) << endl;
	int result = stoi(st2) * stoi(st3);
	cout << "st2*st3=" << result << endl;

}