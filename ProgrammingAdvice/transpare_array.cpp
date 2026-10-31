#include<iostream>
#include<iomanip>
using namespace std;

void printTowDimenstionalArray(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void fillTowDimenstionArray(int arr[3][3], int row, int col) {
	int counter = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			counter++;
			arr[i][j] = counter;
		}
		cout << endl;
	}
}

void transposeTowDimenstionalArray(int arr[3][3], int transArray[3][3]) {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			transArray[i][j] = arr[j][i];
		}
		cout << endl;
	}
}




int main() {
	int arr[3][3],transposedArray[3][3];
	fillTowDimenstionArray(arr,3,3);
	printTowDimenstionalArray(arr,3,3);

	printTowDimenstionalArray(transposedArray,3,3);

}