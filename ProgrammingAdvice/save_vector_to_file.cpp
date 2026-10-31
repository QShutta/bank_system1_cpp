#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


void saveVectorToFile(string fileName,vector<string> vNames) {
	fstream myFile;
	myFile.open("myFile.text",ios::out);
	//Comment to explain:
	//this to make sure that the file is open:
	if(myFile.is_open()){
		//this to loop throw the elemnts of the vector
	for(string line:vNames){
		//here we do check if the line is not empty ?if it's not we add the line to the file
	if(line!="") {
		myFile << line << endl;
	}
	}
	myFile.close();
	}


}

int main() {
	vector<string> vNames = {"Abobkar","Noha","Khalit","Alamin","Yosif"};
	saveVectorToFile("myFile.text",vNames);

}