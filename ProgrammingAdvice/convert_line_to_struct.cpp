#include<iostream>
#include"convert_string.h";
using namespace std;

struct stClientInfo {
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	double accountBalance;
};

stClientInfo convertStringToStruct(string  oneLine,string dilm="#//#") {
	stClientInfo myClientInfo;
	vector<string> vClientData = stringConvert::mySplit(oneLine,dilm);
	
		myClientInfo.accountNumber = vClientData.at(0);
		myClientInfo.pinCode = vClientData.at(1);
		myClientInfo.name = vClientData.at(2);
		myClientInfo.phone = vClientData.at(3);
		myClientInfo.accountBalance = stod(vClientData.at(4));
	
	return myClientInfo;
}

void printStruct(stClientInfo & myClientInfo){
	cout << "Account Number:" << myClientInfo.accountNumber << endl;
	cout << "Pin Code:" << myClientInfo.pinCode << endl;
	cout << "Name:" << myClientInfo.name << endl;
	cout << "Phone:" << myClientInfo.phone << endl;
	cout << "Account Balance:" << myClientInfo.accountBalance << endl;
}

int main() {
	string text = "A150#//#1234#//#Mohmed AbuHadhuoud#//#079999#//#5270.00000";
	cout << "Line recorde is: \n";
	cout << text << "\n\n";
	cout << "The followign is the extracted client record" << endl;
	stClientInfo myVec = convertStringToStruct(text);
	printStruct(myVec);

}