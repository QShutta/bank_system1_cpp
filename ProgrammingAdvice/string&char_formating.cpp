#include<iostream>
using namespace std;




int main() {
	char name[] = { "AbuHaduahd" };
	char schoolName[] = { "Programming advice" };

	printf("Dear : %s\n",name);
	printf("Welcome  to: %s\n", schoolName);

	char myChar = 's';
	//The $*c will be used to spacify the width of the char.when say the width is 1 that means the char will take only 1 width
	//and so on.
	printf("the char with 1 width is:%1c\n",myChar);
	printf("the char with 2 width is:%2c\n", myChar);
	printf("the char with 3 width is:%3c\n", myChar);
	printf("the char with 4 width is:%4c\n", myChar);
	printf("the char with 5 width is:%5c\n", myChar);


}