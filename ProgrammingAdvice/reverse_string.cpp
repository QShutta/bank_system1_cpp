#include<iostream>
#include<vector>
using namespace std;


vector<string> mySplit(string userInput, string dilm) {
	vector<string> vWords;
	string sWord = "";
	short pos = 0;
	while ((pos = userInput.find(dilm)) != string::npos) {
		sWord = userInput.substr(0, pos);
		if (sWord != "") {
			vWords.push_back(sWord);
		}
		userInput.erase(0, pos + dilm.length());
	}
	if (userInput != "") {
		vWords.push_back(userInput);
	}
	return vWords;
}


string reverseStringFun(string userInput) {
	vector<string> vWords = mySplit(userInput," ");
	string reversedString = "";
	for (int i = vWords.size()-1;i >= 0;i--) {
		reversedString += vWords[i]+" ";
	}
	return reversedString;
	
}


//instructor solution for the reverse string function:
string instReverseString(string userInput) {
	vector <string> vWords = mySplit(userInput, " ");
	string reversedString = "";
	//the iter بحتوي ليك علي القيمة الموجودة 
	//بعد اخر عنصر يعني عشان نصل اخر عنصر محتاجين ننقص واحد
	vector<string>::iterator iter = vWords.end();
	//احنا بنكون واقفين بنضيف العنصر للمتغير حتا بعداك بنعمل فحص
	while (iter != vWords.begin()) {
		--iter;
		reversedString += *iter + " ";
	}
	reversedString = reversedString.substr(0, reversedString.length() - 1);
	return reversedString;
}

int main() {
	string userInput = "ali ahmed khalid";
	cout << instReverseString(userInput) << endl;

	
}