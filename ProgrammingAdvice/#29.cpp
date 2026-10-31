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

void printArrayWithRandomNumbers(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


enum enPrimeNotPrime {
	prime = 1, notPrime2
};


enPrimeNotPrime checkPrime(int number) {
	int halfOfNumber = number / 2;
	for (int i = 2;i <= halfOfNumber;i++) {
		if (number % i == 0) {
			return enPrimeNotPrime::notPrime2;
		}
	}
	return enPrimeNotPrime::prime;
}


void copyPrimeNumbers(int sourceArray[100],int destinationArray[100], int arrLength,int &array2Length) {
	int counter = 0;
	for (int i = 0;i < arrLength;i++) {
		if(checkPrime(sourceArray[i])==enPrimeNotPrime::prime) {
			destinationArray[counter] = sourceArray[i];
			counter++;
		}
	
	}
	array2Length = counter;
}



int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], arrayLength,array2Length=0,destinaionLength=0;
	fillArrayWithRandomNumber(arr1, arrayLength);
	printArrayWithRandomNumbers(arr1, arrayLength, "Array 1 elements are:");
  copyPrimeNumbers(arr1,arr2,arrayLength,array2Length);
	printArrayWithRandomNumbers(arr2, array2Length, "Array 2 elements are:");
}