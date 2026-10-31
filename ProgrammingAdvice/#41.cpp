#include<iostream>
using namespace std;

void fillArray(int arr[100], int& arrayLength) {
	arrayLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 100;
}

void printArray(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;

	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int reversArray(int arr[100],int reversedArray[100], int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		reversedArray[i] = arr[arrayLength - 1 - i];
		
	}
	return 0;
}

//bool checkPlandorism(int myArray[100],int reversedArray[100],int arrayLength) {
//	for (int i = 0;i < arrayLength;i++) {
//	if(myArray[i]!=reversedArray[i]) {
//		cout << "No array is not a plaindorm" << endl;
//		return 0;
//	}
//	}
//	cout << "Yes array is a plaindorm" << endl;
//	return 1;
//}

bool isPlaindorism(int arr[100], int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] != arr[arrayLength - i - 1]) {
			return false;
		}
	}
	return true;
}



int main() {
	int arr[100],arrayLength=0,reversedArray[100];
	fillArray(arr, arrayLength);
	printArray(arr,arrayLength,"Before of reverse:");
	//reversArray(arr,reversedArray,arrayLength);

	//printArray(reversedArray, arrayLength, "After of reverse:");
	if(isPlaindorism(arr,arrayLength)){
		cout << "Yes array is plaindorism" << endl;
	}
	else {

		cout << "No it is not   plaindorism" << endl;
	}

}