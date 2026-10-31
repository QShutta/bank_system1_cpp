#include<iostream>
using namespace std;
//I don't think that theere is a big diff between of using the printf and the cout until konw
//except that here we don't need << this si the only thing that is clear to me right know.
//The only difference that it's clear to me is controling the number of digits

/*
%d  → int
%f  → floating-point value
%c  → char
%s  → C-style string
*/

int main() {

	int x = 1, y = 100;

	printf("This is my first number %d \n",x);
	printf("This is my first and secound numbers %d ,%d \n", x,y);

	cout << "-----------------------------------" << endl;

	printf("The number with 2 digits %05d\n",x);
	printf("The number with 3 digits %0*d\n", 3, x);
	printf("The number with 4 digits %0*d\n", 4, x);
	printf("The number with 5 digits %0*d\n", 5, x);
	cout << "--------------------------------------" << endl;
	printf("The result of %d + %d = %d",x,y,x+y);

}
