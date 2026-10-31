#include<iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	a += b;
	cout << "A:" << a << endl;
	a -= b;
	cout << "A:" << a << endl;
	a *= b;
	cout << "A:" << a << endl;

	a /= b;
	cout << "A:" << a << endl;

	a %= b;
	cout << "A:" << a << endl;



	return 0;
}