#include<iostream>
#include"convert_string.h";
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

const string clientFileName = "client.text";

struct stClientInfo {
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	double accountBalance;
	bool markAsDelete = false;
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

enum enMainMenueOptions {
	eShowClientList = 1,
	eAddNewClient = 2,
	eDeleteClient = 3,
	eUpdateClient = 4,
	eFindClient = 5,
	eTransaction=6,
	eExit = 7
};

enum enTransactionMenue {
	eDeposit = 1,
	eWithdraw = 2,
	eTotalBalance = 3,
	eMainMenue = 4,
};

bool findClientByAccountNumber(string accountNumber, vector<stClientInfo>& vClients, string fileName, stClientInfo& client) {
	for (stClientInfo& c : vClients) {
		if (c.accountNumber == accountNumber) {
			client = c;
			return true;
		}
	}
	return false;
}

stClientInfo readClientInfo() {
	stClientInfo  clientInfo;
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	cout << "Please enter the account number:";
	//There is an important point is that we use the >>ws.
	//because when we use the getlien+cin it leave /n at the end and we use the 
	//ws to discard from the empty space ,enter,/n...
	getline(cin >> ws, clientInfo.accountNumber);


	while (findClientByAccountNumber(clientInfo.accountNumber, vClients, clientFileName, clientInfo)) {
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

string convertStructToOneLineString(stClientInfo& clientInfo, string dilm) {
	string text = clientInfo.accountNumber + dilm;
	text += clientInfo.pinCode + dilm;
	text += clientInfo.name + dilm;
	text += clientInfo.phone + dilm;
	text += (to_string(trunc(clientInfo.accountBalance * 100) / 100.0)) + dilm;
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


void addClient() {
	stClientInfo client;
	string clientInOneLine = "";
	client = readClientInfo();
	clientInOneLine = convertStructToOneLineString(client, "#//#");
	addClientToFile("client.text", clientInOneLine);
}

void AddNewClients() {
	char addMore = 'y';
	while (tolower(addMore) == 'y') {
		addClient();
		addMore = stringConvert::readChar("Client Added Succfuly, do you want to add more clients?Y/N?");
	}
}

void printClient(stClientInfo client) {
	cout << "| " << left << setw(20) << client.accountNumber << "| ";
	cout << left << setw(20) << client.pinCode << "| ";
	cout << left << setw(25) << client.name << "| ";
	cout << left << setw(20) << client.phone << "| ";
	cout << left << setw(20) << client.accountBalance << endl;
}

void printClientBalances(stClientInfo client) {
	cout << "| " << left << setw(20) << client.accountNumber << "| ";
	cout << left << setw(45) << client.name << "| ";
	cout << left << setw(20) << client.accountBalance << endl;
}

void showClientListScreen() {
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	cout << "\t\t\t\t\tClient List" << vClients.size() << ") Client(s)" << endl;
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

void showAddNewClientScreen() {
	system("cls");
	cout << "\t\t\t\tAdd New Client\n\n";
	AddNewClients();
}

void printClientDetails(stClientInfo client) {
	cout << "The follwing are the client details:\n\n";
	cout << "Account Number:" << client.accountNumber << endl;
	cout << "Name:" << client.name << endl;
	cout << "PIN code:" << client.pinCode << endl;
	cout << "Phone:" << client.phone << endl;
	cout << "Account Balance:" << client.accountBalance << endl;
}



bool markClientAsDelete(string accountNumber, vector<stClientInfo>& vClients) {
	for (stClientInfo& client : vClients) {
		if (client.accountNumber == accountNumber) {
			client.markAsDelete = true;
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
		for (stClientInfo& client : vClients) {
			if (client.markAsDelete == false) {
				tempLine = convertStructToOneLineString(client, "#//#");
				clientFile << tempLine << endl;
			}


		}

	}
	clientFile.close();
}



stClientInfo changeRecord(string accountNumber) {
	stClientInfo client;
	client.accountNumber = accountNumber;
	cout << "Enter PinCode?";
	getline(cin >> ws, client.pinCode);
	cout << "Enter Name?";
	getline(cin, client.name);
	cout << "Enter Phone?";
	getline(cin, client.phone);
	cout << "Enter Account Balance?";
	cin >> client.accountBalance;
	return client;
}

void goBackToMainMenue();

bool UpdateClientInfoFun(string accountNumber, vector<stClientInfo> vClients) {



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

			goBackToMainMenue();
		}
		else {
			cout << "Not found" << endl;
			goBackToMainMenue();
		}
		return true;
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;

		goBackToMainMenue();
	}
	return false;
}


bool deleteClientByAccountNumber(string AccountNumber, vector <stClientInfo>& vClients)
{
	stClientInfo Client;
	char Answer = 'n';

	if (findClientByAccountNumber(AccountNumber, vClients, clientFileName, Client))
	{
		printClientDetails(Client);

		cout << "\n\nAre you sure you want delete this client? y/n ? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{
			markClientAsDelete(AccountNumber, vClients);
			SaveVectorToFile(clientFileName, vClients);

			//Refresh Clients 
			vClients = loadDataFromFileToVectorFun(clientFileName);

			cout << "\n\nClient Deleted Successfully.";
			return true;
		}

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		return false;
	}
}


void showDeleteClientScreen() {
	system("cls");
	cout << "\t\t\t\t Delete Client\n\n";
	string accountNumber = stringConvert::readString("Please enter account number:");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	deleteClientByAccountNumber(accountNumber, vClients);
}

void showUpdateClientScreen() {
	system("cls");
	cout << "\t\t\t\t Update Client Screen\n\n";
	string accountNumber = stringConvert::readString("Please enter account number:");
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	UpdateClientInfoFun(accountNumber, vClients);
}

void showFindClientScreen() {
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

		goBackToMainMenue();
	}
	else {
		cout << "Client with account number(" << client.accountNumber << ") Not found!" << endl;
		goBackToMainMenue();
	}
}

void showEndProgramScreen() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\End Of Program:-)" << endl;
	cout << "------------------------------------------------" << endl;
}
void showMainMenue();

