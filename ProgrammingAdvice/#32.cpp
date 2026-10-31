#include<iostream>
using namespace std;

int readPostiveNumber(string msg) {
	int number = 0;
	do {
		cout << msg << endl;
		cin >> number;
	} while (number < 0);
	return number;
}


int getRandomNumber(int from,int to){
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

void fillArrayWithRandomNumber(int arr[100],int arrayLength) {
	for (int i = 0;i < arrayLength; i++) {
		arr[i] = getRandomNumber(1,100);
	}
}

void copyInReverse(int arr1[100],int reversedArray[100],int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		reversedArray[i] = arr1[arrayLength - 1 - i];
	}
}

void printArrayWithRandomNumbers(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	srand((unsigned)time(NULL));

	int arr1[100], reversedArray[100],arrayLength;
	arrayLength = readPostiveNumber("Please eneter the number");
	fillArrayWithRandomNumber(arr1,arrayLength);
	copyInReverse(arr1,reversedArray,arrayLength);
	printArrayWithRandomNumbers(arr1,arrayLength,"The Array1 is:");
	printArrayWithRandomNumbers(reversedArray, arrayLength, "The reversed array is:");


	
}