#include<iostream>
using namespace std;

string read3LetterPassword() {
	string word = "";
	cout << "Please enter the password:" << endl;
	cin >> word;
	return word;

}

bool guessPassword(string userEnteredWord) {
	int counter = 0;
	string word = "";
	for (int i = 65;i <= 90;i++) {
		for (int j = 65;j <= 90;j++) {
			for (int k = 65;k <= 90;k++) {
				counter++;
				word += char(i);
				word += char(j);
				word += char(k);
		
				cout << "Trial [" << counter << "]:" << word << endl;
				if(word==userEnteredWord){
					cout << endl;
					cout << "Password is:" << word << endl;
					cout << "Found after " << counter << " Trials" << endl;

					return true;
				}
				word = "";
					

			}
			
		}
		
	}
	return false;
}

int main() {
	string userEnter = read3LetterPassword();
	if (guessPassword(userEnter) == false) {
		cout << "Please enter a valid 3 charecters" << endl;
	}

}