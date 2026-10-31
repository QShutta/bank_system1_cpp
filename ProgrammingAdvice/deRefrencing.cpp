#include<iostream>
using namespace std;

int main() {
	int a = 10;
	//Simply the derefrencing  is to access to the value that the pointer refere too.
	int* p;
	p = &a;

	cout <<"The value of a is:" << a << endl;
	cout << "The address of a is" << &a << endl;

	cout << "---------------------------------" << endl;
	cout << "the value of pointer is:" << p << endl;
	cout << "the value that the pointer refer to is" << *p << endl;

	*p = 20;

	cout << "The value of a is:" << a << endl;
	cout << "The value of a is:" <<*p<< endl;

	a = 30;
	cout << "The value of a is:" << *p << endl;
	cout << "The value of a is:" << a << endl;



	
}