#include<iostream>
using namespace std;

//enum enYesNo {
//	no=0,yes=1
//};
//int readPostiveNumber(string msg) {
//	int number = 0;
//	do {
//		cout << msg << endl;
//		cin >> number;
//	} while (number < 0);
//	return number;
//}
//
//void printArrayElements(int arr[100], int arrayLength) {
//	cout << "Array Elements: ";
//	for (int i = 0;i < arrayLength;i++) {
//		cout << arr[i] << " ";
//	}
//}
//
//enYesNo readOption() {
//	enYesNo myOp;
//	int op = 0;
//	cout << "Do you want to add more numbers?[0]No,[1]yes?" << endl;
//	cin >> op;
//	myOp = (enYesNo)op;
//	return myOp;
//}
//
//
//int dynamicalyReadNumber(int arr[100]){
//	int counter = 0;	
//	enYesNo myOp=enYesNo::no;
//	do {
//		int number = readPostiveNumber("Please enter a number");
//		arr[counter] = number;
//		counter++;
//		myOp = readOption();
//	} while (myOp==enYesNo::yes);
//	return counter;
//}

//int main() {
//	int arr[100], arrayLength;
//	arrayLength=dynamicalyReadNumber(arr);
//	cout << "Array Length:" << arrayLength << endl;
//	printArrayElements(arr,arrayLength);
//}

//The instructor solution:-------------------------------------------------------------
int readNumber(string msg) {
	int number = 0;
	cout << msg<< endl;
	cin >> number;
	return number;
}
//دة دالة بسيطة بس شغاها انها تقوم بي اضافة عناصر للمصفوفة من ال position 
//الاحنا بنحددو . وبنسال لاسمتخدم يقوم بي ادخال  الرقم .
void addElementToArray(int arr[100],int &arrLength) {
	arrLength++;
	arr[arrLength - 1] = readNumber("Please enter the number");

}

void inputUserNumberInArray(int arr[100],int &arrayLength) {
	bool addMore = false;

	do {
		addElementToArray(arr,arrayLength);
		addMore = readNumber("Do You want to add more numbers?[0]:No,[1]yes?");

	} while (addMore==true);
}

void printArrayElements(int arr[100],int arrayLength) {
	cout << "Array elements:";
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[100], arrayLength=0;
	inputUserNumberInArray(arr,arrayLength);
	cout << "Array Length:" << arrayLength << endl;
	printArrayElements(arr,arrayLength);
	
}