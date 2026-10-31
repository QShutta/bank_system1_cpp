#include<iostream>
using namespace std;

enum enMonth{January=1,Febrauary,March,April,May,June,July,Augeust,Septemper,Octoper,November,December};

void showMenu() {
	cout << "*************************" << endl;
	cout << "Monthes of the year" << endl;
	cout << "*************************" << endl;
	cout << "(1)January" << endl;
	cout << "(2)February" << endl;
	cout << "(3)March" << endl;
	cout << "(4)April" << endl;
	cout << "(5)May" << endl;
	cout << "(6)June" << endl;
	cout << "(7)July" << endl;
	cout << "(8)August" << endl;
	cout << "(9)Septemper" << endl;
	cout << "(10)Octoper" << endl;
	cout << "(11)November" << endl;
	cout << "(12)December" << endl;
	cout << "*************************" << endl;
}

enMonth readMonth() {
	int mo;
	cin >> mo;
	enMonth month;
	month = (enMonth)mo;
	return month;

}

string printMonth(enMonth mySelectedMonth){
switch(mySelectedMonth){
case enMonth::January:return "January";
case enMonth::Febrauary:return "January";
case enMonth::March:return "March";
case enMonth::April:return "April";
case enMonth::May:return "May";
case enMonth::June:return "June";
case enMonth::July:return "July";
case enMonth::Augeust:return "August";;
case enMonth::Septemper:return "Septemper";
case enMonth::Octoper:return "January";
case enMonth::November:return "November";
case enMonth::December:return "December";
default:return "Wrong Selected Month";

}
}
int main() {
	enMonth myMonth;
	showMenu();
	cout << "The user select:" << printMonth(readMonth()) << endl;

}