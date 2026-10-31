//sqrt بتديك الجذر التربيعي 
/*فهمك ممتاز جداً؛ الجذر التربيعي 
(Square Root) 
لعدد معين هو ببساطة: "ما هو الرقم الذي إذا ضربته في نفسه يعطيك هذا العدد؟"💡
أمثلة لتأكيد الفكرةجذر $9$ هو $3$ 👈 لأن $3
\times 3 = 9$جذر $16$ هو $4$ 👈 لأن $4 \times 4 = 16$جذر $64$ هو $8$ 👈 لأن $8 \times 8 = 64$*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//int x = 64;
 //  cout<<sqrt(x) << endl;
 //  cout << sqrt(50) << endl;
	//---------------------------------(round)---------------------------------
	//cout << round(2.4) << endl;//2
	//cout << round(2.5) << endl;//3
	//cout << round(2.7) << endl;//3
	////---------------------------
	//cout << (sqrt(50)) << endl;//7.0
	//cout << round(sqrt(50)) << endl;//7
	//cout << round(2.4) + round(5.6) << endl;//8
	//cout << round(2.4) / 2 << endl;
	//--------------------------------(POW)----------------------------------
	//int x = 2;
	//int y = 4;
	//cout << "The pow of x^y:	" << pow(x, y) << endl;
	//cout << "The pow of 4^3:	" << pow(4, 3) << endl;
	//------------------------------celi&&floor------------------------
	//cout << ceil(2.9 ) << endl;//3
	//cout << floor(2.9) << endl;//2

	//cout << ceil(-2.9) << endl;//-2
	//cout << floor(-2.9) << endl;//-3

	//cout << floor(2.1) << endl;
	//---------------------------------abs---------------------------------
	//cout << abs(-10) << endl;
	//cout << abs(10) << endl;
	//-----------------------------------16-------------------------
	//double a, d,area;
	//cout << "Please enter a:" << endl;
	//cin >> a;
	//cout << "Please enter d:" << endl;
	//cin >> d;
	//area = (a * (sqrt(pow(d, 2) - pow(a, 2))));
	//cout << "The are is:" << area << endl;
	//--------------------------------18--------------------------
	//float d, area;
	//const float bi = 3.14;
	//cout << "Please enter the value of r" << endl;
	//cin >> r;
	//area = (bi * (pow(r, 2)));
	//cout << "The area is:" << area << endl;
	//---------------------------19-------------------------------
	//float d, area;
	//const float bi = 3.14;
	//cout << "Please enter the value of r" << endl;
	//cin >> d;
	//area = ((bi * (pow(d, 2)))/4);
	//cout << "The area is:" << area << endl;
	//------------------------------20---------------------------------
	//float r, area;
	//const float bi = 3.14;
	//cout << "Please enter the value of r:" << endl;
	//cin >> r;
	//area = ((bi * (pow(r, 2))) / 4);
	//cout << area << endl;
	//------------------------------21-------------------
	//float l, area;
	//const float bi = 3.14;
	//cout << "Please enter the value of r:" << endl;
	//cin >> l;
	//area = ((pow(l, 2)) / (4 * bi));
	//cout << area << endl;
	//---------------------------------22---------------------------
	//float a, b, area;
	//const float pi = 3.14;
	//cout << "Please enter the value of a:" << endl;
	//cin >> a;
	//cout << "Please enter the value of b:" << endl;
	//cin >> b;
	//area = (pi * ((pow(b, 2)) / 4)*((2*a-b)/(2*a+b)));
	//cout << "The area is :" << area << endl;
	//--------------------------------23-------------------------
	//float a, b,c,p, area;
	//const float pi = 3.14159;
	//cout << "Please enter the value of a:" << endl;
	//cin >> a;
	//cout << "Please enter the value of b:" << endl;
	//cin >> b;
	//cout << "Please enter the value of c:" << endl;
	//cin >> c;
	//p = ((a + b + c) / 2);
	//area =pi* (pow(((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)))), 2));
	//cout << "The area is:" << area << endl;
	//-----------------------------31----------------------------------
	//int a;
	//cout << "Please enter the value of a:" << endl;
	//cin >> a;

	//cout << pow(a, 2) << endl;
	//cout << pow(a, 3) << endl;
	//cout << pow(a, 4) << endl;
	//------------------------------32---------------------------------

	//int number,m;
	//cout << "Please enter the value of number:" << endl;
	//cin >> number;
	//cout << "Please enter the value of m:" << endl;
	//cin >> m;
	//cout << pow(number, m) << endl;
	//--------------------------------42----------------------------------
//int days, hours, minutes, secounds;
//float result,numOfSecoundPerDay,numOfSecoundPerHour,numOfSecoundPerMinute;
//cout << "Enter number of days" << endl;
//cin >> days;
//cout << "Enter number of hours" << endl;
//cin >> hours;
//cout << "Enter number of minutes" << endl;
//cin >> minutes;
//cout << "Enter number of secounds" << endl;
//cin >> secounds;
//numOfSecoundPerDay = days * (24 * (pow(60, 2)));
//numOfSecoundPerHour = (hours * (pow(60, 2)));
//numOfSecoundPerMinute = 60 * minutes;
//result = numOfSecoundPerDay + numOfSecoundPerHour + numOfSecoundPerMinute + secounds;
//cout << "The result is:	" << result << endl;
//----------------------------------------43-----------------------------------------
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Why did i should 
int totalNumberOfSecounds, numberOfSecoundsPeerDay, numberOfSecoundsPeerHour, numberOfSecoundsPeerMinutes, numberOfSecound, reminder;
	int totalNumberOfDays, totalNumberOfHours, totalNumberOfMinutes;
	cout << "Enter totoal number of Secounds:" << endl;
	cin >> totalNumberOfSecounds;
	numberOfSecoundsPeerDay = 24 * (pow(60, 2));
	numberOfSecoundsPeerHour = pow(60, 2);
	numberOfSecoundsPeerMinutes = 60;

	totalNumberOfDays = totalNumberOfSecounds / numberOfSecoundsPeerDay;
	reminder = totalNumberOfSecounds % numberOfSecoundsPeerDay;
	totalNumberOfHours = reminder / numberOfSecoundsPeerHour;
	reminder= reminder % numberOfSecoundsPeerHour;
	totalNumberOfMinutes = reminder / numberOfSecoundsPeerMinutes;
	reminder = reminder % numberOfSecoundsPeerMinutes;
	numberOfSecound = reminder;


	cout << totalNumberOfDays << ":" << totalNumberOfHours << ":" << totalNumberOfMinutes << ":" << numberOfSecound << endl;


	

}