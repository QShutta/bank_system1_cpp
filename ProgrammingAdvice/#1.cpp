#include<iostream>
using namespace std;

void multiplicationTable() {
	cout << "\t\t\tMultiplication Table From 1 to 10" << endl;
	cout << endl;
	cout << "\t\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10";
	cout << endl<<"-----------------------------------------------------------------------------------------------" << endl;
	for (int i = 1;i <= 10;i++) {
	
		for (int j = 1;j <= 10;j++) {
			if (j == 1) {
				cout << i<<"\t|";
			}
			cout << "\t" << (i * j);
			
		}
		cout << endl;
	}

}
//The instructor solution:
void printTableHeader() {
	cout << "\n\n\t\t\t" << "Multiplication Table From 1 to 10" << endl << endl;
	for (int i = 1;i <= 10;i++) {
		cout <<"\t" << i << "";
	}
	cout << endl<<"------------------------------------------------------------------------------------" << endl;
}


string columnSeprator(int i) {
	if (i < 10) {
		return "  |";
	}
	else {
		return " |";
	}
}

void printMultiplicationTable() {
	printTableHeader();
	for (int i = 1;i <= 10;i++) {
		cout << " " << i << columnSeprator(i) << "\t";
		for (int j = 1;j <= 10;j++) {
			cout << i * j << "\t";
		}
		cout << endl;


	}
	
}


int main(){
	printMultiplicationTable();
	
}