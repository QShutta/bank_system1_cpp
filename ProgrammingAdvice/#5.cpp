#include<iostream>
using namespace std;


int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number < 0);
	return number;
};


void printReverse(int number){
	//كيف الاستاذ قدر يفكر في انو مفترض نقسم علي 10  ونجيب باقي قسمة ال 10 يعني فكر بالطريقة دي كيفن من اساسو يعني هل لانو اساسو في 
	//الرياضيات قوي ولا شنو ؟
	int reminder = 0;
	while(number>0){
		//This to get the last digit in the number and save it in the reminder var
		reminder = number % 10;
		//This to discard from the last digit in the number
		//1234/10=123.4 willl discard from the decimal part and it will become 123.
		number = number / 10;
		cout << reminder << endl;
	}
}


int main() {
	printReverse(readPositiveNumber("Please enter a postive number:"));
}