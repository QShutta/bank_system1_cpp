#include<iostream>
using namespace std;
//-----------------------------------------------49-----------------------------
void readPIN(int &pin){
	cout << "Please enter the PIN" << endl;
	cin >> pin;
}

void validatePIN(int pin){
	if(pin==123){
		cout << "Your balance is 7500" << endl;
	}
	else {
		cout << "Wrong PIN code" << endl;
	}
}

int main() {
	int pin;
	readPIN(pin);
	validatePIN(pin);
}
//--------------------------------------------24--------------------------------
//void readAge(int &age){
//	cout << "Please enter age" << endl;
//	cin >> age;
//}
//void validateAge(int age) {
//	if(age>=18&&age<=45){
//		cout << "Valid Age" << endl;
//	}
//	else {
//		cout << "Invalid age" << endl;
//	}
//}
//int main() {
//	int age;
//	readAge(age);
//	validateAge(age);
//}
//--------------------------------------------11---------------------------------
//void readGrades(float grades[3]) {
//	cout << "Please enter the first grade:" << endl;
//	cin >> grades[0];
//
//	cout << "Please enter the secound grade:" << endl;
//	cin >> grades[1];
//
//	cout << "Please enter the third grade:" << endl;
//	cin >> grades[2];
//}
//
//float getAVG(float grades[3]) {
//	float avg = (grades[0] + grades[1] + grades[2]) / 3;
//	return avg;
//}
//
//void passOrFail(float avg){
//if(avg>=50){
//	cout << "Pass" << endl;
//}
//else {
//	cout << "Fail" << endl;
//}
//}
//
//int main(){
//	float grades[3],avg;
//	readGrades(grades);
//	avg=getAVG(grades);
//	passOrFail(avg);
//}


//
//int main() {
//	//--------------------------------------------4----------------------------------
//	//int age;
//	//string driverLicen;
//	//cout << "Please enter you age:" << endl;
//	//cin >> age;
//	//cout << "Please enter the driver licen:" << endl;
//	//cin >> driverLicen;
//	//if (age > 21) {
//	//	cout << "Hired" << endl;
//	//}
//	//else {
//	//	cout<< "Rejected" << endl;
//	//}
//	//---------------------------------------8----------------------------------------
//	//int mark;
//	//cout << "please enter mark:" << endl;
//	//cin >> mark;
//	//if (mark >= 50) {
//	//	cout << "Pass" << endl;
//	//}
//	//else {
//	//	cout << "Fail" << endl;
//	//}
//	//---------------------------------------11-----------------------
//
//}