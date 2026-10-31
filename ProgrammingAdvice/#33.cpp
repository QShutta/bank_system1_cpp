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


enum enCapitalSmallSpacialNum {
	capitalLetter = 1, smallLetter = 2, spaecialChar = 3, randomNumber = 4
};

int getRandomNumber(int from, int to) {
	int myRandom = rand() % (to - from + 1) + from;
	return myRandom;
}

char getRandomChar(enCapitalSmallSpacialNum randomValue) {
	switch (randomValue) {
	case enCapitalSmallSpacialNum::capitalLetter:return char(getRandomNumber(65, 90));
	case enCapitalSmallSpacialNum::smallLetter:return char(getRandomNumber(97, 122));
	case enCapitalSmallSpacialNum::spaecialChar:return char(getRandomNumber(33, 47));
	case enCapitalSmallSpacialNum::randomNumber:return getRandomNumber(48, 57);
	}

}

string generateWord(enCapitalSmallSpacialNum charType, int lenght) {
	string word = "";
	for (int i = 1;i <= lenght;i++) {
		word += getRandomChar(charType);
	}
	return word;
}

string generateKey() {
	string key = "";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4);
	return key;
}


void fillArrayWithKeys(string arr[100],int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		arr[i] = generateKey();
	}

 }

void printArray(string arr[100],int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		cout << "Array [" << i << "]:" << arr[i] << endl;
	}
}


int main() {
	srand((unsigned)time(NULL));

	string arr[100];
	int numberOfKeys = 0;

	numberOfKeys = readPostiveNumber("Please enter the number of keys");
	fillArrayWithKeys(arr,numberOfKeys);
	printArray(arr,numberOfKeys);
}