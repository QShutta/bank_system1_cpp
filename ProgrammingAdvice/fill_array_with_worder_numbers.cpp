#include<iostream>
#include<iomanip>
using namespace std;

void fillArrayWithOrderNumbers(int arr[3][3],int row,int col) {
	int x = 0;
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			x++;
			arr[i][j] = x;
			
		}
	}
}

void printTowDimentionalArray(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}

}

int main(){
	int arr[3][3];
	fillArrayWithOrderNumbers(arr,3,3);
	printTowDimentionalArray(arr,3,3);

}