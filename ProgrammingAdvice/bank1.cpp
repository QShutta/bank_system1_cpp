#include<iostream>
#include"fileHandling.h";
#include"convert_string.h";
#include<fstream>
#include<iomanip>
using namespace std;
const string clientFileName = "client.text";

struct stClientInfo {
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	double accountBalance;
	bool markAsDelete=false;
};

enum enSelection {
	showClientList = 1,
	addNewClient=2,
	deleteClient=3,
	updateClient=4,
	findClient=5,
	out=6
};

void printClient(stClientInfo client) {
	cout << "| " << left << setw(20) << client.accountNumber << "| ";
	cout << left << setw(20) << client.pinCode << "| ";
	cout << left << setw(25) << client.name << "| ";
	cout << left << setw(20) << client.phone << "| ";
	cout << left << setw(20) << client.accountBalance << endl;
}

//This is a declration to be able to use the addNewClientFun before of defination.
void AddNewClientFun();


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

void printClients(vector<stClientInfo> vClients) {
	//cout << "--------------------------------------------------------------------------";
	//cout << "----------------------------------------------" << endl;

	//cout << "\t\t\t\t\t List(" << vClients.size() << ")" << " Client(s)." << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	cout << "| " << left << setw(20) << "Account Number" << "| ";
	cout << left << setw(20) << "Pin Code" << "| ";
	cout << left << setw(25) << "Client Name" << "| ";
	cout << left << setw(20) << "Phone" << "| ";
	cout << left << setw(20) << "Balance" << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	for (stClientInfo& client : vClients) {
		printClient(client);
		cout << "--------------------------------------------------------------------------";
		cout << "----------------------------------------------" << endl;
	}
}

vector<stClientInfo> loadDataFromFileToVectorFun(string fName) {
	fstream clientFile;
	clientFile.open(fName, ios::in);
	string clientLine = "";
	stClientInfo client;
	vector<stClientInfo> clientsVector;
	if (clientFile.is_open()) {
		while (getline(clientFile, clientLine)) {
			client = convertStringToStruct(clientLine, "#//#");
			clientsVector.push_back(client);

		}
	}
	return clientsVector;

}

void showMainMenue() {
	cout << "==============================================" << endl;
	cout << "\t\tMain Menue Screen" << endl;
	cout << "\t[1] Show Client list" << endl;
	cout << "\t[2] Add New Client" << endl;
	cout << "\t[3] Delete Client" << endl;
	cout << "\t[4] Update Client Information" << endl;
	cout << "\t[5] Find Client" << endl;
	cout << "\t[6] Exit" << endl;
	cout << "==============================================" << endl;
}

enSelection readUserSelection() {
	enSelection selection;
	int sel=1;
	cout << "Choose What do you want to do?[1-6]?";
	cin >> sel;
	selection = (enSelection)sel;
	return selection;
	
}


stClientInfo changeRecord(string accountNumber) {
	stClientInfo client;
	client.accountNumber = accountNumber;
	cout << "Enter PinCode?";
	getline(cin>>ws,client.pinCode);
	cout << "Enter Name?";
	getline(cin, client.name);
	cout << "Enter Phone?";
	getline(cin,client.phone);
	cout << "Enter Account Balance?";
	cin >> client.accountBalance;
	return client;
}


void printClientDetails(stClientInfo client) {
	cout << "The follwing are the client details:\n\n";
	cout << "Account Number:" << client.accountNumber << endl;
	cout << "Name:" << client.name << endl;
	cout << "PIN code:" << client.pinCode << endl;
	cout << "Phone:" << client.phone << endl;
	cout << "Account Balance:" << client.accountBalance << endl;
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


void SaveVectorToFile(string FileName, vector <stClientInfo>
	vClients)
{
	fstream clientFile;
	string tempLine = "";
	clientFile.open(FileName, ios::out);
	if (clientFile.is_open())
	{
		for (stClientInfo& client : vClients) {
			if (client.markAsDelete==false) {
				tempLine = convertStructToOneLineString(client, "#//#");
				clientFile << tempLine << endl;
			}
		

		}
		
	}
	clientFile.close();
}

bool findClientByAccountNumber(string accountNumber, vector<stClientInfo>& vClients, string fileName, stClientInfo& client) {
	for (stClientInfo& c : vClients) {
		if (c.accountNumber == accountNumber) {
			client = c;
			return true;
		}
	}
	return false;
}

int implemntUserOperation(enSelection selection);

void goToMainMenue() {
	system("cls");
	showMainMenue();
	enSelection selection;
	selection = readUserSelection();

	implemntUserOperation(selection);
}


bool markClientAsDelete(string accountNumber,vector<stClientInfo> &vClients) {
	for(stClientInfo &client:vClients){
		if (client.accountNumber==accountNumber) {
			client.markAsDelete= true;
			return true;
	}
	}
	return false;
}

void exitProgram() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\Program Ends :-)" << endl;
	cout << "------------------------------------------------" << endl;
}

void findClientFun() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\Find Client Screen" << endl;
	cout << "------------------------------------------------" << endl;
	string accountNumber = stringConvert::readString("Please enter account number:");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	stClientInfo client;
	char userChoice = 'n';
	if (findClientByAccountNumber(accountNumber, vClients, clientFileName, client)) {
		printClientDetails(client);
		system("Pause");
		goToMainMenue();
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;
		goToMainMenue();
	}
}


