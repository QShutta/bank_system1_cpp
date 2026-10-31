#include<iostream>
using namespace std;

void readArray(int arr[100],int &length) {
	cout << "******************************" << endl;
		cout << "Please enter how many elements that you will enter:" << endl;
		cin >> length;
		cout << "******************************" << endl;
		for (int i = 0;i <= length - 1;i++) {
			cout << "Please enter the element number:" << i+1<< endl;
			cin >> arr[i];
		}
}

void printArrayElements(int arr[100],int length) {
	for (int i = 0;i <= length - 1;i++) {
		cout << "The element number " << i + 1 << " is:" << arr[i] << endl;
	}
}

int sumArrayElements(int arr[100],int length) {
	int sum=0;
	for (int i = 0;i <= length - 1;i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int length;
	int arr[100];
	readArray(arr,length);
	printArrayElements(arr,length);
	int sum = sumArrayElements(arr, length);
	float avg =(float) sum / length;
	cout << "**************************************************" << endl;
	cout << "The sum of the array is:" <<  sum<< endl;
	cout << "**************************************************" << endl;
	cout << "The avg of the array is:" << avg << endl;
	cout << "*************************************************" << endl;

}