#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include"convert_string.h";
using namespace std;

struct stClientInfo {
	string accountNumber;
	string pinCode;
	string name;
	string phone;
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
//
//void printHeader() {
//	cout << "\t\t\t\t\tClient List (3) Client(s)\t\t\t\t\t" << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
//	printf("|\t%s\t|\t%s\t|\t%s\t\t|\t%s\t|\t%s\n", "Acount Number","PIN code","Client Name","Phone","Balance");
//	//cout << "--------------------------------------------------------------------------------------------------------------" << endl;
//}
//
//void printStruct(stClientInfo& myClientInfo) {
//	cout << "|" << setw(23) << myClientInfo.accountNumber << "|"  << setw(23) << myClientInfo.pinCode << "|" <<setw(30) << myClientInfo.name << "|"  << setw(15) << myClientInfo.phone << "|"  << setw(23) << myClientInfo.accountBalance << "|"<<  endl;
//	printf("|\t%s\t|\t%s\t|\t%s\t\t|\t%s\t|\t%f\n", myClientInfo.accountNumber, myClientInfo.pinCode, myClientInfo.name, myClientInfo.phone, myClientInfo.accountBalance);
//	//printf("%s",myClientInfo.accountNumber);
//}
//
//
//void splitFileToLines(string fileName) {
//	fstream myFile;
//	string line="";
//	stClientInfo myClientInfo;
//
//	myFile.open(fileName,ios::in);
//
//	if(myFile.is_open()){
//		while (getline(myFile, line)) {
//			
//			myClientInfo = convertStringToStruct(line);
//			printStruct(myClientInfo);
//	}
//	}
//}
//
//int main() {
//	printHeader();
//	splitFileToLines("client.text");
//}


//The instructor solution:

vector<stClientInfo> loadClients(string fName) {
	fstream clientFile;
	clientFile.open(fName,ios::in);
	string clientLine = "";
	stClientInfo client;
	vector<stClientInfo> clientsVector;
	if(clientFile.is_open()){
		while (getline(clientFile,clientLine)) {
			client = convertStringToStruct(clientLine,"#//#");
			clientsVector.push_back(client);

	}
	}
	return clientsVector;

}

void printClient(stClientInfo client){
	cout << "| " << left << setw(20) << client.accountNumber<< "| ";
	cout << left << setw(20) << client.accountNumber << "| ";
	cout << left << setw(25) << client.name << "| ";
	cout << left << setw(20) << client.phone << "| ";
	cout << left << setw(20) << client.accountBalance << endl;
}

void printClients(vector<stClientInfo> vClients){
	cout << "--------------------------------------------------------------------------";
	cout<<"----------------------------------------------" << endl;

	cout << "\t\t\t\t\t List(" << vClients.size() << ")" << " Client(s)." << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	cout << "| " << left << setw(20) << "Account Number" << "| ";
	cout << left << setw(20) << "Pin Code" << "| ";
	cout << left << setw(25) << "Client Name" << "| ";
	cout  <<left << setw(20) << "Phone" << "| ";
	cout <<  left << setw(20) << "Balance" << endl;
	cout << "--------------------------------------------------------------------------";
	cout << "----------------------------------------------" << endl;
	for(stClientInfo& client:vClients){
		printClient(client);
		cout << "--------------------------------------------------------------------------";
		cout << "----------------------------------------------" << endl;
	}
}

int main() {
	vector<stClientInfo> vClients = loadClients("client.text");
	printClients(vClients);
}