#include<iostream>
using namespace std;
//We say an array is identical if the elements in the digonal=1 and the other elements=0.
int getSumOfMatrix(int arr[3][3], int row, int col) {
	int sum = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			sum += arr[i][j];

		}
	}
	return sum;
}



//My solution:
//The defination of scaler matrix is taht all the elements in teh diagonal are equal to each other
//and the rest of the elements =0

bool myIsScaller(int arr[3][3],int row,int col) {
	if ((arr[0][0] != arr[row / 2][col / 2])||
		((arr[0][0] != arr[row -1][col -1]) )||
		(arr[row / 2][col / 2])!= arr[row -1][col -1]) {
		return false;
	}
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if((i != j)&&(arr[i][j]!=0)) {
				return false;
			}
		}
	}
	return true;
}




//The instructor scaller function

bool isScaler(int arr[3][3],int row,int col) {
	int firstEelement = arr[0][0];

	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if((i=j)&&arr[i][j]!=firstEelement) {
				return false;
			}

			if ((i != j) && (arr[i][j] != 0)) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int arr[3][3] = {
		{2,0,0},
		{0,2,0},
		{0,0,2}
	};

	if (myIsScaller(arr, 3, 3)) {
		cout << "Yes:Matrix is Scaler" << endl;
	}
	else {

		cout << "No:Matrix is not Scaler" << endl;
	}
}