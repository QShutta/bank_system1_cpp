#include<iostream>
using namespace std;



void printOnDimensionalArray(int arr[3], int row) {
	for (int i = 0;i < row;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void printTowDimenstionalArray(int arr[3][3], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void reverseRow(int tempRow[3], int tempReversedRow[3], int counter) {
	int innerCount = 0;
	for (int i = counter - 1;i >= 0;i--) {
		tempReversedRow[innerCount] = tempRow[i];
		innerCount++;
	}
}

void checkEquality(int matrix1[3], int matrix2[3],int &falseCounter) {
	for (int i = 0;i < 3;i++) {
	if(matrix1[i]!=matrix2[i]) {
		falseCounter++;
	}
	}

}

bool isPlaindorism(int arr[3][3], int row, int col) {
	int tempRow[3], tempReversedRow[3],falseCounter=0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			tempRow[j] = arr[i][j];
		}
		reverseRow(tempRow,tempReversedRow,3);

		checkEquality(tempRow, tempReversedRow,falseCounter);
		if (falseCounter!=0) {
			return false;
		}
	
	}
	return true;
}

//------------------------------------------------------------------------


//int main() {
//
//	
//	int arr[3][3] = { {1,2,1},{5,5,5} ,{1,2,1} };
//	if(isPlaindorism(arr,3,3)){
//		cout << "Yes:Matrix is plaindorm" << endl;
//	}
//	else {
//		cout << "No:Matrix isn't plaindorm" << endl;
//	}
//}

//-----------------------------------------
//Instructor soluton:


bool instIsPlaindorm(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
		if(arr[i][j]!=arr[i][col-1-j]) {
			return false;
		}
		}
}
	return true;
}


int main() {
	int arr[3][3] = { {1,2,2},{5,5,5},{7,3,7} };
	if(instIsPlaindorm(arr,3,3)){
		cout << "Yes,it's a plaindorm matrix" << endl;
	}
	else {
		cout << "No,it's not a plaindorm matrix" << endl;
	}
}