#include<iostream>
#include<fstream>
using namespace std;

int main() {
	fstream myFile;
	//By this way we say to him if the file is not exist create it:ios::out
	//If the file is exist append to it.

	myFile.open("myFile.text",ios::out|ios::app);


	if(myFile.is_open()){
		myFile << "This is the first addition to the file" << endl;
		myFile << "This is the secound addition to the file" << endl;
		myFile.close();
	}
}