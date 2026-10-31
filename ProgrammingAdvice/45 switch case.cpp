#include<iostream>
using namespace std;
//-----------------------------------------44--------------------------------
void readMonth(int& month) {
	cout << "Please enter month?" << endl;
	cin >> month;
}
void printMonth(int month) {
	switch (month) {
	case 1:cout << "January" << endl;break;
	case 2:cout << "February" << endl;break;
	case 3:cout << "March" << endl;break;
	case 4:cout << "April" << endl;break;
	case 5:cout << "May" << endl;break;
	case 6:cout << "June" << endl;break;
	case 7:cout << "July" << endl;break;
	case 8:cout << "August" << endl;break;
	case 9:cout << "Septamper" << endl;break;
	case 10:cout << "Octoper" << endl;break;
	case 11:cout << "November" << endl;break;
	case 12:cout << "December" << endl;break;
	default:cout << "Please enter a valid number" << endl;
	}
}

int main(){
	int month;
	readMonth(month);
	printMonth(month);
}
//------------------------------------------36---------------------------------
//void readValues(float &num1,float &num2,char &ope) {
//	cout << "Please enter the first value" << endl;
//	cin >> num1;
//	cout << "Please enter the secound value" << endl;
//	cin >> num2;
//	cout << "Please enter the operation" << endl;
//	cin >> ope;
//}
//
//float calculate(float num1,float num2,char op){
//	switch (op) {
//	case '+':return num1 + num2;break;
//	case '-':return num1 - num2;break;
//	case '*':return num1 * num2;break;
//	case '/':return num1 / num2;break;
//	defult:return 0.0;
//	}
//}
//
//
//
//
//int main() {
//	float num1, num2,result;
//	char ope;
//	readValues(num1,num2,ope);
//	result=calculate(num1,num2,ope);
//	cout << "The result is:" << result << endl;
//}
//
//
//











//enum enColor {
//	Red=1,Green=2,Blue=3,Yellow=4
//};
//
//void readColor(enColor &myColor){
//	cout << "*****************************************" << endl;
//	cout << "Please Choose the number of you'r color?" << endl;
//	cout << "(1)Red" << endl;
//	cout << "(2)Green" << endl;
//	cout << "(3)Blue" << endl;
//	cout << "(4)Yellow" << endl;
//	cout << "*****************************************" << endl;
//	cout << "You'r choise is:" << endl;
//	int c;
//	cin >> c;
//	myColor = (enColor)c;
//}
//void implementColor(enColor myColor) {
//	switch(myColor) {
//	case enColor::Red:system("color 4F");break;
//	case enColor::Green:system("color 2F");break;
//	case enColor::Blue:system("color 1F");break;
//	case enColor::Yellow:system("color 6F");break;
//	defult:system("color 0F");
//	}
//}
//int main() {
//	enColor myColor;
//	readColor(myColor);
//	implementColor(myColor);
//	
//}