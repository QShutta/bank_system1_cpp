#include<iostream>
#include<vector>
using namespace std;

int main() {
	int length;
	cout << "Please enter the number of students" << endl;
	cin >> length;
	//This is the method that we follow to create dynamic array.
	//the ptr will refer to the first element in the array.
	float* ptr = new float[length];

	for (int i = 0;i < length;i++) {
		cout << "Please enter the grade of studente number:" << i + 1 << endl;
		//ptr+i means brign the position for example number 0 in the array then assign value to it 
		cin >> *(ptr+i);
	}

	cout << endl<<"Displaying the grades:" << endl;
	for (int i = 0;i < length;i++) {
		cout << "The grade of student number:" << i + 1 <<  " is: "<<*(ptr+i)<<endl;

	}

	delete[] ptr;
}



//int main() {
//	vector<int> vStudentsGrades;
//	int numOfStudents=0,temp=0;
//	cout << "Please enter the number of students:" << endl;
//	cin >> numOfStudents;
//
//	for (int i = 0;i < numOfStudents;i++) {
//		cout << "Please enter the degree of students number: "<<i+1 << endl;
//		cin >> temp;
//		vStudentsGrades.push_back(temp);
//	}
//
//	cout << "Display students grades are:" << endl;
//	for(int degree:vStudentsGrades){
//		cout << degree << endl;
//	}
//}
