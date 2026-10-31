#pragma warning(disable:4996)
#include<iostream>
#include<ctime>
using namespace std;

int main() {
	time_t tn = time(0);
	//The localtime will return the address of struct taht contian data/time in a reaable format ?
	tm* tt = localtime(&tn);

	cout << "The secound in the day:" << tt->tm_sec << endl;
	cout << "The minutes in the day:" << tt->tm_min << endl;
	cout << "The hour in the day:" << tt->tm_hour << endl;
	cout << "The month day in the day:" << tt->tm_mday << endl;
	cout << "The week day in the day:" << tt->tm_wday+1 << endl;
	cout << "The day according to the year:" << tt->tm_yday << endl;

	cout << "The month in of the year:" << tt->tm_mon+1 << endl;
	cout << "The year" << tt->tm_year+1900 << endl;




}