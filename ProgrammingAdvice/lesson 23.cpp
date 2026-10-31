#include<iostream>
using namespace std;

int main() {
	bool a = 1, b = 0;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << (!a) << endl;
	cout << (!b) << endl;
	cout << !(a && b) << endl;
	cout << !(a || b) << endl;

	//--------------------------24----------------------------
	int a, b;
	cout << "Enter the first number" << endl;
	cin >> a;
	cout << "Enter the secound number" << endl;
	cin >> b;

	cout << a << "==" << b << "? " << (a == b) << endl;
	cout << a << "!=" << b << "? " << (a != b) << endl;
	cout << a << ">" << b << "? " << (a > b) << endl;
	cout << a << "<" << b << "? " << (a < b) << endl;
	cout << a << ">=" << b << "? " << (a >= b) << endl;
	cout << a << "<=" << b << "? " << (a <= b) << endl;

	//int A = 10, B = 20;
	//cout << (A == B) << endl;
	//cout << (A != B) << endl;
	//cout << (A > B) << endl;
	//cout << (A < B) << endl;
	//cout << (A >= B) << endl;
	//cout << (A <= B) << endl;

	//--------------------------23----------------------------
	//int A = 10, B = 20;
	//A += B;
	//cout << "A=" << A << endl;

	//A -= B;
	//cout << "A=" << A << endl;

	//A *= B;
	//cout << "A=" << A << endl;

	//A /= B;
	//cout << "A=" << A << endl;

	//A %= B;
	//cout << "A=" << A << endl;


}