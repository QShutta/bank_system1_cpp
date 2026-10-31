#include<iostream>
using namespace std;

int getNumOfRepeteInArray(int arr[3][3],int number,int row,int col) {
	int counter = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
		if(arr[i][j]==number) {
			counter++;
		}
		}
	}
	return counter;
}

short readNumber() {
	short number;
	cout << "Enter the number to count in the matrix?";
	cin >> number;
	return number;
}

int main() {
	int number=0, arr1[3][3] = {
		{9,1,12},
		{0,9,1},
		{0,9,9}
	};
	number = readNumber();

	cout << "Number " << number << " count in matrix is " << getNumOfRepeteInArray(arr1,number,3,3);


}