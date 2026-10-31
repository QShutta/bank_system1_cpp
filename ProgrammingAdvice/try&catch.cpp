#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vNumbers{ 1,2,3,4,5 };
	//The instructor said that using the try&catch will make the program slower 
	//so we should be very catious when usign them.and using them only when it's very neccery.
	//any thing that could be handled without of using them is good we should make them the last option
	// ما تستخدمهم الا للضرور القصوة اي شي بتقدر تعالجو وتعمل ليهو هاندل من غيرهم يبقي دة افضل .
	//We use the try&catch when we excpect taht this postion or this code can cause an exception
	//The crash means:💥 The program suddenly stops running because it encountered a problem it didn't handle.
	try {
		cout << vNumbers.at(5) << endl;
	}
	catch (...) {
		cout << "Out of Range" << endl;
	}
}