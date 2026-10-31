#include<iostream>
using namespace std;
//float readNumberOfHours(string message){
//	float numOfHours;
//	do {
//		cout << message << endl;
//		cin >> numOfHours;
//	} while (numOfHours<=0);
//	return numOfHours;
//}
//
//float getNumOfDays(float numOfHours){
//	return numOfHours / 24;
//}
//float getNumOfWeeks(float numOfDays){
//	return numOfDays / 7;
//}
//
//float hoursToWeeks(float numOfHours){
//	return numOfHours /(24*7);
//}
//void printResult(float numOfDays,float numOfWeeks){
//	cout << numOfDays << "Days" << endl;
//	cout << numOfWeeks << "Weeks" << endl;
//}
////--------------------------------------------------#42-----------------------------------------------------
//float readPositiveNumber(string message) {
//	float number;
//	do {
//		cout << message << endl;
//		cin >> number;
//	} while (number <= 0);
//	return number;
//}
//struct stDuration {
//	int days, hours, minutes, secound;
//};
//
//stDuration readTimeDuration() {
//	stDuration myDuration;
//	 myDuration.days=readPositiveNumber("Please enter the number of days's");
//	 myDuration.hours = readPositiveNumber("Please enter the number of hour's");
//	 myDuration.minutes = readPositiveNumber("Please enter the number of minute's");
//	 myDuration.secound = readPositiveNumber("Please enter the number of secound's");
//	return myDuration;
//}
//
//int getTotalOfSecounds(stDuration myDuration){
//	int totalNumberOfSecounds;
//	totalNumberOfSecounds = myDuration.days * (24 * 60 * 60);
//	totalNumberOfSecounds+= myDuration.hours * ( 60 * 60);
//	totalNumberOfSecounds += myDuration.minutes * (60);
//	totalNumberOfSecounds += myDuration.secound;
//
//	return totalNumberOfSecounds;
//}
////------------------------------------------#43--------------------------------------------------
//struct stTaskDuration {
//	int numOfSecounds, numOfMinutes, numOfHours, numOfDays;
//};
//
//stTaskDuration secoundsToTaskDuration(int numOfSecounds){
//	int numOfSecoundsPeerDay=(24*60*60), numOfSecoundsPeerMinutes=(60), numOfSecoundsPeerHour(60*60);
//	stTaskDuration myTaskDuration;
//	int reminder = 0;
//	myTaskDuration.numOfDays = numOfSecounds /numOfSecoundsPeerDay;
//
//	reminder= numOfSecounds % numOfSecoundsPeerDay;
//
//	myTaskDuration.numOfHours = reminder / numOfSecoundsPeerHour;
//
//	reminder = reminder % numOfSecoundsPeerHour;
//	myTaskDuration.numOfMinutes = reminder / numOfSecoundsPeerMinutes;
//
//	reminder = reminder % numOfSecoundsPeerMinutes;
//
//	myTaskDuration.numOfSecounds = reminder;
//	return myTaskDuration;
//}
//void printTaskDuration(stTaskDuration myTaskDuration){
//	cout << "The task Duration is:" << myTaskDuration.numOfDays << ":" << myTaskDuration.numOfHours << ":" << myTaskDuration.numOfMinutes << ":" << myTaskDuration.numOfSecounds << endl;
//}
//--------------------------------------#44-----------------------------------------------
enum enDayOfWeek {
	SunDay=1,MonDay=2,TuesDay=3,WednesDay=4,ThursDay=5,FriDay=6,SaturDay=7
};


int readNumberInRange(string message,int from,int to) {
	int number=0;
	do {
		cout << message << endl;
		cin >> number;
	} while (number <from||number>to);
	return number;
} 

enDayOfWeek readDayOfWeek() {
	int number = readNumberInRange("Please enter Day of week:", 1, 7);
	return (enDayOfWeek)number;
}

string printDay(enDayOfWeek myDay){
switch(myDay){
case enDayOfWeek::SunDay:return "Sunday";
case enDayOfWeek::MonDay:return "MonDay";
case enDayOfWeek::TuesDay:return "TuesDay";
case enDayOfWeek::WednesDay:return "WednesDay";
case enDayOfWeek::ThursDay:return "ThursDay";
case enDayOfWeek::FriDay:return "FriDay";
case enDayOfWeek::SaturDay:return "SaturDay";
default:return"Not A valid Number";
}
}
//-------------------------------------------------#45------------------------------------
enum enMonthOfYear {
	January = 1, Febraury = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, Septamper = 9, Octoper = 10, November = 11, December = 12
};


//int readNumberInRange(string message, int from, int to) {
//	int number = 0;
//	do {
//		cout << message << endl;
//		cin >> number;
//	} while (number <from || number>to);
//	return number;
//}

enMonthOfYear readMonthOfYear() {
	int number = readNumberInRange("Please enter Month of the year:", 1, 12);
	return (enMonthOfYear)number;
}

string printMonth(enMonthOfYear myMonth) {
	switch (myMonth) {
	case enMonthOfYear::January:return "January";
	case enMonthOfYear::Febraury:return "Febraury";
	case enMonthOfYear::March:return "March";
	case enMonthOfYear::April:return "April";
	case enMonthOfYear::May:return "May";
	case enMonthOfYear::June:return "June";
	case enMonthOfYear::July:return "July";
	case enMonthOfYear::August:return "August";
	case enMonthOfYear::Septamper:return "Septamper";
	case enMonthOfYear::Octoper:return "Octoper";
	case enMonthOfYear::November:return "November";
	case enMonthOfYear::December:return "December";

	default:return"Not A valid Number";
	}
}



int main() {
	enMonthOfYear myMonth = readMonthOfYear();
	cout << "The selected Month is:" << printMonth(myMonth) << endl;
	
}