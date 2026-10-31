#include<iostream>
using namespace std;
//
//struct stAddress {
//	string country;
//	string city;
//	string street;
//};
//
//struct stOwner {
//	string name;
//	int dateOfBirth;
//	string phoneNumber;
//	stAddress address;
//};
//
//
//struct Car {
//	string brand;
//	string model;
//	int year;
//	stOwner owner1;
//};
//
//
//int main() {
//	Car myCar1,myCar2;
//	myCar1.brand = "BMW";
//	myCar1.model = "X5";
//	myCar1.year = 2001;
//	myCar1.owner1.name = "Abu-elgasim Shutta";
//	myCar1.owner1.dateOfBirth = 2001;
//	myCar1.owner1.phoneNumber = "0909054928";
//	myCar1.owner1.address.country = "sudan";
//	myCar1.owner1.address.city = "Khartoum";
//	myCar1.owner1.address.street = "Alhajyousif";
//
//
//	myCar2.brand = "Toyta";
//	myCar2.model = "LandCruzer";
//	myCar2.year = 2025;
//	cout << myCar1.brand << "	" << myCar1.model << "	" << myCar1.year << myCar1.owner1.name << "	" << myCar1.owner1.phoneNumber << "	" << myCar1.owner1.address.city << endl;
//	cout << myCar2.brand << "	" << myCar2.model << "	" << myCar2.year << endl;
//
//}
//---------------------------------------------HomeWork-----------------------------------

struct stAddress {
	string country;
	string city;
	string street;
	string postalCode;
};


struct stContactInfo {
	string phoneNumber;
	string email;
	string facebookAcount;
	string whatsappNumber;
	string linkedinAccountLink;
};
struct stName {
	string fName;
	string mName;
	string lName;
};
struct ownerInfo {
	stName name;
	int age;
	stAddress address;
	double monthlySalary;
	double yearlySalary;
	string gender;
	int MarriedStatus;
	stContactInfo contactInfo;
};

int main() {
	ownerInfo owner1;
	owner1.name.fName = "Abu-Elgasim";
	owner1.name.mName = "Mohmed";
	owner1.name.lName = "Ibrahim";
	
	owner1.age = 25;
	owner1.address.country = "Sudan";
	owner1.address.city = "Khartoum";
	owner1.address.postalCode = "11111";
	owner1.address.street = "AlhajYosif Street";
	owner1.monthlySalary = 2500000;
	owner1.yearlySalary = 30000000;
	owner1.gender = "Male";
	owner1.MarriedStatus = 0;
	owner1.contactInfo.email = "abolkasm11@gmail.com";
	owner1.contactInfo.facebookAcount = ";alskjdf;laksjdf;lakjf";
	owner1.contactInfo.linkedinAccountLink = ";alskjdf;laksjdf;lakjf";
	owner1.contactInfo.whatsappNumber = "0909054928";
	owner1.contactInfo.phoneNumber = "0129956671";

	cout <<owner1.name.fName<<" " <<owner1.name.mName<<" " <<owner1.name.lName<<"	" << owner1.age << "		" << owner1.address.country << "	" << owner1.address.city << "	" << owner1.address.postalCode << "	 " << owner1.address.street << endl;
	cout << owner1.monthlySalary << "	" << owner1.yearlySalary << "	" << owner1.gender << "	 " << owner1.MarriedStatus << "	 " << owner1.gender << "	" << owner1.contactInfo.facebookAcount << "		" << owner1.contactInfo.email << "	 " << owner1.contactInfo.phoneNumber << "	" << owner1.contactInfo.whatsappNumber;

}