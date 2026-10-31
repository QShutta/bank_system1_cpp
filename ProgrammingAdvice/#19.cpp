#include<iostream>
#include<cstdlib>
using namespace std;

int randomNumber(int from,int to){
	int randomNumber = rand() % (to - from + 1) + from;
	return randomNumber;
}

int main() {
	srand((unsigned)time(NULL));

	cout << randomNumber(1,10) << endl;
}