#include<iostream>
using namespace std;

int readNumbersInBetweenUsingDoWhile(int from,int to){
	int number;

	do {
		cout << "Please enter number between of "<<from<<" to "<<to<< endl;
		cin >> number;
	} while (number<from || number>to);

	return number;
}
int readNumberInBetweenUsingWhile(int from, int to) {
	int number;
		cout << "Please enter number between of " << from << " to " << to << endl;
		cin >> number;
		while (number<from||number>to) {
			cout << "Wrong number!!Please enter number between of " << from << " to " << to << endl;
			cin >> number;
		}
	
	return number;
}

int main() {
	int number= readNumberInBetweenUsingWhile(18, 45);
	cout << "The number that you have entered is " << number << endl;
}