#include<iostream>
#include<string>
using namespace std;


string readString() {
	string word = "";
	cout << "Please enter the string:" << endl;
	getline(cin,word);
	return word;

}

string encryptString(string text,int encryptionKey){
	for (int i = 0;i < text.length();i++) {
		text[i] = char((int)text[i]+encryptionKey);
	}
	return text;
}


string decryptionString(string text, int encryptionKey){
	for (int i = 0;i < text.length();i++) {
		text[i] = char(int(text[i])- encryptionKey);
	}
	return text;
}

int main() {
	string test = readString();
	string textAfterEncryption = encryptString(test,2);
	string textAfterDecryption = decryptionString(textAfterEncryption, 2);

	cout << "The text after encryptions is:" << textAfterEncryption << endl;
	cout << "The text after decryption is:" << textAfterDecryption << endl;

}