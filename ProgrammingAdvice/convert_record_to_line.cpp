#include<iostream>
#include<string>
using namespace std;

struct stClientInfo {
	//I select the account number to be from double why because the numbers of accounts could be long right?
	//but it doesn't contain '.' is it better to make them int ?or double and why 
	int accountNumber;
	int PINcode;
	string name;
	int phone;
	//of course the balance could contain decimal parts
	double accountBalance;
};

stClientInfo readClientInfo(stClientInfo & clientInfo){

	cout << "Please enter the name:";
	getline(cin, clientInfo.name);

	cout << "Please enter the account number:";
	cin >> clientInfo.accountNumber;

	cout << "Please enter the PIN code:";
	cin >> clientInfo.PINcode;

	cout << "Please enter the phone number:";
	cin >> clientInfo.phone;

	cout << "Please enter the account balance:";
	cin >> clientInfo.accountBalance;



	return clientInfo;
}


string convertStructToOneLine(stClientInfo & clientInfo,string dilm){
	string text = to_string(clientInfo.accountNumber)+dilm;
	text += to_string(clientInfo.PINcode) + dilm;
	text += clientInfo.name + dilm;
	text += to_string(clientInfo.phone) + dilm;
	text += to_string(clientInfo.accountBalance) + dilm;
	text = text.substr(0,text.length()-dilm.length());
	return text;
}


int main() {
	string text = "";
	stClientInfo myClientInfo;
	 readClientInfo(myClientInfo);
	 text = convertStructToOneLine(myClientInfo, "#//#");
	 cout << text << endl;
	
}