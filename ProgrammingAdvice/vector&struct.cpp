#include<iostream>
#include<vector>
using namespace std;

//H.W:

struct stEmployee {
	string firstName = "";
	string lastName = "";
	float salary = 0.0;
};
//
void addEmploye(vector<stEmployee> &vEmployee){
	char userChoice = 'Y';
	stEmployee tempEmployee;
	do {
		cout << endl;
		cout << "Please enter the first name:" << endl;
		cin >> tempEmployee.firstName;

		cout << "Please enter the last name:" << endl;
		cin >> tempEmployee.lastName;

		cout << "Please enter the salary:" << endl;
		cin >> tempEmployee.salary;

		vEmployee.push_back(tempEmployee);


		cout << "Do you want to add more employees? Y/N" << endl;
		cin >> userChoice;
	} while (userChoice=='y'||userChoice=='Y');

}

void printEmployee(vector<stEmployee>& vEmployee) {
	for(stEmployee &emp:vEmployee){
		cout << emp.firstName << endl;
		cout << emp.lastName << endl;
		cout << emp.salary << endl;
		cout << endl;
	}
}

int main() {
	vector<stEmployee> vEmployee;
	addEmploye(vEmployee);
	printEmployee(vEmployee);
}


//int main() {
//
//	vector<stEmployee> vEmployee;
//	stEmployee tempEmployee;
//	tempEmployee.firstName = "Abuelgasim";
//	tempEmployee.lastName = "Shutta";
//	tempEmployee.salary = 60000.0;
//	vEmployee.push_back(tempEmployee);
//
//	tempEmployee.firstName = "Noah";
//	tempEmployee.lastName = "Siraj";
//	tempEmployee.salary = 200000.0;
//	vEmployee.push_back(tempEmployee);
//
//	tempEmployee.firstName = "Mona";
//	tempEmployee.lastName = "Alhadi";
//	tempEmployee.salary = 90000.0;
//	vEmployee.push_back(tempEmployee);
//
//
//	//Why did we use the & to refere directly to the actualo memory location.to make the proccess faster
//	//if we didn't use the & it will create a nother copy of the vEmployee vector  and start work from it 
//	for(stEmployee & emp:vEmployee){
//		cout << emp.firstName << endl;
//		cout << emp.lastName << endl;
//		cout << emp.salary << endl;
//		cout << endl;
//
//	}
//
//	//for (int i = 0;i < 3;i++) {
//	//	cout << vEmployee[i].firstName << endl;
//	//	cout << vEmployee[i].lastName << endl;
//	//	cout << vEmployee[i].salary << endl;
//	//	cout << endl;
//	//}
//
//
//
//}