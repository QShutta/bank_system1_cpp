#include<iostream>
using namespace std;

//I think that the declaration is not neceery here

void function2();

void function4() {
	cout << "This is function 4 calling" << endl;
}
void function3() {
	function4();
}

void function2() {
	function3();
}

void function1() {
	function2();
	function4();
}
int main() {
	function1();
}