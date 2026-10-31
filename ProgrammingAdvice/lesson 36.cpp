#include<iostream>
using namespace std;
 void swapFunction(int &num1,int &num2){
	 int temp;
	 temp = num1;
	 num1 = num2;
	 num2 = temp;
 }

int main() {
	int num1, num2;
	cout << "Please enter the first value:" << endl;
	cin >> num1;
	cout << "Please enter the secound value:" << endl;
	cin >> num2;
	 
	cout << "The tow numbers num1 &num2 before swap:" << num1 << "," << num2 << endl;
	swapFunction(num1,num2);

	cout << "The tow numbers num1 &num2 after swap:" << num1 << "," << num2 << endl;

}