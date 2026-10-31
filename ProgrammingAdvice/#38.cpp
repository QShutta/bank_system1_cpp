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

void addArrayElement(int number, int arr[100], int& arrayLength) {
	arrayLength++;
	arr[arrayLength - 1] = number;
}

void copyOddNumbers(int arrSource[100],int arrDestination[100],int arrSourceLength,int&arrayDestinationLength) {
	for (int i = 0;i < arrSourceLength;i++) {
	if(arrSource[i]%2!=0) {
		addArrayElement(arrSource[i], arrDestination, arrayDestinationLength);
	}
	}
}

int main() {
	int arrSource[100], arrDestination[100], arrSourceLength, arrDestinationLength=0;
	arrSourceLength = readNumber("Please enter the length of the first array:");
	fillArrayWithRandomNumber(arrSource,arrSourceLength);
	printArray(arrSource,arrSourceLength,"Array 1 elements:");

	copyOddNumbers(arrSource,arrDestination,arrSourceLength,arrDestinationLength);

	printArray(arrDestination, arrDestinationLength, "Array 2 elements:");

}