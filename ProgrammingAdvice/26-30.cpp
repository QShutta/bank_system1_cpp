#include<iostream>
using namespace std;

int readN() {
	int n;
	cout << "Please enter the value of 'N'" << endl;
	cin >> n;
	return n;
}
void printN(int n){
	cout << "-------------------------------------------" << endl;
	for (int i = 1;i <= n;i++) {
		cout << i<< endl;
	}

}

void printNwithWhile(int n) {
	cout << "-------------------------------------------" << endl;
	int i = 1;
	while(i<=n){
		cout << i << endl;
		i++;
	}

}
void printNwithDoWhile(int n) {
	cout << "-------------------------------------------" << endl;
	int i = 1;
	do {
		cout << i << endl;
		i++;
	}while(i<=n);

}

//-------------------------------------#27-----------------------------
void printFromNto1(int n){
	cout << "-------------------------------------------" << endl;
	for (int i = n;i >= 1;i--) {
		cout << i << endl;
	}
}

void printFromNto1withWhile(int n) {
	cout << "-------------------------------------------" << endl;
	while(n>=1){
		cout << n << endl;
		n--;
	}
}



void printFromNto1withDoWhile(int n) {
	cout << "-------------------------------------------" << endl;
	 do{
		cout << n << endl;
		n--;
	}while (n >= 1);
}
//--------------------------------------#28---------------------------------------
//int sumOddNumbers(int n){
//	int sum = 0;
//	for (int i = 1;i <= n;i++) {
//	if(i%2!=0){
//		sum += i;
//	}
//	}
//	return sum;
//}
//
//int sumOddNumbersWithWhile(int n) {
//	int sum = 0;
//	int i = 1;
//	while(i<=n){
//	if(i%2!=0){
//		sum += i;
//	}
//	i++;
//	}
//	return sum;
//}
//
//int sumOddNumbersWithDoWhile(int n) {
//	int sum = 0;
//	int i = 1;
//	do {
//		if (i % 2 != 0) {
//			sum += i;
//		}
//		i++;
//	} while (i <= n);
//	return sum;
//}
//	
//void printSum(int sum) {
//	cout << "The sum is :" << sum << endl;
//}
//-------------------------------------#28 instructor way
//enum enOddOrEven {
//	odd = 1, even = 2
//};
//
//int readNumber() {
//	int number;
//	cout << "Please enter number" << endl;
//	cin >> number;
//	return number;
//}
//
//enOddOrEven checkOddOrEven(int num) {
//	if (num % 2 == 0) {
//		return enOddOrEven::even;
//	}
//	else {
//		return enOddOrEven::odd;
//	}
//}
//
//
//int sumOddNumbersWithFor(int n){
//	int sum = 0;
//	
//	for (int i = 1;i <= n;i++) {
//	if(checkOddOrEven(i)==enOddOrEven::odd){
//		sum += i;
//	}
//	}
//	return sum;
//}
//
//int sumOddNumbersWithWhile(int n) {
//	int sum = 0;
//	int i = 1;
//	while(i<=n){
//		if (checkOddOrEven(i) == enOddOrEven::odd) {
//			sum += i;
//		}
//		i++;
//	}
//	return sum;
//}
//
//int sumOddNumbersWithDoWhile2(int n) {
//	cout << "-------------------------inside of the sum method----------------------------" << endl;
//	int sum = 0;
//	int i = 1;
//	cout << "-------------------------Before of the doWhile----------------------------" << endl;
//	do {
//		cout << "-------------------------Before of the if statement----------------------------" << endl;
//		if (checkOddOrEven(i) == enOddOrEven::odd) {
//			cout << "-------------------------Inside of the if ment----------------------------" << endl;
//			sum += i;
//		
//		}
//		i++;
//	} while (i <= n);
//	return sum;
//}
//
//void printSum(int sum) {
//	cout << "The sum is :" << sum << endl;
//}
//---------------------------------------------------#29---------------------
//This is for the main selection
enum enAllOddEven {
	opAll = 1, opOdd = 2, opEven = 3
};
//Used to specify even or odd
enum enOddOrEven {
	odd = 1, even = 2
};


enOddOrEven checkOddOrEven(int num) {
	if (num % 2 == 0) {
		return enOddOrEven::even;
	}
	else {
		return enOddOrEven::odd;
	}
}

	int sumOddNumbersWithFor(int n){
	int sum = 0;
	
	for (int i = 1;i <= n;i++) {
	if(checkOddOrEven(i)==enOddOrEven::odd){
		sum += i;
	}
	}
	return sum;
}

int sumEvenNumbersWithFor(int n) {
	int sum = 0;

	for (int i = 1;i <= n;i++) {
		if (checkOddOrEven(i) == enOddOrEven::even) {
			sum += i;
		}
	}
	return sum;
}

int sumAllNumbers(int n) {
	int sum = 0;
	for (int i = 1;i <= n;i++) {
		sum += i;
	}
	return sum;
}
//int sumEvenNumbersWithWhile(int n) {
//	int sum = 0;
//	int i = 1;
//	while (i <= n) {
//		if (checkOddOrEven(i) == enAllOddEven::even) {
//			sum += i;
//		}
//		i++;
//	}
//	return sum;
//}
//
//int sumEvenNumbersWithDoWhile2(int n) {
//	int sum = 0;
//	int i = 1;
//	do {
//		if (checkOddOrEven(i) == enAllOddEven::even) {
//			sum += i;
//		}
//		i++;
//	} while (i <= n);
//	return sum;
//}

//----------------------------------------------------------HomeWork--------------------------------

enAllOddEven selectOption(){
	enAllOddEven myOption;
	int op = 0;

	do {
		cout << "-----------------------------------------------" << endl;
		cout << "Please select what sum did you want?" << endl;
		cout << "(1)Sum Of All" << endl;
		cout << "(2)Sum Of Odd" << endl;
		cout << "(3)Sum Of Even" << endl;
		cin >> op;
	} while (op<1||op>3);
	
	
		myOption = (enAllOddEven)op;
		return myOption;
}


int getSumAllOddEven(enAllOddEven myOp) {
	
	if(myOp==enAllOddEven::opAll){
		return sumAllNumbers(readN());
	}else if(myOp==enAllOddEven::opEven){
		return sumEvenNumbersWithFor(readN());
	}else {
		return sumOddNumbersWithFor(readN());
	}
	
}
void printSumAllOddEven(int sum){
	cout << "The sum is:" << sum << endl;
}
//------------------------------------#30------------------------------------------
int readApostiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while (number<=0);

	return number;
}
int getFactorial(int number){
	int fact=1;
	for (int i = 1;i <= number;i++) {
		fact *= i;
	}
	return fact;
}
void printFact(int fact){
	cout << "The factorial of the number is:" << fact << endl;
}

int main() {
	printFact(getFactorial(readApostiveNumber("Please enter a positive number")));
}