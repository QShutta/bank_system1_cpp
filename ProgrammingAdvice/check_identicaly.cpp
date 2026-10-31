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

bool checkIdenticality(int arr[3][3], int row, int col) {
	
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if ((arr[0][0] == 1 && arr[row / 2][col / 2] == 1 && arr[row - 1][col - 1] == 1) && (getSumOfMatrix(arr, row, col) == 3)) {
				return true;
			}
		}

	}
	return false;
}

//The instructor solution:
//I think the first diff between of my soltuion and the instructor solution 
//that the instrcut know that the elements in the digonal means 'i=j' and this information is 
//missed from me.
//The secound diff is that my code pass throw the entire array then get out.but the instructor code
//is faster because if one leement is not mathc the condition will return false;
bool isIdentityMatrix(int arr[3][3],int row,int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			//The diagonal elements i=j.
		if((i==j)&&(arr[i][j]!=1)) {
			return false;
		}
		if((i!=j)&&(arr[i][j]!=0)) {
			return false;
		}
		
		}
	}
	return true;
}

int main(){
	int arr[3][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	if(isIdentityMatrix(arr,3,3)){
		cout << "Yes:Matrix is identity" << endl;
	}
	else {

		cout << "No:Matrix is not identitical" << endl;
	}
}