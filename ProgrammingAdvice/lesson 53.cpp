#include<iostream>
using namespace std;
void calc(int &number,int sum) {
	for (int i = 1;i <= 5;i++) {
		cout << "Please enter number" << endl;
		cin >> number;
		if(number>50){
			cout << "This number is greater than 50 and it will not be calculated" << endl;
			continue;
		}
		sum += number;
	}
	cout << "The sum is:" << sum << endl;
}
int main() {
	int number, sum = 0;
	calc(number,sum);
	
}