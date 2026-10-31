#include<iostream>
using namespace std;

int generateRandomNumber(int from, int to) {
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

int readPostiveNumber(string msg){
	int number = 0;
	do {
		cout << msg << endl;
		cin >> number;
	} while (number<0);
	return number;
}

void fillArrayWithRandomNumber(int arr[100], int arrLength) {
	for (int i = 0;i < arrLength;i++) {
		arr[i] = generateRandomNumber(1, 100);
	}
}

void printArrayWithRandomNumbers(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sumOfTowArrays(int sum[100], int arr1[100], int arr2[100], int arrLength) {
	for (int i = 0;i < arrLength;i++) {
		sum[i] = arr1[i] + arr2[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100],sum[100];
	int arrayLength = readPostiveNumber("Please enter the length of the array");
	fillArrayWithRandomNumber(arr1,arrayLength);
	fillArrayWithRandomNumber(arr2, arrayLength);
	sumOfTowArrays(sum,arr1,arr2,arrayLength);
	printArrayWithRandomNumbers(arr1,arrayLength,"The content of array1 is :");
	printArrayWithRandomNumbers(arr2, arrayLength, "The content of array2 is :");
	printArrayWithRandomNumbers(sum, arrayLength, "The sum of array1+array2 is :");
}