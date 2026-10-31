////#include<iostream>
////using namespace std;
////
//////The defult start for enum is 0 here we assign diff numbers to represent the value and start from 1
////enum enScreenColor{Red=1,Blue=2,Green=3,Yellow=4};
////
////void readColor(int &c,enScreenColor &color) {
////	cout << "**********************************************" << endl;
////	cout << "Please enter the number of your color?" << endl;
////	cout << "(1) Red" << endl;
////	cout << "(2) Blue" << endl;
////	cout << "(3) Green" << endl;
////	cout << "(4) Yellow" << endl;
////	cout << "**********************************************" << endl;
////	cout << "Your Choice?" << endl;
////	cin >> c;
////	//Will do type casting to convert from number to enum
////	//It convert the number to his an equilvent enum and store it in the color enum
////	color = (enScreenColor)c;
////}
////
////int main() {
////	int c;
////	enScreenColor color;
////	readColor(c,color);
////	if (color == enScreenColor::Red) {
////		//What did the system 4F do ?
////		//Is it the part that is responsible from changing the terminal color?
////		system("color 4F");
////	}
////	else if (color == enScreenColor::Blue) {
////		system("color 1F");
////	}
////	else if (color == enScreenColor::Green) {
////		system("color 2F");
////	}
////	else if (color == enScreenColor::Yellow) {
////		system("color 6F");
////	}
////	else {
////		system("color 4F");
////	}
////
////
////}
////-------------------------------------------example2-----------------------------------------------
//#include<iostream>
//using namespace std;
//
//enum enCounteryChoise {
//	Jordan = 1, Tunis = 2, Aljeria = 3, Oman = 4, Egypt = 5, Iraq = 6, other = 7
//};
//
//void readCountery(enCounteryChoise &counteryChoise) {
//	cout << "Please enter the countery" << endl;
//	cout << "(1) Jordan" << endl;
//	cout << "(2) Tunis" << endl;
//	cout << "(3) Aljeria" << endl;
//	cout << "(4) Oman" << endl;
//	cout << "(5) Egypt" << endl;
//	cout << "(6) Iraq" << endl;
//	cout << "(7) Other" << endl;
//	cout << "**********************************************" << endl;
//	int c;
//	cin >> c;
//	counteryChoise = (enCounteryChoise)c;
//}
//
//void printCountery(enCounteryChoise countery) {
//	if (countery == enCounteryChoise::Jordan) {
//		cout << "Jordan";
//	}
//	else if (countery == enCounteryChoise::Tunis) {
//		cout << "Tunis" << endl;
//	}
//	else if (countery == enCounteryChoise::Aljeria) {
//		cout << "Aljeria" << endl;
//	}
//	else if (countery == enCounteryChoise::Oman) {
//		cout << "Oman" << endl;
//	//}
//	else if (countery == enCounteryChoise::Egypt) {
//		cout << "Egypt" << endl;
//	}
//	else if (countery == enCounteryChoise::Iraq) {
//		cout << "Iraq" << endl;
//	}
//	else {
//		cout << "Other" << endl;
//	}
//}
//
//int main() {
//	enCounteryChoise myCountery;
//	readCountery(myCountery);
//	printCountery(myCountery);
//}

#include<iostream>
using namespace std;


enum enColor{Blue,Green,Yellow,Pruple};

void readColor(enColor &color) {
	int c;
	cout << "**************************************" << endl;
	cout << "(1) Red" << endl;
	cout << "(2) Blue" << endl;
	cout << "(3) Yellow" << endl;
	cout << "(4) Pruple" << endl;
	cout << "**************************************" << endl;
	cin >> c;
	color = (enColor)c;
}

void implementColor(enColor color){
	if(color==enColor::Blue){
		system("color 4F");
	}else if(color==enColor::Green){
		system("color 20");
	}else if(color==enColor::Yellow){
		system("color 61");

	}else if(color==enColor::Pruple){
		system("color 5E");
	}
	else {
		system("color 0F");
	}
}


int main() {
	enColor myColor;
	readColor(myColor);
	implementColor(myColor);
}