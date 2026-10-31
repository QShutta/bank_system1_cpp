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

int readNumber(string msg){
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

//int copyArray1IntoArray2(int arr1[100],int array2[100], int array1Length) {
//	int counter = 0;
//	for (int i = 0;i < array1Length;i++) {
//		addArrayElement(arr1[i],array2,counter);
//	}
//	return counter;
//}

//the instructor solution----------------------------------------------

void addArrayElement(int number, int arr[100], int& arrayLength) {
	arrayLength++;
	arr[arrayLength - 1] = number;
}

//why did we pass it by refrence ?because we will use the arrayDestinationLength outside of the function
//in the printfunction.
void copyArray1IntoArray2(int arrSource[100],int arrDestination[100],int arrSourceLength,int &arrayDestinationLength) {
	for (int i = 0;i < arrSourceLength;i++) {
		addArrayElement(arrSource[i], arrDestination, arrayDestinationLength);
	}
}
//-----------------------------------the instructor main function

int main() {
	srand((unsigned)time(NULL));
	int arr1[100],arr2[100],  array1Length=0,array2Length=0;
	array1Length = readNumber("Please enter the length  of the first array:");
	fillArrayWithRandomNumber(arr1,array1Length);
	printArray(arr1,array1Length,"Array 1 elements:");
	copyArray1IntoArray2(arr1,arr2,array1Length,array2Length);

	printArray(arr2, array2Length, "Array 2 elements:");
}
//------------------------------------my main function:
//int main() {
//	srand((unsigned)time(NULL));
//	int arr1[100],arr2[100],  arrayLength;
//	arrayLength = readNumber("Please enter the length  of the first array:");
//	fillArrayWithRandomNumber(arr1,arrayLength);
//	printArray(arr1,arrayLength,"Array 1 elements:");
//	int arr2Length=copyArray1IntoArray2(arr1,arr2,arrayLength);
//
//	printArray(arr2, arr2Length, "Array 1 elements:");
//}