void goBackToMainMenue() {
	cout << "\n\nPress any key to go back to main menue...";
	system("pause>0");
	showMainMenue();
}

void showTransactionMenue();

void goBackToTransactionMenue() {
	cout << "\n\nPress any key to go back to main menue...";
	system("pause>0");
	showTransactionMenue();
}




void depositFromAccount(string accountNumber,string fileName) {
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	stClientInfo client;
	while(!findClientByAccountNumber(accountNumber,vClients,clientFileName,client)){
		cout << "client with (" << accountNumber << ") does not exist" << endl;
		accountNumber = stringConvert::readString("Please enter accountNumber?");
	}
	cout << endl;
	printClientDetails(client);
	cout << endl;
	
	double depositAmount = stringConvert::readDouble("Please enter deposit amount?");
	//لو قلتة اخليها كدة انا حاغير علي النسخة صح ؟
	//client.accountNumber += depositAmount;
	char doTransaction = stringConvert::readChar("Are you sure you want to perform this transaction?Y/N");
	if (toupper(doTransaction)=='Y') {
		for (stClientInfo& cc : vClients) {
			if (cc.accountNumber == accountNumber) {
				cc.accountBalance += depositAmount;
			}
		}
		//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
		//I get why the print here doesn't give us the right result because of the client is 
		// a seprate copy from it.
		//cout << "Done Succfuly. The new balance is (" << client.accountBalance << ")" << endl;

		SaveVectorToFile(clientFileName, vClients);
		//referse the vector clients
		vClients = loadDataFromFileToVectorFun(clientFileName);
		findClientByAccountNumber(accountNumber,vClients,clientFileName,client);
		cout << "\nDone Succfuly. The new balance is (" << client.accountBalance << ")" << endl;
	}
	
}

void showDepositScreen() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\Deposit Screen" << endl;
	cout << "------------------------------------------------" << endl;
	string accountNumber = stringConvert::readString("Please enter accountNumber?");
	depositFromAccount(accountNumber,clientFileName);

}

void withDrawFromAccount(string accountNumber) {
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	stClientInfo client;
	while (!findClientByAccountNumber(accountNumber, vClients, clientFileName, client)) {
		cout << "client with (" << accountNumber << ") does not exist" << endl;
		accountNumber = stringConvert::readString("Please enter accountNumber?");
	}
	cout << endl;
	printClientDetails(client);
	cout << endl;
	double withDrawAmount = stringConvert::readDouble("Please enter withDraw amount?");

	char doTransaction = stringConvert::readChar("Are you sure you want to perform this transaction?Y/N");
	if (toupper(doTransaction) == 'Y') {
		for (stClientInfo& cc : vClients) {
			if (cc.accountNumber == accountNumber) {
				while (cc.accountBalance < withDrawAmount) {
					//why did he write up to ?
					cout << "Amount Exceeds the balance, you can withdraw up to" << cc.accountBalance << endl;

					withDrawAmount = stringConvert::readDouble("Please enter another amount?");
				}
				cc.accountBalance += withDrawAmount*-1;
			}
		}


		SaveVectorToFile(clientFileName, vClients);
		//referse the vector clients
		vClients = loadDataFromFileToVectorFun(clientFileName);
		findClientByAccountNumber(accountNumber, vClients, clientFileName, client);
		cout << "\nDone Succfuly. The new balance is (" << client.accountBalance << ")" << endl;
	}
}

