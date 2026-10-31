#include<iostream>
using namespace std;



int main() {
	int a = 10;
	int& x = a;

	cout << "The value of a is:" << a << endl;
	cout << "The value of x is:" << x << endl;

	cout << "The address of a is:" << &a << endl;
	cout << "The address of x is:" << &x << endl;

	int* p = &a;
	cout << "the value of p is:" << p << endl;
	cout << "the value that the   p  refere to is is:" << *p << endl;

	int b = 20;
	p = &b;
	cout << "the value of p is:" << p << endl;
	cout << "the value that the   p  refere to is is:" << *p << endl;


}