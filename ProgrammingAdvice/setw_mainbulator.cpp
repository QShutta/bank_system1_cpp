#include<iostream>
//To be able to use the "setW" you have to include iomanip
#include<iomanip>;
using namespace std;

int main() {
	//setw is used as a minuplator because is used to controll on the shape of the cout
	//cout << setw(20)<<"How are you" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << setw(9) << "Code" << "|" << setw(32) << "Name" << "|" << setw(9) << "Mark" << "|" << endl;
	cout << "-------------------------------------------------------------" << endl;
	//cout << "C109"<<"|" << "Netwroking" << "|" << endl;
	//cout << "C10919" << "|" << "Humean computer interaction" << "|" << endl;
	//cout << "C11299309" << "|" << "Software engenering" << "|" << endl;
	
	cout << setw(9)<<"C109"<<"|" << setw(32) << "Netwroking" << "|"<< setw(9)<<"99" <<"|" << endl;
	cout << setw(9) << "C10992" << "|" << setw(32) << "Human Computer interaction" << "|" << setw(9) << "12" << "|" << endl;
	cout << setw(9) << "C12329309" << "|" << setw(32) << "Software Engenering" << "|" << setw(9) << "33" << "|" << endl;

	cout << "---------------------------------------------------------------" << endl;

}