void showWithdrawScreen() {
	system("cls");
	cout << "------------------------------------------------" << endl;
	cout << "\t\t\WithDraw Screen" << endl;
	cout << "------------------------------------------------" << endl;
	string accountNumber = stringConvert::readString("Please enter accountNumber?");
	withDrawFromAccount(accountNumber);
}

void showTotalBalance() {
	double totalBalance = 0;
	vector<stClientInfo> vClients = loadDataFromFileToVectorFun(clientFileName);
	cout << "\t\t\t\t\Balance List" << vClients.size() << ") Client(s)" << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	cout << "| " << left << setw(20) << "Account Number" << "| ";
	cout << left << setw(45) << "Client Name" << "| ";
	cout << left << setw(20) << "Balance" << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	for (stClientInfo& client : vClients) {
		printClientBalances(client);
		totalBalance += client.accountBalance;
		cout << "--------------------------------------------------------------------------";
		cout << "----------------------------------------------" << endl;
	}
	cout << "\t\t\t\t\t\t Total Balances=" << totalBalance << endl;


}




void performTransactionMenue(enTransactionMenue transactionMenue) {
	switch (transactionMenue) {
	case enTransactionMenue::eDeposit:
		system("cls");
		showDepositScreen();
		goBackToTransactionMenue();
		break;
	case enTransactionMenue::eWithdraw:
		system("cls");
		showWithdrawScreen();
		goBackToTransactionMenue();
		break;
	case enTransactionMenue::eTotalBalance:
		system("cls");
		showTotalBalance();
		goBackToTransactionMenue();
		break;
	case enTransactionMenue::eMainMenue:
		system("cls");
		goBackToMainMenue();
		break;
	}

}



void perfomMainMenueOperation(enMainMenueOptions mainMenueOptions) {
	switch (mainMenueOptions) {
	case enMainMenueOptions::eShowClientList:
		system("cls");
		showClientListScreen();
		goBackToMainMenue();
		break;
	case enMainMenueOptions::eAddNewClient:
		system("cls");
		showAddNewClientScreen();
		goBackToMainMenue();
		break;
	case enMainMenueOptions::eDeleteClient:
		system("cls");
		showDeleteClientScreen();
		goBackToMainMenue();
		break;
	case enMainMenueOptions::eUpdateClient:
		system("cls");
		showUpdateClientScreen();
		goBackToMainMenue();
		break;

	case enMainMenueOptions::eTransaction:
		system("cls");
		showTransactionMenue();
		goBackToMainMenue();
		break;


	case enMainMenueOptions::eFindClient:
		system("cls");
		showFindClientScreen();
		goBackToMainMenue();
		break;
	case enMainMenueOptions::eExit:
		system("cls");
		showEndProgramScreen();
		goBackToMainMenue();
		break;
	}

}

enMainMenueOptions readMainMenueOption() {
	enMainMenueOptions option;
	short op;
	cout << "Choose what do you want to do?[1-6]?" << endl;
	cin >> op;
	option = (enMainMenueOptions)op;
	return  option;
}


enTransactionMenue readTransactionMenue() {
	enTransactionMenue option;
	short op;
	cout << "Choose what do you want to do?[1-4]?" << endl;
	cin >> op;
	option = (enTransactionMenue)op;
	return  option;
}

void showTransactionMenue() {
	system("cls");
	cout << "==============================================" << endl;
	cout << "\t\Transaction Menue Screen" << endl;
	cout << "==============================================" << endl;
	cout << "\t[1] Deposit" << endl;
	cout << "\t[2] Withdraw" << endl;
	cout << "\t[3] Total Balance" << endl;
	cout << "\t[4] Main menue" << endl;
	cout << "==============================================" << endl;
	performTransactionMenue(readTransactionMenue());

}
void showMainMenue() {
	system("cls");
	cout << "==============================================" << endl;
	cout << "\t\tMain Menue Screen" << endl;
	cout << "\t[1] Show Client list" << endl;
	cout << "\t[2] Add New Client" << endl;
	cout << "\t[3] Delete Client" << endl;
	cout << "\t[4] Update Client Information" << endl;
	cout << "\t[5] Find Client" << endl;
	cout << "\t[6] Transactions" << endl;
	cout << "\t[7] Exit" << endl;
	cout << "==============================================" << endl;
	perfomMainMenueOperation(readMainMenueOption());

}

int main() {
	showMainMenue();
	//system("pause");
	return 0;
}