#include<iostream>
#include<vector>
using namespace std;



int main() {
	vector<int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	vNumbers.push_back(60);
	vNumbers.push_back(70);


	vNumbers.clear();
	cout << "The first element in the vecotr is :" << vNumbers.front() << endl;
	cout << "The last element in the vecotr is :" << vNumbers.back() << endl;
	//what i understand that the vector capcity is the the current space teat the vector  reserve for 
	//the current number of elements ?
	//size     → How many elements are currently inside.
	//capacity → How many elements the allocated memory can currently hold.
	//يعني حجم المساحة الحاجزة ال vector 
	// في الذاكرة حاليا .
	cout << "The capcity of the  vecotr is :" << vNumbers.capacity() << endl;
	cout << "The size of the  vecotr is :" << vNumbers.size() << endl;



}