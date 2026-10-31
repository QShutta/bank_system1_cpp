//#include<iostream>
//using namespace std;
//
//struct stInfo {
//	string fName;
//	string lName;
//	int age;
//	string phone;
//};
//
//void readInfo(stInfo  &myInfo) {
//	cout << "Please enter you'r first Name:" << endl;
//	cin >> myInfo.fName;
//	cout << "Please enter you'r last Name:" << endl;
//	cin >> myInfo.lName;
//	cout << "Please enter you'r age:" << endl;
//	cin >> myInfo.age;
//	cout << "Please enter you'r phone:" << endl;
//	cin >> myInfo.phone;
//}
//
//void printInfo(stInfo myInfo) {
//	cout << "***********************************" << endl;
//	cout << "First Name:" << myInfo.fName << endl;
//	cout << "Last Name:" << myInfo.lName << endl;
//	cout << "Age:" << myInfo.age << endl;
//	cout << "Phone:" << myInfo.phone << endl;
//	cout << "***********************************" << endl;
//}
//
//
//int main() {
//	stInfo personOne;
//	stInfo personTow;
//	cout << "----------------------read Data------------------------------------------" << endl;
//	readInfo(personOne);
//	readInfo(personTow);
//	cout << "--------------------------Print Data-------------------------------------" << endl;
//	printInfo(personTow);
//	printInfo(personOne);
//
//}





//--------------------------------------Home Work------------------------------------

#include<iostream>
using namespace std;
enum enGender {
	Male,Female
};
struct stInfo {
	string fName;
	string lName;
	int age;
	string countery;
	double monthlySalary;
	double yearlySalary;
	//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	//How to use the enum wiht the gender if i want to recive the data from the user.
	string gender;
	int MarriStatus;
};

void readData(stInfo &myInfo){
	cout << "Please enter the first name:" << endl;
	cin >> myInfo.fName;

	cout << "Please enter the Last name:" << endl;
	cin >> myInfo.lName;

	cout << "Please enter the age:" << endl;
	cin >> myInfo.age;

	cout << "Please enter the countery:" << endl;
	cin >> myInfo.countery;

	cout << "Please enter the monthly salary:" << endl;
	cin >> myInfo.monthlySalary;

	cout << "Please enter the yearly salary:" << endl;
	cin >> myInfo.yearlySalary;

	cout << "Please enter the gender:" << endl;
	cin >> myInfo.gender;


	cout << "Please enter the Marital status:" << endl;
	cin >> myInfo.MarriStatus;

}

void printInfo(stInfo myInfo) {
	cout << "*********************************************************" << endl;
	cout << "Name:" << myInfo.fName << " " << myInfo.lName << endl;
	cout << "Age:" << myInfo.age << " years" << endl;
	cout << "Countery:" << myInfo.countery <<endl;
	cout << "Monthly Salary:" << myInfo.monthlySalary << endl;
	cout << "Yearly Salary:" << myInfo.yearlySalary << endl;
	cout << "Gender:" << myInfo.gender << endl;
	cout << "Marital Status:" << myInfo.MarriStatus << endl;
	cout << "*********************************************************" << endl;
}

int main() {
	stInfo person1;
	readData(person1);
	printInfo(person1);
}