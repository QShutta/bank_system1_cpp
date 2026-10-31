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


int getRandomNumber(int from, int to) {
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

void fillArrayWithRandomNumber(int arr[100], int arrayLength) {
	for (int i = 0;i < arrayLength; i++) {
		arr[i] = getRandomNumber(1, 100);
	}
}

void printArray(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;

	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int searchOnElementOnArray(int arr[100], int arrayLength, int numberToSearchFor) {
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] == numberToSearchFor) {
			cout << "The number you are looking for is:" << arr[i] << endl;
			cout << "The number found at position:" << i << endl;
			cout << "the number found its order:" << i + 1 << endl;
			return 1;
		}
	}
	cout << "The number you are looking for is not found :-(" << endl;
	return  0;
}

//The instructor solution:-------------------------------------
int searchForNumberInArray(int arr[100], int arrayLength, int elementToSearchFor) {
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] == elementToSearchFor) {
			return i;
		}
	}
	return -1;
}

bool isNumberInArray(int arr[100],int arrayLength,int elmentToSearchFor) {
	return searchForNumberInArray(arr,arrayLength, elmentToSearchFor) != -1;
}


int main() {
	int arr[100], arrayLength, searchNum;
	arrayLength = readPostiveNumber("Please enter the length of the array:");
	fillArrayWithRandomNumber(arr, arrayLength);
	printArray(arr, arrayLength, "The elements of the array are:");
	searchNum = readPostiveNumber("Please enter number to search for:");
	bool searchStatus = searchForNumberInArray(arr, arrayLength, searchNum);
	if (!isNumberInArray(arr,arrayLength,searchNum)){
		cout << "The number you are looking for is" << searchNum << endl;
		cout << "The number is not found :-(" << endl;
	}
	else {
		cout << "The number you are looking for is" << searchNum << endl;
		cout << "The number is  found :-)" << endl;
	}
}