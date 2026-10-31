#include<iostream>
using namespace std;

enum enWeekDay{Sunday,Monday,Tusday,WednesDay,Thursday,Friday,Saturday};

void showWeekDay() {
	cout << "WeekDay" << endl;
	cout << "**********************************" << endl;
	cout << "(1)Sunday" << endl;
	cout << "(2)Monday" << endl;
	cout << "(3)Tusday" << endl;
	cout << "(4)Wednesay" << endl;
	cout << "(5)Thursday" << endl;
	cout << "(6)Friday" << endl;
	cout << "(7)Saturday" << endl;
	cout << "**********************************" << endl;
}

enWeekDay getWeekDay(enWeekDay myWeek){
	int we;
	cin >> we;
	myWeek = (enWeekDay)we;
	return myWeek;
}

void printWeekDay(enWeekDay myWeek){
	switch(myWeek){
	case enWeekDay::Sunday:cout << "Sunday";break;
	case enWeekDay::Monday:cout << "Monday";break;
	case enWeekDay::Tusday:cout << "TusDay";break;
	case enWeekDay::WednesDay:cout << "WednesDay";break;
	case enWeekDay::Thursday:cout << "ThursDay";break;
	case enWeekDay::Friday:cout << "Friday";break;
	case enWeekDay::Saturday:cout << "Saturday";break;
	default:cout << "Please select a valid number" << endl;
	}
}


int main() {
	enWeekDay myWeekDay;
	showWeekDay();
	printWeekDay(getWeekDay(myWeekDay));

}