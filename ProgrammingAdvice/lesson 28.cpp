#include<iostream>
using namespace std;

//enum color{read=100,green=200,blue=300,black=400};
//enum weekDays{saturday,sunday,monday,tuesday,wednesday,thursday,friday};
//enum gender{male,female};
//enum networkStatus{online,offline,serverfailure,faliure,loading};
//enum status{single,married};
//enum directions{south,north,west,east};
//
//int main() {
//	color myColor;
//	weekDays today;
//	gender myGender;
//	networkStatus myNetwork;
//	status marigeStatus;
//	directions myDirection;
//
//
//	myColor = color::read;
//	today = weekDays::tuesday;
//	myGender = gender::male;
//	myNetwork = networkStatus::online;
//	marigeStatus = status::married;
//	myDirection = directions::west;
//
//
//	cout << myColor << "	" << today << "		" << myGender << "	" << myNetwork << "		" << marigeStatus << "		" << myDirection;
//}

//--------------------------------------------HomeWork-----------------------------------
struct stName {
	string fName;
	string lName;
};
struct stAddress {
	string country;
	string city;
	string street;
};
enum enGender {
	Male, Female
};
enum enMarriStatus {
	Single=100,Married=200
};
struct  stPerson
{
	stName name;
	int age;
	stAddress address;
	double monthlySalary;
	double yearlySalary;
	enGender gender;
	enMarriStatus marriStatus;
};

int main() {
	stPerson person;
	cout << "Please enter the first name" << endl;
	cin >> person.name.fName;
	cout << "Please enter the secound name" << endl;
	cin >> person.name.lName;
	cout << "Please enter the country" << endl;
	cin >> person.address.country;
	cout << "Please enter the city" << endl;
	cin >> person.address.city;
	cout << "Please enter the street" << endl;
	cin >> person.address.street;

	cout << "Please enter the Age" << endl;
	cin >> person.age;
	cout << "Please enter the monthly Salary" << endl;
	cin >> person.monthlySalary;
	cout << "Please enter the yearly Salary" << endl;
	cin >> person.yearlySalary;
	person.gender = enGender::Male;
	person.marriStatus = enMarriStatus::Single;

	//---------------------------------------------------------
	cout << "**************************************" << endl;
	cout << "Name:" << person.name.fName << " " << person.name.lName << endl;
	cout << "Age:" << person.age << " " << "Years" << endl;
	cout << "Address:" << person.address.country << " " << person.address.city << " " << person.address.street << endl;
	cout << "Monthly Salary:" << person.monthlySalary << endl;
	cout << "Yearly Salary:" << person.yearlySalary << endl;
	cout << "Gender:" << person.gender << endl;
	cout << "Married Status:" << person.marriStatus << endl;
	cout << "*****************************************" << endl;










}