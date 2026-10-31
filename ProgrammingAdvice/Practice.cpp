#pragma warning(disable:4996)

#include<iostream>
#include<ctime>
using namespace std;

int main() {
	//local time:
	time_t tt = time(0);
	char* dt = ctime(&tt);

	cout << "The local time is:" << dt << endl;

	//This will retrun the address of struct contain the date in grintch fromat
	tm * tn = gmtime(&tt);

	dt = asctime(tn);

	cout << "The global time is:" << dt << endl;

}