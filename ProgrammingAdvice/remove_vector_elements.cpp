#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "The num of elemnts in the stack are:" << vNumbers.size() << endl;

	vNumbers.clear();
	cout << "The num of elemnts in the stack are:" << vNumbers.size() << endl;
}