#include<iostream>
using namespace std;
int getRandomNumber(int from, int to) {
	int myRandom = rand() % (to - from + 1) + from;
	return myRandom;
}

enum enCapitalSmallSpacialNum {
	capitalLetter = 1, smallLetter = 2, spaecialChar = 3, randomNumber = 4
};

char getRandomChar(enCapitalSmallSpacialNum randomValue) {
	switch (randomValue) {
	case enCapitalSmallSpacialNum::capitalLetter:return char(getRandomNumber(65, 90));
	case enCapitalSmallSpacialNum::smallLetter:return char(getRandomNumber(97, 122));
	case enCapitalSmallSpacialNum::spaecialChar:return char(getRandomNumber(33, 47));
	case enCapitalSmallSpacialNum::randomNumber:return getRandomNumber(48, 57);
	}

}

int readPostiveNumber(string msg) {
	int number;
	do {
		cout << msg;
		cin >> number;
	} while (number<0);
	return number;
}

//الدالة بتاعتك ايوا شغالة  مع البرنامج دة لكن هي customize للمشكلة دي وما ممكن نستفيد منها في مشكلة اخري 
//اما حل الاستاذ فهو قسم الشغل لي عدة دوال كل دالة بتقوم بي مهمة محددة واحدة بتقوم بانشاء الحرف وواحدة تنشئ الكلمة وواحدة تنشئ 

void printKeys(int numOfKeys) {
	string word = "";
	for (int i = 1;i <= numOfKeys;i++) {
		for (int j = 1;j <= 16;j++) {
			if (j == 5 || j == 10 || j == 15) {
				word += "-";
			}

			word += getRandomChar(enCapitalSmallSpacialNum::capitalLetter);
		}
		cout << "key [" << i << "]:" << word << endl;
		word = "";
	}
}


//The instructor solution------------------------------------------------------------
string generateWord(enCapitalSmallSpacialNum charType,int lenght){
	string word = "";
	for (int i = 1;i <= lenght;i++) {
		word += getRandomChar(charType);
	}
	return word;
}

string generateKey() {
	string key = "";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter,4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) + "-";
	key += generateWord(enCapitalSmallSpacialNum::capitalLetter, 4) ;
	return key;
}

void generateKeys(int numOfKeys){
	for (int i = 1;i <= numOfKeys;i++) {
		cout << "Key [" << i << "]: " << generateKey() << endl;
	}
}

int main(){
	srand((unsigned)time(NULL));
	int number = readPostiveNumber("Please enter a postive number:");
	generateKeys(number);
}