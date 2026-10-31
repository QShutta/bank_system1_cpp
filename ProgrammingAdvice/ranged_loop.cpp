#include<iostream>
using namespace std;

int main() {
	int arr1[] = { 10, 7, 4, 15, 20, 9, 8 };;
	int counter = 0;
	for (int n : arr1) {
		if(n%2==0){
			counter++;
		}
	}
	cout << counter << endl;
	

}