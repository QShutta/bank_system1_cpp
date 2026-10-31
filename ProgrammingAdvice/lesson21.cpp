#include<iostream>
using namespace std;

int main() {
	int A = 10, b;
	b=++A;
	cout << "The value of A is " << A << endl;//11
	cout << "The value of b is " << b << endl;//11
	//A=11
	b = A++;

	cout << "The value of b is " << b << endl;//11
	cout << "The value of A is " << A<<endl;//12
}