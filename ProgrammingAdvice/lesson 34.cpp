#include<iostream>
using namespace std;
//void myFunction() {
//	cout << "This is the first procedural function" << endl;
//}
//
//string mySecoundFunction() {
//	return "This is my first function in c++ after know the diff between procedural and normal function";
//}
//double multFunction() {
//	double x = 10.9293;
//		double y = 20.102;
//	return x * y;
//}
//int main() {
//	double result = ceil(multFunction());
//	cout << result << endl;
//}

void mySumPrcedural() {
	int num1,num2;
	cout << "Please enter number1" << endl;
	cin >> num1;
	cout << "Please enter number2" << endl;
	cin >> num2;
	cout << "*******************************" << endl;
	int result = num1 + num2;
	cout << result << endl;

}

int mySumFunction() {
	int num1, num2;
	cout << "Please enter number1" << endl;
	cin >> num1;
	cout << "Please enter number2" << endl;
	cin >> num2;
	cout << "*******************************" << endl;
	int result = num1 + num2;
	return result;

}
int main() {
	//mySumPrcedural();
	cout << mySumFunction() +10<< endl;
}