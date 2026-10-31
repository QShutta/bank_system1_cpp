#include<iostream>
using namespace std;

struct stInfo {
	string fName;
	string lName;
	int age;
	string phone;
};

void readInfo(stInfo &myInfo){
	cout << "*******************Enter Data****************************" << endl;
	cout << "Please enter the first name:" << endl;
	cin >> myInfo.fName;
	cout << "Please enter the last name:" << endl;
	cin >> myInfo.lName;
	cout << "Please enter the age:" << endl;
	cin >> myInfo.age;
	cout << "Please enter the phone:" << endl;
	cin >> myInfo.phone;
	cout << "****************************End of person******************************" << endl;
}

void printInfo(stInfo myInfo){
	cout << "******************************" << endl;
	cout << "First Name:" << myInfo.fName << endl;
	cout << "Last Name:" << myInfo.lName << endl;
	cout << "age:" << myInfo.age << endl;
	cout << "Phone:" << myInfo.phone << endl;
	cout << "******************************" << endl;
}

void  readAllStruct(stInfo myIfno[100],int &length) {
	cout << "Please enter the number of person that you will enter:" << endl;
	cin >> length;
	for (int i = 0;i <= length - 1;i++) {
		cout << "Please enter peron" << i +1<< " info" << endl;
		readInfo(myIfno[i]);
	}
	//cout << "-------------------------------------------------------" << endl;
	//readInfo(myIfno[0]);
	//cout << "------------------------------------------------------" << endl;
	//readInfo(myIfno[1]);
	//cout << "-------------------------------------------------------" << endl;
}

void printAllPersons(stInfo myInfo[2],int length) {
	for (int i = 0;i <= length - 1;i++) {
		cout << "The info of person " << i << " info are:" << endl;
		printInfo(myInfo[i]);
	}
	//printInfo(myInfo[0]);
	//printInfo(myInfo[1]);
}

int main() {
	stInfo persons[100];
	int length;
	readAllStruct(persons,length);
	printAllPersons(persons,length);
	//readAllStruct(persons);
	//printAllPersons(persons);

}