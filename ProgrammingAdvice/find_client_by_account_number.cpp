#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>
#include"convert_string.h"
using namespace std;

struct stClientInfo {
	//I select the account number to be from double why because the numbers of accounts could be long right?
	//but it doesn't contain '.' is it better to make them int ?or double and why 
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	//of course the balance could contain decimal parts
	double accountBalance;
};

stClientInfo convertStringToStruct(string  oneLine, string dilm = "#//#") {
	stClientInfo myClientInfo;
	vector<string> vClientData = stringConvert::mySplit(oneLine, dilm);

	myClientInfo.accountNumber = vClientData.at(0);
	myClientInfo.pinCode = vClientData.at(1);
	myClientInfo.name = vClientData.at(2);
	myClientInfo.phone = vClientData.at(3);
	myClientInfo.accountBalance = stod(vClientData.at(4));

	return myClientInfo;
}

vector<stClientInfo> loadDataFromFileToVector(string fileName) {
	stClientInfo client;
	vector<stClientInfo> vClients;
	fstream clientFile;
	string clientInLine;
	clientFile.open(fileName,ios::in);
	if(clientFile.is_open()){
	while(getline(clientFile,clientInLine)){
		client = convertStringToStruct(clientInLine);
		vClients.push_back(client);
	}
	}
	return vClients;

}


bool isItRequiredRecord(stClientInfo client,string accountNumber) {
	if(client.accountNumber==accountNumber){
		return true;
	}
	else {
		return false;
	}

}

void printClientDetails(stClientInfo client){
	cout << "The follwing are the client details:\n\n";
	cout << "Account Number:" << client.accountNumber << endl;
	cout << "Name:" << client.name << endl;
	cout << "PIN code:" << client.pinCode << endl;
	cout << "Phone:" << client.phone << endl;
	cout << "Account Balance:" << client.accountNumber << endl;


}

bool findRecord(string fileName,string accountNumber) {
	vector<stClientInfo> vClients = loadDataFromFileToVector(fileName);

	for (stClientInfo & clientInfo:vClients) {
		if(isItRequiredRecord(clientInfo,accountNumber)){
			printClientDetails(clientInfo);
			return 1;

		}
	}
	cout << "Account with account Number " << accountNumber << " Not found!" << endl;
	return 0;
}



//int main() {
//	findRecord("client.text","1157537");
//}



//Instructor solution-------------------------------------------------------------------

bool findClientByAccountNumber(string accountNumber,stClientInfo &client,string fileName){
	vector<stClientInfo> vClients = loadDataFromFileToVector(fileName);
	for(stClientInfo c:vClients){
	if(c.accountNumber==accountNumber){
		client = c;
		return true;
	}
	}
	return false;
}

int main() {
	stClientInfo client;
	string accountNumber = stringConvert::readString("Please enter account number");
	if(findClientByAccountNumber(accountNumber,client,"client.text")) {
		printClientDetails(client);
	}
	else {
		cout << "Client with account number: (" << accountNumber << ") " << "Not Found" << endl;
	}
}