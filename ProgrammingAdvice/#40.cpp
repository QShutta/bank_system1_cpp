#include<iostream>
using namespace std;


void fillArray(int arr[100],int &arrayLength) {
	arrayLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

int findNumberPositionInArray(int arr[100], int arrayLength, int elementToSearchFor) {
	for (int i = 0;i < arrayLength;i++) {
		if (arr[i] == elementToSearchFor) {
			return i;
		}
	}
	return -1;
}

bool isNumberInArray(int arr[100], int arrayLength, int elmentToSearchFor) {
	return searchForNumberInArray(arr, arrayLength, elmentToSearchFor) != -1;
}


void addArrayElement(int number, int arr[100], int& arrayLength) {
	arrayLength++;
	arr[arrayLength - 1] = number;
}

void printArray(int arr[100], int arrayLength, string msg) {
	cout << msg << endl;

	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//
void copyDistinctElements(int arrSource[10],int arrayDestination[100],int &arrayDestinationLength) {
	for (int i = 0;i < 10;i++) {
     if(!isNumberInArray(arrayDestination,arrayDestinationLength,arrSource[i])) {
		 addArrayElement(arrSource[i],arrayDestination,arrayDestinationLength);
		
	 }
	}
}


int main() {

	int arrSource[100],arraySourceLength=0;
	fillArray(arrSource,arraySourceLength);
	int arrayDestination[100], arrayDestinationLength = 0;


	printArray(arrSource,10,"Array 1 elements:");
	copyDistinctElements(arrSource,arrayDestination,arrayDestinationLength);
	printArray(arrayDestination, arrayDestinationLength, "Array 2 distinct elements:");

}