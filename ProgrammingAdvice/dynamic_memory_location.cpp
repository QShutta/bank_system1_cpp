#include<iostream>
using namespace std;


int main() {
	//Here we define a pointer from int/float.
	int* intPtr;
	float* floatPtr;

	//We make the ptr refer to int/float.
	//The benfit of dynamic memory allocation is that we reserve a space in the memory based on spacfic
	//condition.
	intPtr = new int();
	floatPtr = new float();

	*intPtr = 45;
	*floatPtr = 94.12;

	cout << *intPtr << endl;
	cout<< *floatPtr << endl;

	//Another benfit of dynamic memory allocation is the ability to free memory space before of waiting the 
	//program to finish.
	delete intPtr;
	delete floatPtr;
	//Here we can have more thousands of code.
}