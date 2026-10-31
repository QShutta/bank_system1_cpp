#include<iostream>
#include<string>
using namespace std;

int main() {
	int number;
	string name;
	string countery;

	cout << "Please enter number" << endl;
	cin >> number;
	cout << "Please enter name:" << endl;
	cin.ignore(1,'\n');
	getline(cin,name);
	cout << "Please enter country:" << endl;
	cin >> countery;

}