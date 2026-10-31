#include<iostream>
#include<cmath>
using namespace std;

int main() {
	//--------------------------48---------------------
	float loanAmount, monthlyPayment, numberOfMonthes;
	cout << "Enter loan amount" << endl;
	cin >> loanAmount;
	cout << "Enter number of monthes you want to pay on" << endl;
	cin >> numberOfMonthes;
	monthlyPayment = loanAmount / numberOfMonthes;
	cout << "The numberOfMunthes:" << monthlyPayment << endl;
	//--------------------------47---------------------
	//float loanAmount, monthlyPayment, numberOfMonthes;
	//cout << "Enter loan amount" << endl;
	//cin >> loanAmount;
	//cout << "Enter monthlyPayment" << endl;
	//cin >> monthlyPayment;
	//numberOfMonthes = loanAmount / monthlyPayment;
	//cout << "The numberOfMunthes:" << numberOfMonthes << endl;
	//---------------------------43---------------------
	//int numberOfSecoundsEnterdByUser,totalNumberOfDays,totalNumberOfHours,totalNumberOfMinutes,totalNumberOfSecound,reminder;

	//int numberOfSecoundPeerDay = (24 * 60 * 60), numberOfSecoundPeerHour = (60 * 60), numberOfSecoundPeerMinutes = 60;
	//cout << "Please enter number of secounds:" << endl;
	//cin >> numberOfSecoundsEnterdByUser;
	//totalNumberOfDays = floor(numberOfSecoundsEnterdByUser / numberOfSecoundPeerDay);
 //	reminder = numberOfSecoundsEnterdByUser % numberOfSecoundPeerDay;
	//totalNumberOfHours = floor(reminder / numberOfSecoundPeerHour);
	//reminder = reminder % numberOfSecoundPeerHour;
	//totalNumberOfMinutes= floor(reminder / numberOfSecoundPeerMinutes);
	//reminder = reminder % numberOfSecoundPeerMinutes;
	//totalNumberOfSecound = reminder;
	//cout << "TotalNumberOfDays is:" << totalNumberOfDays << endl;
	//cout << "TotalNumberOfHours is:" << totalNumberOfHours << endl;
	//cout << "TotalNumberOfMinutes is:" << totalNumberOfMinutes<< endl;
	//cout << "TotalNumberOfSecounds is:" << totalNumberOfSecound << endl;

	//----------------------------42---------------------
	//float numberOfDays, numberOfHours, numberOfMinutes, numberOfSecounds,totalNumberOfSecounds;
	//cout << "Please enter numberOfDays" << endl;
	//cin >> numberOfDays;
	//cout << "Please enter numberOfHours" << endl;
	//cin >> numberOfHours;
	//cout << "Please enter numberOfMinutes" << endl;
	//cin >> numberOfMinutes;
	//cout << "Please enter numberOfSecounds" << endl;
	//cin >> numberOfSecounds;
	//totalNumberOfSecounds = numberOfSecounds + (numberOfMinutes * 60) + (numberOfHours * 60 * 60) + (numberOfDays * 24 * 60 * 60);
	//cout << "The totalNumberOfSecoundsIs:" << totalNumberOfSecounds << endl;

	//----------------------------40---------------------
	//float billValue,serviceFee=1.1,salesTax=1.16,billAfterServiceFee,billAfterServiceFeeAndTax;
	//cout << "Please enter the bill value" << endl;
	//cin >> billValue;
	//billAfterServiceFee = billValue * 1.1;
	//billAfterServiceFeeAndTax = serviceFee * 1.16;
	//cout << "The bill after adding serviceFee+SalesTax:" << billAfterServiceFeeAndTax << endl;

	//----------------------------39------------------
	//float cashPaid, totalBill,reminder=0;
	//cout << "Enter cash paid:" << endl;
	//cin >> cashPaid;
	//cout << "Enter totalBill" << endl;
	//cin >> totalBill;
	//reminder = cashPaid - totalBill;
	//cout << "The reminder is:" << reminder << endl;
	//-----------------------------35------------------
	//float pennis, dims, nickles,quartors, dollars,totalPennis,totalDollars;

	//cout << "Enter the Peenis" << endl;
	//cin >>  pennis;
	//cout << "Enter the Nickles" << endl;
	//cin >> nickles;
	//cout << "Enter the Dims" << endl;
	//cin >> dims;
	//cout << "Enter the quartors" << endl;
	//cin >> quartors;
	//cout << "Enter the Dollars" << endl;
	//cin >> dollars;


	//totalPennis = pennis + (nickles * 5) + (dims * 10) + (quartors * 25) + (dollars * 100);

	//totalDollars = totalPennis / 100;
	//cout << "You'r total Pennis are:" << totalPennis << endl;
	//cout << "You'r total Dollars are:" << totalDollars << endl;

	//-----------------------------31--------------------
	//int exp1, exp2, exp3,number;
	//cout << "Enter the number" << endl;
	//cin >>  number;
	//exp1 =  number * number;
	//exp2 =  number * number*number;
	//exp3 =  number * number*number*number;
	//cout << "Number^2: " << exp1 << endl;
	//cout << "Number^3: " << exp2 << endl;
	//cout << "Number^4: " << exp3 << endl;

	//--------------------------22----------------------------
	//const float bie = 3.14159265;
	//float a,b,area;
	//cout << "Please enter a" << endl;
	//cin >> a;
	//cout << "Please enter b" << endl;
	//cin >> b;
	//area = bie*((b*b)/4)*((2*a-b)/(2*a+b));
	//cout << "The area is" << area << endl;
	//---------------------------21---------------------
	//const float bie = 3.14;
	//float L,area;
	//cout << "Please enter L" << endl;
	//cin >> L;
	//area = (L * L) / (4 * bie);
	//cout << "The area is" << area << endl;

	//---------------------------20-------------------
	//float A, area;
	//const float bie = 3.14;
	//cout << "Please enter A" << endl;
	//cin >> A;
	//area = (bie * (A * A)) / 4;
	//cout << area << endl;
	//--------------------------    19---------------------
	//float diemeter,area;
	//const float bie = 3.14;
	//cout << "Please enter diemeter" << endl;
	//cin >> diemeter;
	//area = (bie * (diemeter * diemeter)) / 4;
	////area = (bie * (diemeter ^ 2)) / 4;
	//	//Why did when i say (bie*(diemeter^2)/4 it cause an error why?
	////the error say:expersion must have unscoped or enum type
	// The reason that in c++ the ^ doesn't means exponantion it means XOR
	// and the exponantional in c++ is pow(x,2)
	//cout << area << endl;
	//-----------------------------17--------------------
	// float a, hight;
	// float area;
	//cout << "Enter width:" << endl;
	//cin >> a;
	//cout << "Enter hight" << endl;
	//cin >> hight;
	//area = 0.5*a * hight;//Why did this produce the result as 0?
	////I solve the issue by using the programmer mode in the pc calculator 
	////and i get that the 1/2 in programming=0.but why?
	//cout << "The area is:" << area << endl;
	//------------------------------15--------------------
	//int width, hight,area;
	//cout << "Enter width:" << endl;
	//cin >> width;
	//cout << "Enter hight" << endl;
	//cin >> hight;
	//area = width * hight;
	//cout << "The area is:" << area << endl;

	//---------------------------14----------------------------
	//int number1, number2, temp;
	//cout << "Please enter the first number" << endl;
	//cin >> number1;
	//cout << "Please enter the secound number" << endl;
	//cin >> number2;
	//cout << "Before of swap" << endl;
	//cout << number1 << endl;
	//cout << number2 << endl;
	//cout << "--------------------" << endl;

	//temp = number1;
	//number1 = number2;
	//number2 = temp;
	//cout << "After of swap" << endl;
	//cout << number1 << endl;
	//cout << number2 << endl;
	//---------------------------10-----------------------------
	//int mark1, mark2, mark3;
	//float avg;
	//cout << "Enter Mark1" << endl;
	//cin >> mark1;
	//cout << "Enter Mark2" << endl;
	//cin >> mark2;
	//cout << "Enter Mark3" << endl;
	//cin >> mark3;
	//avg = (mark1 + mark2 + mark3) / 3;
	//cout << "The avarage is:" << avg << endl;
	//-----------------------------9------------------------
	//short number1, number2, number3;
	//cout << "Enter Number1" << endl;
	//cin >> number1;
	//cout << "Enter Number2" << endl;
	//cin >> number2;
	//cout << "Enter Number3" << endl;
	//cin >> number3;

	//cout << "The sum is:" << number1 + number2 + number3 << endl;


	//------------------------------------------
//	int number;
//	cout << "Please enter the Number:" << endl;
//	cin >> number;
//	cout << "Half of the Number is is " << number/2 << endl;
}