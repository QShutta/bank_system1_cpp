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

void printArrayWithRandomNumbers(int arr[100], int arrayLength,string msg) {
	cout << msg << endl;
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void copyArrayIntoAnotherArray(int source[100],int destination[100], int arrLength) {
	for (int i = 0;i < arrLength;i++) {
		destination[i] = source[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr1[100],arr2 [100], arrayLength;
	fillArrayWithRandomNumber(arr1, arrayLength);
	printArrayWithRandomNumbers(arr1, arrayLength,"Array 1 elements are:");
	copyArrayIntoAnotherArray(arr1,arr2,arrayLength);
	printArrayWithRandomNumbers(arr2,arrayLength,"Array2 elements are:");

}