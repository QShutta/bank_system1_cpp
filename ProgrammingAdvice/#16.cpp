#include<iostream>
using namespace std;

int readPositiveNumber(string msg) {
	int number;
	do {
		cout << msg << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

//void printAllWords() {
//	for (int i = 65;i <= 90;i++) {
//		for (int j = 65;j <= 90;j++) {
//			for (int k = 65;k <= 90;k++) {
//
//				cout << char(i) << char(j) << char(k) << endl;
//			}
//		}
//	}
//}
//The instructor solution
void printAllWords() {
	string word = "";
	for (int i = 65;i <= 90;i++) {
		for (int j = 65;j <= 90;j++) {
			
			for (int k = 65;k <= 90;k++) {
				word += char(i);
				word += char(j);
				word += char(k);
				cout << word << endl;
				word = "";
			}
		}
	}
}
int main() {
	 printAllWords();

}