#include<iostream>
#include<string>
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



//void sumMatrixRows(int arr[3][3],int rows,int cols) {
//	int sum = 0;
//	for (int i = 0;i < rows;i++) {
//		for (int j = 0;j < cols;j++) {
//			sum += arr[i][j];
//		}
//		cout << "Row " << i+1 << " Sum =" << sum << endl;
//		sum = 0;
//	}
//
//}

int getRowSum(int arr[3][3], int row, int col){
	int sum = 0;
	for (int j = 0;j < col;j++) {
		sum += arr[row][j];
	}
	return sum;
}

void someMatrixRowsInArray(int arr[3][3],int row,int col,int arrResult[3]) {
	
	for (int i = 0;i < row;i++) {
		//cout << "Row " << i + 1 << " Sum " << "=" << getRowSum(arr, i, col) << endl;
		arrResult[i] = getRowSum(arr,i,col);
	}

}

void printRowSum(int arr[3]) {
	for (int i = 0;i < 3;i++) {
		cout << "Row " << i + 1 << " Sum " << "=" << arr[i] << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrResult[3];
	fillMatrix(arr, 3, 3);
	cout << "The following is a 3x3 random matrix" << endl;
	printArrayElements(arr, 3, 3);
	cout << endl << "The following are the sum of each row in matrix:" << endl;
	//sumMatrixRows(arr,3,3);
	//storeSomeInArray(arr,3,3,arrResult);
	//printArray(arrResult);
	


}