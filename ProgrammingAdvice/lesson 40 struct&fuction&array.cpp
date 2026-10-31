#include<iostream>
using namespace std;

//
//void readArrayData(int &x[5]) {
//	cout << "Please enter number1" << endl;
//	cin >> x[0];
//	cout << "Please enter number2" << endl;
//	cin >> x[1];
//	cout << "Please enter number3" << endl;
//	cin >> x[2];
//	cout << "Please enter number4" << endl;
//	cin >> x[3];
//	cout << "Please enter number5" << endl;
//	cin >> x[4];
//}
//
//
//void printArrayValues(int x[5]) {
//	cout << "The first element in the array is:" << x[0] << endl;
//	cout << "The secound element in the array is:" << x[1] << endl;
//	cout << "The third element in the array is:" << x[2] << endl;
//	cout << "The fourth element in the array is:" << x[3] << endl;
//	cout << "The fifth element in the array is:" << x[4] << endl;
//
//}
//
//int main() {
//	int x[5];
//	readArrayData(x);
//	printArrayValues(x);
//}
//---------------------------------------Home Work---------------------------
void readValues(float x[3]) {
	cout << "Please enter the first  value" << endl;
	cin >> x[0];
	cout << "Please enter the secound  value" << endl;
	cin >> x[1];
	cout << "Please enter the third  value" << endl;
	cin >> x[2];
}

float getAVG(float x[3]) {
	float avg = (x[0] + x[1] + x[2]) / 3;
	return avg;
}

void printValues(float x[3]) {
	cout << "****************" << endl;
	cout << "The avarage of grades is:" << getAVG(x) << endl;
}







































































//----------------------------------------------------38----------------------------------------



int main() {
	float x[3];
	readValues(x);
	printValues(x);

}