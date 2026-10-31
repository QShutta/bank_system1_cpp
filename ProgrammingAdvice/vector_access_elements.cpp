#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vNumbers{1,2,3,4,5};
	cout << "the element in the first position is:" << vNumbers.at(0) << endl;
	cout << "the element in the secound position is:" << vNumbers.at(1) << endl;
	cout << "the element in the third position is:" << vNumbers.at(2) << endl;
	//If we out of range usign 'at' will cause exception error
	//cout << "the element in the fourth position is:" << vNumbers.at(9) << endl;

	cout << "------------------------------------------------" << endl;

	cout << "the element in the first position is:" << vNumbers[0] << endl;
	cout << "the element in the secound position is:" << vNumbers[1] << endl;
	cout << "the element in the third position is:" << vNumbers[2] << endl;
	//If we out of range using [6] will cause warning.
	//cout << "the element in the fourth position is:" << vNumbers[6] << endl;
}