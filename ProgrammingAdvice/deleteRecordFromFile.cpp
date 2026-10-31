#include  <iostream>
#include <fstream>
#include<cmath>
#include<iomanip>
#include <vector>
#include"convert_string.h";
#include<string>
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

string convertStructToOneLine(stClientInfo& clientInfo, string dilm) {
	string text = clientInfo.accountNumber + dilm;
	text += clientInfo.pinCode + dilm;
	text += clientInfo.name + dilm;
	text += clientInfo.phone+ dilm;
	text += (to_string(trunc(clientInfo.accountBalance*100)/100.0)) + dilm;
	text = text.substr(0, text.length() - dilm.length());
	return text;
}

void LoadDataFromFileToVectorProcedure(string fileName, vector <string>&vFileContent)
{
	fstream MyFile;
	MyFile.open(fileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}

void SaveVectorToFile(string FileName, vector <string>
	vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open())
	{
		for (string Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}

void saveDataFromVectorToFile(string fileName, vector<string>& vName) {
	fstream fName;
	fName.open(fileName, ios::out);

	if (fName.is_open()) {
		for (string& line : vName) {
			if (line != "") {
				fName << line << endl;
			}
		}
	}
	fName.close();
}

stClientInfo convertStringToStruct(string  oneLine, string dilm = "#//#") {
	stClientInfo myClientInfo;
	vector<string> vClientData = stringConvert::mySplit(oneLine, dilm);


	myClientInfo.accountNumber = vClientData.at(0);
	myClientInfo.pinCode = vClientData.at(1);
	myClientInfo.name = vClientData.at(2);
	myClientInfo.phone = vClientData.at(3);
	myClientInfo.accountBalance = (trunc(stod(vClientData.at(4))*100)/100.0);

	return myClientInfo;
}


void deleteRecordFromFile(string fName, string record,string accountNumber) {
	vector<string> vFileContent;
	stClientInfo tempClient;
	//Using this function we fill the "vFileContent" var with the data that exist inside of the file.
	LoadDataFromFileToVectorProcedure(fName, vFileContent);
	for (string& line : vFileContent) {
		tempClient = convertStringToStruct(line);
		if(tempClient.accountNumber==accountNumber){
				line = "";
			
		}
	}
	saveDataFromVectorToFile(fName, vFileContent);

}

void printClientDetails(stClientInfo client) {
	cout << "The follwing are the client details:\n\n";
	cout << "Account Number:" << client.accountNumber << endl;
	cout << "Name:" << client.name << endl;
	cout << "PIN code:" << client.pinCode << endl;
	cout << "Phone:" << client.phone << endl;
	cout << "Account Balance:" << client.accountBalance << endl;


}

vector<stClientInfo> loadDataFromFileToVectorFun(string fileName) {
	stClientInfo client;
	vector<stClientInfo> vClients;
	fstream clientFile;
	string clientInLine;
	clientFile.open(fileName, ios::in);
	if (clientFile.is_open()) {
		while (getline(clientFile, clientInLine)) {
			client = convertStringToStruct(clientInLine);
			vClients.push_back(client);
		}
	}
	return vClients;

}


bool findClientByAccountNumber(string accountNumber, stClientInfo& client, string fileName) {
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(fileName);

	for (stClientInfo c : vClients) {
		if (c.accountNumber == accountNumber) {

			client = c;
			return true;
		}
	}
	return false;
}

//Trace the code line by line to figure out where di the errir is from ?
int main() {

	string accountNumber = "";
	char userChoice = ' ';
	//Read the account number from the user.
	accountNumber=stringConvert::readString("Please enter the account number?");
	//This will contain the clientInfo in struct
	stClientInfo clientSt;
	//This will contain the clientInfo as string
	string clientInfoAsString = "";
	//We check if the account number is exis or not
	if(findClientByAccountNumber(accountNumber,clientSt,"client.text")) {
		//If the account is exist will show the account details
		printClientDetails(clientSt);
		userChoice = stringConvert::readChar("Are you sure you want to delete this client? y/n?");
		if(toupper(userChoice)=='Y') {

			clientInfoAsString = convertStructToOneLine(clientSt,"#//#");
			deleteRecordFromFile("client.text", clientInfoAsString,accountNumber);
			cout << "Client deleted succfuly" << endl;
		}
	}
	else {
		cout << "Client With AccountNumber (" << accountNumber << ") Not Found!" << endl;
	}

}



////The instructor solution is :
//int main() {
//
//}