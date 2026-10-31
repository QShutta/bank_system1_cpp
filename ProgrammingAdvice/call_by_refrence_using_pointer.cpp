#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10, b = 20;

	cout << "The a before of swap function:" << a << endl;
	cout << "The b before of swap function:" << b << endl;

	swap(&a,&b);


	cout <<endl<< "The a after of swap function:" << a << endl;
	cout << "The b after of swap function:" << b << endl;
}