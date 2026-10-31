#include<iostream>
#include<vector>
using namespace std;

//عشان تحل مشكلة فيبونتشي دي لازم تتعلم كيف تصل لي اخر عنصر قاعد في الم
// stack
//ووتعلم تصل للعنصر القبل الاخير بعداك تعمل ليهم عملية بتاعت جمع .

//void doCalc(vector<int> &vNumbers) {
//	int sum = 0; 
//	
//	for (int i = 0;i < 8;i++) {
//		sum = vNumbers.at(i) + vNumbers.at(i + 1);
//		vNumbers.push_back(sum);
//	}
//	
//}
//
//void printVector(vector<int> & myVector) {
//	for (int& n : myVector) {
//		cout << n << " ";
//	}cout << endl;
//
//}
//
//int main() {
//	vector<int> vNumber = { 1,1};
//	doCalc(vNumber);
//	printVector(vNumber);
//
//}




//The instructor solution:


void printFebionichiUsingLoop(int number) {
	int febNumber = 0;
	//The nameing is not clear to me and i think it's misleading.
	//I think still the nameing is not clear because of the first elemnt should be named
	//prev1 and the secound element should be named prev2?why ddi the instructor follow this wirred
	//nameing way?
	//did this is important point i should focus and and give it alot from my time?
	int prev2 = 0, prev1 = 1;
	cout << "1 ";
	//Why did the loop start from 2 this is not clear to me.//i ithink it should be from 1 because the first is already printed
	//but why did he start from 2?or because he make it until <=?not <?right ?
	//for (int i = 2;i <= number;i++) {
	//my conclustion is right when i replace it with
	for (int i = 1;i < number;i++) {
		//I get the same result.
		febNumber = prev1 + prev2;
		cout << febNumber << " ";
		prev2 = prev1;
		prev1 = febNumber;
	}

}


int main() {
	printFebionichiUsingLoop(10);

}





//Try to improve my solution :
//void doCalc(vector<int>& vNumbers) {
//	int sum = 1;
//	while (vNumbers.at(1) != 1) {
//		vNumbers.push_back(sum);
//	}
//	for (int i = 0;i < 8;i++) {
//		sum = vNumbers.at(i) + vNumbers.at(i + 1);
//		
//	}
//
//}
//
//void printVector(vector<int>& myVector) {
//	for (int& n : myVector) {
//		cout << n << " ";
//	}cout << endl;
//
//}
//
//int main() {
//	vector<int> vNumber;
//	doCalc(vNumber);
//	printVector(vNumber);
//
//}