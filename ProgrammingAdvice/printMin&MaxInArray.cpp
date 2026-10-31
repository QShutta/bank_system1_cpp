#include<iostream>
#include<iomanip>
using namespace std;
int getMaxNumberInArray(int arr[3][3],int row,int col) {
	int max = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if(arr[i][j]>max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

int getMinNumberInArray(int arr[3][3], int row, int col) {
	int min=arr[0][0];
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}

void printMatrix(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cout <<setw(3)<< arr[i][j] << "  ";
		}
		cout << endl;
	}
}

//The instructor solution 

int getMaxNumberInArray2(int arr[3][3],int row,int col) {
	int max = arr[0][0];
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

int main() {
	int min = 0, max = 0;
	int arr[3][3] = {
		{77,5,12},
		{22,20,6},
		{14,3,9}
	};
	printMatrix(arr,3,3);
	min = getMinNumberInArray(arr,3,3);
	max = getMaxNumberInArray(arr,3,3);
	cout << "Minumem number is:" << min << endl;
	cout << "Maximumem number is:" << max << endl;


}