#include<iostream>
#include<iomanip>
using namespace std;
//---------------------------H.W---------------------------------------
void fillArray(int myResultArray[10][10]) {
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			myResultArray[i][j] = (i+1) *(j+1);
		}
	}
}

void printArray(int myResultArray[10][10]) {
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
		printf("%02d ",myResultArray[i][j]);
		}
		cout << endl;
	}
}

int main() {
	int arr[10][10];
	fillArray(arr);
	printArray(arr);
	
	//int my2DimenstionalArray[3][4] = { 
	//	{1,2,3,4},
	//	{5,6,7,8},
	//	{9,10,11,12} };
	//for (int i = 0;i < 3;i++) {
	//	for (int j = 0;j < 4;j++) {
	//		cout << my2DimenstionalArray[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}