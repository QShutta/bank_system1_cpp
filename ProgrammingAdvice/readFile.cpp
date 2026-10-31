#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void printFileContent(string fileName){
	//This is an instance of the file class
	fstream myFile;
	//we give it the permision to read from the file read only
	myFile.open(fileName,ios::in);
	//We do check if the file open
	if(myFile.is_open()){
		//we make a var from string type that will store the line each time
		string line;
		// getline() reads one line from the file and stores it in the "line" variable.
		// Each time the loop runs, it reads the next line until there are no more lines.
		while (getline(myFile, line)) {
			cout << line << endl;
		
	}
	}
	myFile.close();
}

int main() {
	printFileContent("myFile.text");
}