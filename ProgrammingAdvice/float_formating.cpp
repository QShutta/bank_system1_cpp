#include<iostream>
using namespace std;

int main() {
	float pi = 3.14159265;


	printf("The number with 1 digit is %.*f:\n",1,pi);
	printf("The number with 2 digit is %.*f:\n", 2, pi);
	printf("The number with 3 digit is %.*f:\n", 3, pi);
	printf("The number with 4 digit is %.*f:\n",4, pi);
	printf("The number with 5 digit is %.*f:\n", 5, pi);

	cout << "------------------------------------" << endl;
	float x = 4.9, y = 2.91;
	printf("the divistion result of %.3f/%.3f=%.5f:\n",x,y,x/y);
	cout << "--------------------------------------" << endl;
	float d = 5.14;
	printf("the number with 4 digits is:%.4f\n",d);
	printf("the number with 5 digits is:%.5f\n", d);


}