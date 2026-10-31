#include<iostream>
#include<cmath>
using namespace std;

bool checkSparceMatrix(int arr[3][3], int row, int col) {
	int zerCounter = 0,otherNumberCounter=0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if (arr[i][j] == 0) {
				zerCounter++;
				//I use the continue beacuse if the condition is correct there is no reasone
				//to go through the rest of the code.
				//Did i have to use if else instead of this ?
				//I think using the if else is better and the continue will be no benfit of it.
				continue;
			}

			if (arr[i][j]!=0) {
				otherNumberCounter++;
			}
		}
	}





	if (zerCounter > otherNumberCounter) {
		return true;
	}
	return false;

}


int countNumberInMatrix(int arr[3][3],int number,int row,int col) {
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

//The instructor solution:
bool isSparceMatrix(int arr[3][3],int row,int col) {
	int matrixSize = row * col;
	//We get the size of matrix/2 then compare it witht the number count in matrix 

	return (countNumberInMatrix(arr, 0, 3, 3) >= ceil((float)matrixSize / 2));

}

short readNumber() {
	short number;
	cout << "Enter the number to count in the matrix?";
	cin >> number;
	return number;
}

int main() {
	int number = 0, arr1[3][3] = {
		{1,1,12},
		{0,1,1},
		{0,0,0}
	};
	
	if(isSparceMatrix(arr1,3,3)){
		cout << "Yes: It is sparce" << endl;
	}
	else {
		cout << "No: It is not sparce" << endl;
	}

}