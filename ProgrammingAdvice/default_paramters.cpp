#include<iostream>
using namespace std;

int mySum(int a,int b=0,int c=0,int d=0){
	return a + b + c + d;
}

int main() {
	cout << mySum(10) << endl;
	cout << mySum(10, 20, 30) << endl;
	cout << mySum(10, 20, 30, 40) << endl;

}