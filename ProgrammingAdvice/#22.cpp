#include<iostream>
using namespace std;

int  readPostiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

void readArrayElements(int arr[100],int& arrayLength) {
	cout << "Enter the array length:" << endl;
	cin >> arrayLength;
	int number = 0;
	for (int i = 0;i < arrayLength;i++) {
		cout << "elments [" << i + 1 << "]:";
		cin>>number;
		arr[i] = number;
	}
}

void printArrayElements(int arr[100], int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		cout << "Original array: ";
		cout << arr[i]<<" " << endl;
	}
}
int numberOfRepete(int arr[100],int arrayLength,int numberToCheck) {
	int counter = 0;
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] == numberToCheck) {
			counter++;
		}
	}
	return counter;
}

int main() {
	int arr[100],numberToCheck=0,arrayLength=0;
	readArrayElements(arr, arrayLength);
	numberToCheck = readPostiveNumber("Please enter the number you want to check");


	cout << "-------------------------------------------------------" << endl;
	printArrayElements(arr, arrayLength);
	cout << numberToCheck << " is repeated " << numberOfRepete(arr, arrayLength, numberToCheck) << "  times" << endl;
	cout << "-------------------------------------------------------" << endl;
}