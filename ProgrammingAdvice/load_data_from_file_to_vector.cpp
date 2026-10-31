#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;



void loadDataFromFileToVector(string fileName,vector<string> &vecName){
	fstream myFile;
	myFile.open(fileName,ios::in);

	if (myFile.is_open()) {
		string line;
		while(getline(myFile,line)){
			vecName.push_back(line);
		}
		myFile.close();
	}
}






int main() {
	vector<string> vMyVector;
	loadDataFromFileToVector("myFile.text",vMyVector);
	for(string &line:vMyVector){
		cout << line << endl;
	}
}