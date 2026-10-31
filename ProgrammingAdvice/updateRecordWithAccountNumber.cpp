#include<iostream>
#include<fstream>
#include"convert_string.h";
using namespace std;


string clientFileName = "client.text";

struct stClientInfo {
	//I select the account number to be from double why because the numbers of accounts could be long right?
	//but it doesn't contain '.' is it better to make them int ?or double and why 
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	//of course the balance could contain decimal parts
	double accountBalance;
	bool markAsDelete;
};

void printClientDetails(stClientInfo client) {
	cout << "The follwing are the client details:\n\n";
	cout << "Account Number:" << client.accountNumber << endl;
	cout << "Name:" << client.name << endl;
	cout << "PIN code:" << client.pinCode << endl;
	cout << "Phone:" << client.phone << endl;
	cout << "Account Balance:" << client.accountBalance << endl;
}


stClientInfo convertStringToStruct(string  oneLine, string dilm = "#//#") {
	stClientInfo myClientInfo;
	vector<string> vClientData = stringConvert::mySplit(oneLine, dilm);


	myClientInfo.accountNumber = vClientData.at(0);
	myClientInfo.pinCode = vClientData.at(1);
	myClientInfo.name = vClientData.at(2);
	myClientInfo.phone = vClientData.at(3);
	myClientInfo.accountBalance = (trunc(stod(vClientData.at(4)) * 100) / 100.0);

	return myClientInfo;
}

vector<stClientInfo> loadDataFromFileToVector(string fileName) {
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

string convertStructToOneLineString(stClientInfo& clientInfo, string dilm) {
	string text = clientInfo.accountNumber + dilm;
	text += clientInfo.pinCode + dilm;
	text += clientInfo.name + dilm;
	text += clientInfo.phone + dilm;
	text += (to_string(trunc(clientInfo.accountBalance * 100) / 100.0)) + dilm;
	text = text.substr(0, text.length() - dilm.length());
	return text;
}


bool findClientByAccountNumber(string accountNumber, vector<stClientInfo>& vClients, string fileName, stClientInfo& clientInfoSt) {
	for (stClientInfo c : vClients) {
		if (c.accountNumber == accountNumber) {
			clientInfoSt = c;
			return true;
		}
	}
	return false;
}

void SaveVectorToFile(string FileName, vector <stClientInfo>
	vClients)
{
	fstream clientFile;
	string tempLine = "";
	clientFile.open(FileName, ios::out);
	if (clientFile.is_open())
	{
		for (stClientInfo client : vClients) {
			tempLine = convertStructToOneLineString(client, "#//#");

			clientFile << tempLine << endl;

		}
		clientFile.close();
	}
}

stClientInfo changeRecord(string accountNumber){
	stClientInfo client;
	client.accountNumber = accountNumber;
	cout << "Enter PinCode?";
	cin >> client.pinCode;
	cout << "Enter Name?";
	cin >> client.name;
	cout << "Enter Phone?";
	cin >> client.phone;
	cout << "Enter Account Balance?";
	cin >> client.accountBalance;
	return client;
}


bool updateRecordUsingAccountNumber(vector<stClientInfo>& vClients, string accountNumber) {
	stClientInfo client;
	char userChoice = 'n';
	if (findClientByAccountNumber(accountNumber, vClients, clientFileName, client)) {
		printClientDetails(client);
		userChoice = stringConvert::readChar("Are you sure you want to update this client?Y/N?");
		if (tolower(userChoice) == 'y') {
			//There is a point that it's not clear to me i use pass by refernce i think 
			//the change should directly by reflected to the origranl vecotr right ?
			//why did i have to use saveVecotrToFile
			//you answer you'r self by you'r self you work on the vector the oringal one not 
			//the file.

			for (stClientInfo& myClient : vClients) {
				if (myClient.accountNumber == accountNumber) {
					myClient = changeRecord(accountNumber);
					//The diff between of my solution and the instructor solution is clear 
					//Is that the instructor add this break which will prevent our code from looping on the leemnts 
					//after finding the right elemnt.
					break;
				}
			}
			SaveVectorToFile(clientFileName, vClients);
			cout << "Client updated succfuly" << endl;
		}

		return true;
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;
	}
	return false;
}

int main() {

	string accountNumber = stringConvert::readString("Please enter the account number?");
	vector<stClientInfo> vClients = loadDataFromFileToVector(clientFileName);
	updateRecordUsingAccountNumber(vClients, accountNumber);
}
//