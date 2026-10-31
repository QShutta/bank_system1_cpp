#include<iostream>
#include<fstream>
using namespace std;

int main() {

	fstream myFile;

	//myFile.text is the file name
	//ios::out: we give him the permision to write
	//The write mode or the out mode will erease all of the data in the file and start writing from the 
	//begining.
	myFile.open("myFile.text",ios::out);

	if(myFile.is_open()){
		myFile << "This is the CMG line" << endl;
		myFile << "This is the PNE line" << endl;
		myFile << "This is the CNG line" << endl;

		myFile.close();

	}

}