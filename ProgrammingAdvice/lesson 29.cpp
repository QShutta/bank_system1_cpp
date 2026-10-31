#include<iostream>
using namespace std;

enum enColor{Red,Green,blue,White};
enum enGender{Male,FeMale};
enum enMaritalStatus{Single,Married};

struct stAddress {
	string Country;
	string City;
	string Street;
};

struct stContactInfo {
	string email;
	string whasapNumber;
	string phoneNumber;
	stAddress address;
};

struct stName {
	string fName;
	string lName;
};

struct stPerson {
	stName name;
	int age;
	stContactInfo contactInfo;
	enMaritalStatus maritaleStatus;
	enGender gender;
	enColor color;
};
int main() {
	stPerson person;
	person.name.fName = "Abu-algasim";
	person.name.lName = "Ibrahim";
	person.age = 25;

	person.contactInfo.email = "abolkasm11@gmail.com";
	person.contactInfo.phoneNumber = "0909054928";
	person.contactInfo.whasapNumber = "0129956671";
	person.contactInfo.address.Country = "Sudan";
	person.contactInfo.address.City = "khartoum";
	person.contactInfo.address.Street = "Alhajyosif Street";

	person.gender = enGender::Male;
	person.maritaleStatus = enMaritalStatus::Single;
	person.color = enColor::Green;

	cout << "*********************************" << endl;
	cout <<"Name: " << person.name.fName << " " << person.name.lName << endl;
	cout <<"Age:" << person.age << endl;
	cout << "email:" << person.contactInfo.email << endl;
	cout << "PhoneNumber:" << person.contactInfo.phoneNumber << endl;
	cout << "WhatsappNumber:" << person.contactInfo.whasapNumber << endl;
	
	cout << "Country:" << person.contactInfo.address.Country << endl;
	cout << "City:" << person.contactInfo.address.City << endl;
	cout << "street:" << person.contactInfo.address.Street << endl;

	cout << "Gender:" << person.gender << endl;
	cout << "Marital Status:" << person.maritaleStatus << endl;
	cout << "Color:" << person.color << endl;


	





}