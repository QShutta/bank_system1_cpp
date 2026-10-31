#include<iostream>
using namespace std;


bool isNumberInMatrix(int arr[3][3],int number,int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
		if(arr[i][j]==number) {
			return true;
		}
		}
	}
	return false;
}

int readNumber() {
	int num = 0;
	cout << "Please enter the number to look for in the matrix?" << endl;
	cin >> num;
	return num;
}

//The instructor code

short counterNumberInMatrix(int arr[3][3],int number,int row,int col) {
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



int main() {

	int arr[3][3] = {
		{77,5,12},
		{22,20,1},
		{1,0,9}
	};
	int number = readNumber();

	if(isNumberInMatrix(arr,number,3,3)){
		cout << "Yes is there" << endl;
	}
	else {
		cout << "No it's not there" << endl;
	}

	//The secound method:
	//The instructor told us usign this method is not correct because it's more slower.
	if(counterNumberInMatrix(arr,number,3,3)>0){
		cout << "Yes is there" << endl;
	}
	else {
		cout << "No it is not there" << endl;
	}

}