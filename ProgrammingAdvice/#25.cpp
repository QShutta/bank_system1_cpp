#include<iostream>
using namespace std;

enum enCharType {
	capitalLetter = 1, smallLetter = 2, specialChar = 3, digit = 4,
};

int generateRandomNumber(int from, int to) {
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

char getRandomChar(enCharType charType) {
	switch (charType) {
	case enCharType::capitalLetter:return char(generateRandomNumber(65, 90));
	case enCharType::smallLetter:return char(generateRandomNumber(97, 122));
	case enCharType::specialChar:return char(generateRandomNumber(33, 47));
	case enCharType::digit:return generateRandomNumber(48, 57);
	}
}

void fillArrayWithRandomNumber(int arr[100], int& arrLength) {
	cout << "Please enter the length of the array" << endl;
	cin >> arrLength;
	for (int i = 0;i < arrLength;i++) {
		arr[i] = generateRandomNumber(1, 100);
	}
}

void printArrayWithRandomNumbers(int arr[100], int arrayLength) {
	cout << "Array Elements: ";
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
}

int getMinNumber(int arr[100], int arrayLength) {
	int min=arr[0];
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrayLength;
	fillArrayWithRandomNumber(arr, arrayLength);
	printArrayWithRandomNumbers(arr, arrayLength);
	cout << endl << "min Number is: " << getMinNumber(arr, arrayLength) << endl;
}