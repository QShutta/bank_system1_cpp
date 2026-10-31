//#pragma once
//
//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<vector>
//#include<fstream>
//using namespace std;
//
//struct stClientInfo {
//	string accountNumber;
//	string pinCode;
//	string name;
//	string phone;
//	double accountBalance;
//};
//
//
// namespace fileHandling {
//	
//
//	
//	 void printClient(stClientInfo client) {
//		 cout << "| " << left << setw(20) << client.accountNumber << "| ";
//		 cout << left << setw(20) << client.accountNumber << "| ";
//		 cout << left << setw(25) << client.name << "| ";
//		 cout << left << setw(20) << client.phone << "| ";
//		 cout << left << setw(20) << client.accountBalance << endl;
//	 }
//
//	 void printClients(vector<stClientInfo> vClients) {
//		 cout << "--------------------------------------------------------------------------";
//		 cout << "----------------------------------------------" << endl;
//
//		 cout << "\t\t\t\t\t List(" << vClients.size() << ")" << " Client(s)." << endl;
//		 cout << "--------------------------------------------------------------------------";
//		 cout << "----------------------------------------------" << endl;
//		 cout << "| " << left << setw(20) << "Account Number" << "| ";
//		 cout << left << setw(20) << "Pin Code" << "| ";
//		 cout << left << setw(25) << "Client Name" << "| ";
//		 cout << left << setw(20) << "Phone" << "| ";
//		 cout << left << setw(20) << "Balance" << endl;
//		 cout << "--------------------------------------------------------------------------";
//		 cout << "----------------------------------------------" << endl;
//		 for (stClientInfo& client : vClients) {
//			 printClient(client);
//			 cout << "--------------------------------------------------------------------------";
//			 cout << "----------------------------------------------" << endl;
//		 }
//	 }
//
//	 vector<stClientInfo> loadDataFromFileToVectorFun(string fName) {
//		 fstream clientFile;
//		 clientFile.open(fName, ios::in);
//		 string clientLine = "";
//		 stClientInfo client;
//		 vector<stClientInfo> clientsVector;
//		 if (clientFile.is_open()) {
//			 while (getline(clientFile, clientLine)) {
//				 client = convertStringToStruct(clientLine, "#//#");
//				 clientsVector.push_back(client);
//
//			 }
//		 }
//		 return clientsVector;
//
//	 }
//
//	 stClientInfo convertStringToStructFun090905(string  oneLine, string dilm = "#//#") {
//		 stClientInfo myClientInfo;
//		 vector<string> vClientData = stringConvert::mySplit(oneLine, dilm);
//
//		 myClientInfo.accountNumber = vClientData.at(0);
//		 myClientInfo.pinCode = vClientData.at(1);
//		 myClientInfo.name = vClientData.at(2);
//		 myClientInfo.phone = vClientData.at(3);
//		 myClientInfo.accountBalance = stod(vClientData.at(4));
//
//
//
//		 return myClientInfo;
//
//	 }
//}