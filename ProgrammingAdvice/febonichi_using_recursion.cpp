#include<iostream>
using namespace std;

//This is my solution for the problem:
//int printFebonichiUsingRecursion(int number,int prev2,int prev1,int counter,int febNumber){
//
//	if(counter<=number){
//		if (counter== 2) {
//			cout << "1 ";
//		}
//		febNumber = prev1 + prev2;
//		cout << febNumber << " ";
//		prev2 = prev1;
//		prev1 = febNumber;
//		counter++;
//		printFebonichiUsingRecursion(number,prev2,prev1,counter,febNumber);
//	}
//	return 0;
//
//}

//int main() {
//	int prev2 = 0,prev1=1,febNumber=0,counter=2;
//	printFebonichiUsingRecursion(10,prev2,prev1,counter,febNumber);
//}


//The instructor solution and anlysis:
//The instructor say that we should avoid using the recusionwhy?
//Because i rember there is something called stack and it will be fill and cause an error
//void printFeboSeriesUsingRecursion(int number,int prev1,int prev2){
//	int febNumber = 0;
//	if(number>0){
//		febNumber = prev1 + prev2;
//		prev2 = prev1;
//		prev1 = febNumber;
//		cout << febNumber << " ";
//		printFeboSeriesUsingRecursion(number-1,prev1,prev2);
//	}
//}
//
//void printFebSer(int number,int first,int secound){
//	int febNumber = 0;
//if(number>0){
//	febNumber = first + secound;
//	//What if we say the first=secoudn and the secound =febNumber in this case willget 1,2,3,5,8,13...
//	//did this is not right solution and not represinting the febseries?
//	secound = first;
//	first = febNumber;
//	cout << febNumber << "  ";
//	printFebSer(number-1,first,secound);
//}
//}

//int main() {
//	//printFeboSeriesUsingRecursion(10,0,1);
//	//printFebSer(10,0,1);
//
//}