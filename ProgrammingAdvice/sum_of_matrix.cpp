#include<iostream>
#include<iomanip>
using namespace std;


int getRandomNumber(int from, int to) {
	int number = rand() % (to - from + 1) + from;
	return number;
}
void fillArrayWithRandomNumbers(int arr[3][3], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = getRandomNumber(1, 10);
		}
	}
}

void printArrayElements(int arr[3][3], int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			//the setw spacfiy the num of digits that the word reserve or occupy
			printf("%02d  ", arr[i][j]);
		}
		cout << endl;
	}
}

int getSumOfMatrix(int arr[3][3],int row,int col) {
	int sum = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			sum += arr[i][j];

		}
	}
	return sum;
}




int main() {
	srand((unsigned)time(NULL));

	int arr1[3][3];
	fillArrayWithRandomNumbers(arr1, 3, 3);
	printArrayElements(arr1, 3, 3);
	cout << "\n\n";
	
	cout << "Sum of Matrix1 is:" << getSumOfMatrix(arr1,3,3) << endl;
}