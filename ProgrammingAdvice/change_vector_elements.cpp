#include<iostream>
#include<vector>
using namespace std;


int main() {
	vector<int> vNumbers{ 1,2,3,4,5 };

	for(const int i:vNumbers){
		cout << i << endl;
	}

	cout << "Update pointers" << endl;
	for ( int &i : vNumbers) {
		i = 30;
		cout << i << endl;
	}

	vNumbers[0] = 90;
	vNumbers.at(1) = 120;
	vNumbers.at(2) = 190;

	cout << "Update for the 3rd time" << endl;

	cout << "Update pointers" << endl;
	for (const int i : vNumbers) {
	
		cout << i << endl;
	}
}