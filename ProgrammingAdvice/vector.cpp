#include<iostream>
#include<vector>
using namespace std;

int main() {
	//What was the problem of the array?
	//In the array you should specify the size fo the array before of using it .
	//Which can make you reserve a space in the memory that not used.
	//so the solution for that was the vector.


	//To declare a vector :
	//The instructor said that it's prefered when nameing a vector to put the v char before of the vector name

	vector <int> vNumbers = {1,2,3,4,5};

	//One of the method that we use to print the vector is to use the 
	//ranged loop.
	cout << "The vector numbers are:" << endl;
	//The instructor said that if we use the ranged loop without & by refrence each time it will
	//take a copy from the array and store it in the "num" and then print it.
	//and this will make the program slow.the solutino is to use the & by refrence to make the num refere
	//to the location in the memory not to copy the value.
	//this is the instructor talk.but form me i can't image what is this and the image is 
	//still not clear to me and need more explaintion.and i prefere visual explaination for this point
	for(int &num:vNumbers){
		cout << num << " ";
	}
	cout << endl;
}