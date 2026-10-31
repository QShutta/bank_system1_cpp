#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int getRandomNumber(int from,int to) {
	int number = rand() % (to - from + 1) + from;
	return number;
}

void fillMatrix(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = getRandomNumber(1,100);
		}
	}
}
//The instructor make the rows,cols as a parmeter to make the function more generic
//to avoid altering in many places.
void printArrayElements(int arr[3][3],int rows,int cols) {
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			//the setw spacfiy the num of digits that the word reserve or occupy
			cout <<setw(7)<< arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	fillMatrix(arr,2,4);
	cout << "The following is a 3x3 random matrix" << endl;
	printArrayElements(arr,2,4);
	

}