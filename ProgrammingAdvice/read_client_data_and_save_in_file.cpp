#include<iostream>
#include<string>
#include<fstream>

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


stClientInfo readClientInfo() {
	stClientInfo  clientInfo;

	cout << "Please enter the account number:";
	//There is an important point is that we use the >>ws.
	//because when we use the getlien+cin it leave /n at the end and we use the 
	//ws to discard from the empty space ,enter,/n...
	getline(cin>>ws, clientInfo.accountNumber);



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
	string text ="";
	text= clientInfo.accountNumber + dilm;
	text += clientInfo.pinCode + dilm;
	text += clientInfo.name + dilm;
	text += clientInfo.phone + dilm;
	text += to_string(clientInfo.accountBalance) + dilm;
	text = text.substr(0, text.length() - dilm.length());
	return text;

}

char readUserChoice(){
	char c1 = ' ';
	cout << "Client Added Succfuly do you want to add more client?" << endl;
	cin >> c1;


	return c1;
}


//int main() {
//	fstream myFile;
//
//	myFile.open("myFile.text", ios::out | ios::app);
//
//	stClientInfo client;
//	string oneLine = "";
//	char userChoice = 'y';
//
//	while(userChoice=='Y'||userChoice=='y') {
//		readClientInfo(client);
//		oneLine = convertStructToOneLine(client, "#//#");
//		
//
//		if (myFile.is_open()) {
//			myFile << oneLine << endl;
//
//		}
//		
//		userChoice = readUserChoice();
//		system("cls");
//		
//	}
//	myFile.close();
//	
//	
//}


//The instructor solution:------------------------------------------

void addClientToFile(string fileName,string client){
	fstream clientFile;
	clientFile.open(fileName,ios::out|ios::app);
	if(clientFile.is_open()){
		clientFile << client << endl;
		//I think the close line location is wirred why ?that means after each client 
		//we close the file?Ammm? it look a right folow we add client and then close the file 
		//if we want to add another client we do OPEN THE FILE AND CLOSE IT AGAIN .
		clientFile.close();
	}
}

void AddNewClient() {
	stClientInfo client;
	string clientInOneLine = "";
	client = readClientInfo();
	clientInOneLine = convertStructToOneLine(client,"#//#");
	addClientToFile("client.text",clientInOneLine);
}

void addClients() {
	char addMore = 'Y';
	do {
		system("cls");
		AddNewClient();
		addMore = readUserChoice();
	} while (toupper(addMore) == 'Y');
}

int main() {
	addClients();
}