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

void fillArrayWithOrderedEelements(int arr[100], int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		arr[i] = i + 1;
	}
}

void printArray(int arr[100],int arrayLength,string msg) {
	cout << msg << endl;
	
	for (int i = 0;i < arrayLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int getRandomNumberInRange(int from,int to) {
	int randomNum = rand()%(to-from+1)+from;
	return randomNum;
}


void swapNumbers(int& firstNumber, int& secoundNumber) {
	int temp = firstNumber;
	firstNumber = secoundNumber;
	secoundNumber = temp;
}


void shuffleArray(int arr[100],int arrayLength) {
	for (int i = 0;i < arrayLength;i++) {
		int index1 = getRandomNumberInRange(0, arrayLength - 1);
		int index2 = getRandomNumberInRange(0, arrayLength - 1);
		//السؤال المحيرني هي انو كيف التعديل حصل علي المصفوفة حد زاتها يعني هنا انا مررتة للدالة 
		//swapNumber 
		//رقمين وهي قامت بي  بدلت الرقمين علاقة المصفوفة بالكلامة دة شنو ؟
		//لمن حللتها مع دماغي قلتة انو هي شكلها بكون 
		//like arr[index1]=arr[index2]هل هي فعلا عاملها كدة ؟
		swapNumbers(arr[index1],arr[index2]);
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100],number=0;
	number = readPostiveNumber("Please enter the limit of the array");
	fillArrayWithOrderedEelements(arr,number);
	printArray(arr,number,"Array Elements before of shuffle");
	shuffleArray(arr,number);
	printArray(arr, number, "Array Elements After of shuffle");


}