void deleteClientFun() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\Delete Client Screen" << endl;
	cout << "------------------------------------------------" << endl;
	string accountNumber = stringConvert::readString("Please enter account number:");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	stClientInfo client;
	char userChoice = 'n';
	if (findClientByAccountNumber(accountNumber, vClients, clientFileName, client)) {
		printClientDetails(client);
		userChoice = stringConvert::readChar("Are you sure you want to Delete this client?Y/N?");
		if (tolower(userChoice) == 'y') {
			for (stClientInfo& myClient : vClients) {
				if (myClient.accountNumber == accountNumber) {
					markClientAsDelete(accountNumber,vClients);
					break;
				}
			}
			SaveVectorToFile(clientFileName, vClients);
			cout << "Client deleted succfuly" << endl;
			system("PAUSE");
			goToMainMenue();
		}
		else {
			system("PAUSE");
			goToMainMenue();
		}
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;

	}
}


bool UpdateClientInfoFun() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\tUpdate Client Info Screen" << endl;
	cout << "------------------------------------------------" << endl;
	string accountNumber = stringConvert::readString("Please enter account number:");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	stClientInfo client;
	char userChoice = 'n';
	if (findClientByAccountNumber(accountNumber, vClients, clientFileName, client)) {
		printClientDetails(client);
		userChoice = stringConvert::readChar("Are you sure you want to update this client?Y/N?");
		if (tolower(userChoice) == 'y') {
			for (stClientInfo& myClient : vClients) {
				if (myClient.accountNumber == accountNumber) {
					myClient = changeRecord(accountNumber);
					break;
				}
			}
			SaveVectorToFile(clientFileName, vClients);
			cout << "Client updated succfuly" << endl;
			system("PAUSE");
			goToMainMenue();
		}
		else {
			system("PAUSE");
			goToMainMenue();
		}
		return true;
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;
		system("PAUSE");
		goToMainMenue();
	}
	return false;
}

void showClientListFun() {
	system("cls");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	cout << "\t\t\t\t\tClient List" << vClients.size() << ") Client(s)" << endl;
	printClients(vClients);
	system("PAUSE");
	system("cls");
	showMainMenue();
	enSelection selection;
	selection = readUserSelection();
	implemntUserOperation(selection);

}

int implemntUserOperation(enSelection selection){
	//I don't want each time to load the data from the file
switch(selection){
case enSelection::showClientList:showClientListFun(); break;
case enSelection::addNewClient:AddNewClientFun(); break;
case enSelection::deleteClient:deleteClientFun(); break;
case enSelection::updateClient:UpdateClientInfoFun(); break;
case enSelection::findClient:findClientFun(); break;
default:exitProgram() ;
}
return 0;
}
//I pass the vClients why ?to make a comparstion between of the data that exist int he file and 
//the data that the user enter.
stClientInfo readClientInfo() {
	stClientInfo  clientInfo;
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	cout << "Please enter the account number:";
	//There is an important point is that we use the >>ws.
	//because when we use the getlien+cin it leave /n at the end and we use the 
	//ws to discard from the empty space ,enter,/n...
	getline(cin >> ws, clientInfo.accountNumber);

	
	while(findClientByAccountNumber(clientInfo.accountNumber,vClients,clientFileName,clientInfo)){
		cout << "Client with [" << clientInfo.accountNumber << "] already exists, Enter another client number?";
		getline(cin >> ws, clientInfo.accountNumber);
	}


	cout << "Please enter the PIN code:";
	getline(cin, clientInfo.pinCode);

	cout << "Please enter the name:";
	getline(cin, clientInfo.name);

	cout << "Please enter the phone number:";
	getline(cin, clientInfo.phone);


	cout << "Please enter the account balance:";
	cin >> clientInfo.accountBalance;

	return clientInfo;
}

string convertStructToOneLine(stClientInfo& clientInfo, string dilm) {
	string text = "";
	text = clientInfo.accountNumber + dilm;
	text += clientInfo.pinCode + dilm;
	text += clientInfo.name + dilm;
	text += clientInfo.phone + dilm;
	text += to_string(clientInfo.accountBalance) + dilm;
	text = text.substr(0, text.length() - dilm.length());
	return text;

}

void addClientToFile(string fileName, string client) {
	fstream clientFile;
	clientFile.open(fileName, ios::out | ios::app);
	if (clientFile.is_open()) {
		clientFile << client << endl;
		//I think the close line location is wirred why ?that means after each client 
		//we close the file?Ammm? it look a right folow we add client and then close the file 
		//if we want to add another client we do OPEN THE FILE AND CLOSE IT AGAIN .
		clientFile.close();
	}
}

void AddNewClientFun() {

	system("cls");
	cout << "\t\t\t\tAdd New Client\n\n";
	stClientInfo client;
	string clientInOneLine = "";
	char userChoice = 'y';
	while(tolower(userChoice)=='y') {
		client = readClientInfo();
		clientInOneLine = convertStructToOneLine(client, "#//#");
		addClientToFile("client.text", clientInOneLine);
		userChoice = stringConvert::readChar("Client Added Succfuly, do you want to add more clients?Y/N?");
	}
	cout << "Press any key to go back to Main Menue";
	system("Pause");
	goToMainMenue();
}

int main() {
	goToMainMenue();
}