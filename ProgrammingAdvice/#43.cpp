#include<iostream>
using namespace std;


int getRandomNumber(int from, int to) {
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

void fillArrayWithRandomNumber(int arr[100], int arrayLength) {
	for (int i = 0;i < arrayLength; i++) {
		arr[i] = getRandomNumber(1, 100);
	}
}

int readNumber(string msg) {
	int number = 0;
	cout << msg << endl;
	cin >> number;
	return number;
}

void printArray(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;

	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}



int countEvenNumbers(int arr[100], int arrayLength) {
	int counter = 0;
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] % 2 == 0) {
			counter++;
		}
	}
	return counter;
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrayLength = readNumber("Please enter the array length:");;
	fillArrayWithRandomNumber(arr, arrayLength);
	printArray(arr, arrayLength, "Output:");
	cout << "Odd Numbers counts is:" << countEvenNumbers(arr, arrayLength) << endl;



}