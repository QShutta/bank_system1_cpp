#include<iostream>
using namespace std;

int main() {

	float y = 10.5;
	//This pointer will give us the ability to refere to a var from any Data type.
	void* ptr;
	int x = 9;
	ptr = &y;

	cout << "the value of y is:" << y << endl;
	cout <<"the value of ptr is:" <<ptr << endl;
	//To be able to access to the value that the pointer refere too when the pointer from 
	//void Data type:will use "static_cast<type*>

	cout << "the value that the pointer from void refere to is :" << *(static_cast<float*>(ptr)) << endl;


	ptr = &x;
	cout << "the address of the ptr is:" << ptr << endl;
	cout << "The value that the pointer refere too is:" << *(static_cast<int*>(ptr)) << endl;


}