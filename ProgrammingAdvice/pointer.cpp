#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p = &a;


	cout << "The value of a is:" << a << endl;
	cout << "The address of a:" << &a << endl;
	cout << "The pointer value is:" << *p << endl;
	cout << "The pointer address is:" << &p << endl;

}