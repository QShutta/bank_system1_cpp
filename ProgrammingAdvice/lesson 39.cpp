#include<iostream>
using namespace std;

//int main() {
//	int x[5] = { 10,20,30,40,50 };
//	cout << x[0] << endl;
//	cout << x[1] << endl;
//	cout << x[2] << endl;
//	cout << x[3] << endl;
//	cout << x[4] << endl;
//
//}

int main() {
	float grade[3];
	cout << "Please enter grade1" << endl;
	cin >> grade[0];
	cout << "Please enter grade2" << endl;
	cin >> grade[1];
	cout << "Please enter grade3" << endl;
	cin >> grade[2];

	cout << "*************************" << endl;
	cout << "The avarage of grades is" <<(grade[0]+grade[1]+grade[2])/3.0<<endl;

}