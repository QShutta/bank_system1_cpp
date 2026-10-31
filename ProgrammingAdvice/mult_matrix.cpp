#include<iostream>
#include<iomanip>
using namespace std;


int getRandomNumber(int from,int to) {
	int number = rand() % (to - from + 1) + from;
	return number;
}
void fillArrayWithRandomNumbers(int arr[2][2], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = getRandomNumber(1,10);
		}
	}
}

void printArrayElements(int arr[2][2], int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			//the setw spacfiy the num of digits that the word reserve or occupy
			printf("%02d  ",arr[i][j]);
		}
		cout << endl;
	}
}

void multMatrix(int arr1[2][2],int arr2[2][2],int arrResult[2][2],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arrResult[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

int main() {
	srand((unsigned)time(NULL));
	
	int arr1[2][2],arr2[2][2],arrResult[2][2];
	fillArrayWithRandomNumbers(arr1,2,2);
	printArrayElements(arr1,2,2);
	cout << "\n\n";
	fillArrayWithRandomNumbers(arr2, 2, 2);
	printArrayElements(arr2, 2, 2);
	cout << "\n\n";
	multMatrix(arr1, arr2, arrResult,2,2);
	printArrayElements(arrResult,2,2);
}