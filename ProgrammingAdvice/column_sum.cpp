#include<iostream>
#include<iomanip>
using namespace std;

int getRandomNumber(int from, int to) {
	int number = rand() % (to - from + 1) + from;
	return number;
}

void fillMatrix(int arr[3][3], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = getRandomNumber(1, 100);
		}
	}
}
//The instructor make the rows,cols as a parmeter to make the function more generic
//to avoid altering in many places.
void printArrayElements(int arr[3][3], int rows, int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			//the setw spacfiy the num of digits that the word reserve or occupy
			cout << setw(7) << arr[i][j] << " ";
		}
		cout << endl;
	}
}


//int getColumnSum(int arr[3][3], int row, int col) {
//	int sum = 0;
//	for (int j = 0;j < col;j++) {
//		sum += arr[j][row];
//	}
//	return sum;
//}
//
//
//
//void printColumnSum(int arr[3][3],int row,int col) {
//	for (int i = 0;i < row;i++) {
//		cout << "col " << i + 1 << " Sum = " << getColumnSum(arr, i, col) << endl;
//	}
//}


int getColSum(int arr[3][3],int row,int col) {
	int colSum = 0;
	for (int i = 0;i < row;i++) {
		colSum += arr[i][col];
	}
	return colSum;
}


//The instructor solution:
void getSumEachRow(int arr[3][3],int row,int col,int arrResult[3]) {
	for (int j = 0;j < col;j++) {
		//cout << "Col" << j + 1 << " Sum=" << getColSum(arr,row,j) << endl;
		arrResult[j] = getColSum(arr, row, j);
	}

}

void printArrayResult(int arr[3],short length) {
	cout << "The followin are the sum of each col in the matrix" << endl;
	for (int i = 0;i < length;i++) {
		cout << arr[i] << endl;
	}
}


int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrResult[3];
	fillMatrix(arr,3,3);
	printArrayElements(arr,3,3);
	getSumEachRow(arr,3,3,arrResult);
	printArrayResult(arrResult);
}