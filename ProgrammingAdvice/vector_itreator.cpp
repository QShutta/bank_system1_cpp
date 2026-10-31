#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vNumbers{ 1,2,3,4,5 };

	//Define an itreator:
	//It should be from the same vector type.
	vector<int>::iterator itr;
	//You should konw an important point that the ".end"  doesn't refer to the last element
	//it refer to the place taht after the last element
	/*        begin()
           ↓
        ┌───┬───┬───┬───┬───┐
        │ 1 │ 2 │ 3 │ 4 │ 5 │
        └───┴───┴───┴───┴───┘
                                ↑
                              end()*/
	//That means the begin contain the address of the first element
	//And the ".end" contain the address of the element ,that exist after the last element	
	for (itr = vNumbers.begin(); itr != vNumbers.end(); itr++) {
		cout << *itr << endl;
	}
}