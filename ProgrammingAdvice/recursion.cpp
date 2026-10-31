#include<iostream>
using namespace std;

//H.W:Q1
//void printDown(int num1,int num2){
//	if (num2>=1) {
//		cout << num2 << endl;
//		printDown(num1, num2-1);
//	}
//}
//
////H.W:Q2:
//
//
//void printNumbers(int num1,int num2){
//if(num1<=num2){
//	cout << num1 << endl;
//	printNumbers(num1+1,num2);
//}
//}
//
//void myPow(int n,int m,int&temp){
//	if(m>=1){
//		temp *= n;
//		myPow(n,m-1,temp);
//	}
//	cout << temp << endl;
//
//}

void printMtoN(int n,int m){
if(m>=n){
	cout << m << endl;
	printMtoN(n,m-1);
}

}


int myPowNtoM(int base,int pow){
if(pow==0){
	return 1;
}
else {
	return (base*myPowNtoM(base,pow-1));
}

}


int main() {
	cout << myPowNtoM(2, 4) << endl;
}