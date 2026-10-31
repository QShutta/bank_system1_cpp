#include<iostream>
using namespace std;


int main() {
	int a = 10;
	//This means x is refere to the same memoroy location that a refer to and have the same value but diff
	//name
	//By this way we create a refrence and the refrence is another name for an existing variable
	int& x = a;

	cout << x << endl;
	cout << a << endl;
	a = 20;
	cout << endl;

	cout << &x << endl;
	cout << &a << endl;

	cout << x << endl;
	cout << a << endl;
}
//
//void inc(int &x){
//	x++;
//	cout << &x << endl;
//}
//
//int main() {
//	int a = 10;
//
//	inc(a);
//	cout << a << endl;
//	cout << &a << endl;
//
//
//
//}