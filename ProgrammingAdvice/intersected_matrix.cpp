#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;



bool isNumberInMatrix(int arr[3][3], int number, int row, int col) {

	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if(arr[i][j]==number) {
				return true;
			}
		}
	}
	return false;
}

short getNumberOfRepetationInArray(int arr[3][3],int number,int row,int col) {
	short counter = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if(arr[i][j]==number) {
				counter++;
			}
		}
	}
	return counter;
}

void getCommonElementsInMatrixes(int arr1[3][3],int arr2[3][3],vector<int> &vCommonNumbers, int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			int number = arr1[i][j];
			//What i think about as a solution is that i check if the element is repeting in both of the
			//the arrays.which means if the number exist int he first array and int he secound array then add
			//it to the commonArray.
		if(isNumberInMatrix(arr2,number,row,col)) {
			vCommonNumbers.push_back(arr1[i][j]);
		}
		}
	}
}


void printTowDimensionalMatrix(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void printVector(vector<int> vNumbers) {
	for (int& myN : vNumbers) {
		cout << myN << " ";
	}cout << endl;
}

//The instructor solution:


int main() {

	int arr1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }, arr2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

	vector<int> vCommonNumbers;

	getCommonElementsInMatrixes(arr1,arr2,vCommonNumbers,3,3);


	printTowDimensionalMatrix(arr1,3,3);
	cout << endl;

	printTowDimensionalMatrix(arr2, 3, 3);
	cout << endl;
	printVector(vCommonNumbers);

}