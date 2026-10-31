#include<iostream>
#include<string>
using namespace std;

void printName(string name){
	cout << "You'r name is:" << name << endl;
}
//void readName(string &name) {
//
//	cout << "Please enter you'r name:" << endl;
//	cin >> name;
//}
string readName() {
	string name;
	cout << "Please enter you'r name:" << endl;
	getline(cin,name);
	return name;
}

void readNumber(int &number) {
	cout << "Please enter number" << endl;
	cin >> number;
}

bool checkEven(int number){
	if(number%2==0){
		return true;
	}
	return false;
}

//------------------------------3 checkEvenOrOdd-----------------------------------------
enum enEvenOdd { Even = 2,Odd = 1 };

void printNumberType(enEvenOdd numType){
	if (numType==enEvenOdd::Even) {
		cout << "The number is even";
	}
	else {
		cout << "The number is odd";
	}
}

enEvenOdd checkNumberType(int number){
if(number%2==0){
	return enEvenOdd::Even;
}
else {
	return enEvenOdd::Odd;
}
}

int readNumberType(){
	int number;
	cout << "Please enter number:" << endl;
	cin >> number;
	return number;
}

//------------------------------4 Driver licen------------------------------------------
//struct stInfo {
//	int age;
//	bool hasDriverLicen;
//};
//
//stInfo readInfo() {
//	stInfo myInfo;
//	cout << "Please enter you'r age:" << endl;
//	cin >> myInfo.age;
//	cout << "Please enter you'r DriverLicen:" << endl;
//	cin >> myInfo.hasDriverLicen;
//	return myInfo;
//}
//
//bool isAccepted(stInfo myInfo) {
//	return (myInfo.age>=18&&myInfo.hasDriverLicen);
//}
//
//void printResult(stInfo stInfo){
//if(isAccepted(stInfo)){
//	cout << "Hired" << endl;
//}else {
//	cout << "Not Hired" << endl;
//}
//}
//-----------------------------------------------#5--------------------------------------------
//IF there is a recomendation there is no need to check the condition
struct stInfoRec {
	int age;
	bool hasDriverLicen;
	bool hasRecomendation;
};

stInfoRec readInfoRec() {
	stInfoRec myInfo;
	cout << "Please enter you'r age:" << endl;
	cin >> myInfo.age;
	cout << "Please enter you'r DriverLicen:" << endl;
	cin >> myInfo.hasDriverLicen;
	cout << "Did you have a recomendation?:" << endl;
	cin >> myInfo.hasRecomendation;

	return myInfo;
}

bool isAcceptedRec(stInfoRec myInfo) {
	if (myInfo.hasRecomendation) {
		return true;
	}
	else {
		return (myInfo.age >= 18 && myInfo.hasDriverLicen);
	}
}

void printResult(stInfoRec stInfo) {
	if (isAcceptedRec(stInfo)) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
}
int main() {
	//stInfo myInfo;
	printResult(readInfoRec());
	

}