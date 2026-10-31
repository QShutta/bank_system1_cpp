#include<iostream>
using namespace std;
//small letters:97-122
//spacial char :32-47


int getRandomNumber(int from,int to) {
	int myRandom= rand() % (to - from + 1) + from;
	return myRandom;
}

enum enCapitalSmallSpacialNum {
	capitalLetter = 1, smallLetter = 2, spaecialChar = 3, randomNumber = 4
};

char getRandomChar(enCapitalSmallSpacialNum randomValue){
	switch (randomValue) {
	case enCapitalSmallSpacialNum::capitalLetter:return char(getRandomNumber(65,90));
	case enCapitalSmallSpacialNum::smallLetter:return char(getRandomNumber(97, 122));
	case enCapitalSmallSpacialNum::spaecialChar:return char(getRandomNumber(33, 47));
	case enCapitalSmallSpacialNum::randomNumber:return getRandomNumber(48, 57);
	}

}



int main() {
	srand((unsigned)time(NULL));
	cout << getRandomChar(enCapitalSmallSpacialNum::capitalLetter) << endl;
	cout << getRandomChar(enCapitalSmallSpacialNum::smallLetter) << endl;
	cout << getRandomChar(enCapitalSmallSpacialNum::spaecialChar) << endl;
	cout << getRandomChar(enCapitalSmallSpacialNum::randomNumber) << endl;


}