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

//Here wasn't there is a reason for 2 for loops .one is engough
//The secound diff is that the instructor make the function get the middle row
//of anykind of array 3 or 4 but this si hard coded to 3 *3
void myPrintMiddleRow(int arr1[3][3], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			printf("%02d  ",arr1[1][j]);
		}
		cout << endl;
		break;
	}
}


void myPrintMiddleColumn(int arr1[3][3], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			printf("%02d  ", arr1[j][1]);
		}
		cout << endl;
		break;
	}
}

//The instructor solution:
void printMiddleRow(int arr[3][3],int row,int col) {
	//The var is from int so it will be discard from the decimal part.
	int middleRow = row / 2;

	for (int j = 0;j < col;j++) {
		printf("%02d  ",arr[middleRow][j]);
	}
}

void printMiddleColumn(int arr[3][3], int row, int col) {
	//The var is from int so it will be discard from the decimal part.
	int middleColumn = col / 2;

	for (int i = 0;i < col;i++) {
		printf("%02d  ", arr[i][middleColumn]);
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr1[3][3];
	fillArrayWithRandomNumbers(arr1, 3, 3);
	printArrayElements(arr1, 3, 3);
	cout << "\nMiddle Row\n";
	printMiddleRow(arr1,3,3);
	cout << "\nMiddle Column\n";
	printMiddleColumn(arr1, 3, 3);

}