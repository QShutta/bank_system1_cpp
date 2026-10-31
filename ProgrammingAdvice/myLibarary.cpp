#include<iostream>
using namespace std;

enum enPrimeNotPrime {
	prime = 1, notPrime2
};


enPrimeNotPrime checkPrime(int number){
	int halfOfNumber = number / 2;
	for (int i = 2;i <= halfOfNumber;i++) {
	if(number%i==0){
		return enPrimeNotPrime::notPrime2;
	}
	}
	return enPrimeNotPrime::prime;
}


