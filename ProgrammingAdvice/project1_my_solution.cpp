#include<iostream>
using namespace std;


enum enStoPapSci {
	stone = 1, paper = 2, scissors = 3
};

enum enWiner {
	userWin = 1, computerWin = 2,equality=3
};

int readNumber(string msg){
	int number = 0;
	do {
		cout << msg << endl;
		cin >> number;

	} while (number<0);
	return number;
}

enStoPapSci readUserOption() {
	enStoPapSci myOp;
	int op=0;
	do {
		cout << "Your choice:[1]:Stone,[2]:Paper,[3]:Scissors?" << endl;
		cin >> op;
		myOp = (enStoPapSci)op;

	} while (myOp <= 0 || myOp > 3);
	return myOp;
}

void printRoundNumber(int number) {
	cout << "----------------------------------Round [" << number << "] begins---------------------------------------" << endl;
}

int getRandomNumber(int from,int to) {
	int randomNum = rand() % (to - from + 1) + from;
	return randomNum;
}

enWiner getRoundWinner(enStoPapSci userOption,int &numOfUserWin,int &numOfComputerWin,int &numOfEquality){
	int cOp = getRandomNumber(1, 3);
	enStoPapSci computerOption = (enStoPapSci)cOp;
	
	if(userOption==enStoPapSci::paper&&computerOption==enStoPapSci::stone){
		numOfUserWin++;
		cout << "Player1 choise:paper" << endl;
		cout << "computer choise:stone" << endl;
		cout << "Round winer is:user" << endl;
		system("color 2F");
		return enWiner::userWin;
	}
	else if (userOption == enStoPapSci::stone && computerOption == enStoPapSci::paper) {
		numOfComputerWin++;
		cout << "Player1 choise:stone" << endl;
		cout << "computer choise:paper" << endl;
		cout << "Round winer is:computer" << endl;
		system("color 4F");
		cout << "\a";
		return enWiner::computerWin;
	}
	else if (userOption == enStoPapSci::stone && computerOption == enStoPapSci::scissors) {
		numOfUserWin++;
		cout << "Player1 choise:stone" << endl;
		cout << "computer choise:scissors" << endl;
		cout << "Round winer is:user" << endl;
		system("color 2F");
		return enWiner::userWin;
	}
	else if (userOption == enStoPapSci::scissors && computerOption == enStoPapSci::stone) {
		numOfComputerWin++;
		cout << "Player1 choise:scissors" << endl;
		cout << "computer choise:stone" << endl;
		cout << "Round winer is:comuter win" << endl;
		system("color 4F");cout << "\a";
		return enWiner::computerWin;
	}
	else if (userOption == enStoPapSci::scissors && computerOption == enStoPapSci::paper) {
		numOfUserWin++;
		cout << "Player1 choise:scissors" << endl;
		cout << "computer choise:paper" << endl;
		cout << "Round winer is:user" << endl;
		system("color 2F");
		return enWiner::userWin;
	}
	else if (userOption == enStoPapSci::paper && computerOption == enStoPapSci::scissors) {
		numOfComputerWin++;
		cout << "Player1 choise:paper" << endl;
		cout << "computer choise:scissors" << endl;
		cout << "Round winer is:comuter win" << endl;
		system("color 4F");cout << "\a";
		return enWiner::userWin;
	}
	else if (userOption == enStoPapSci::paper && computerOption == enStoPapSci::paper) {
		numOfEquality++;
		cout << "Player1 choise:paper" << endl;
		cout << "computer choise:paper" << endl;
		cout << "Round winer is:[No Winner]" << endl;
		system("color 6F");
		return enWiner::equality;
	}
	else if (userOption == enStoPapSci::stone && computerOption == enStoPapSci::stone) {
		numOfEquality++;

		cout << "Player1 choise:stone" << endl;
		cout << "computer choise:stone" << endl;
		cout << "Round winer is:[No Winner]" << endl;
		system("color 6F");
		return enWiner::equality;
	}
	else if (userOption == enStoPapSci::scissors && computerOption == enStoPapSci::scissors) {
		numOfEquality++;
		cout << "Player1 choise:scissor" << endl;
		cout << "computer choise:scissors" << endl;
		cout << "Round winer is:[No Winner]" << endl;
		system("color 6F");
		return enWiner::equality;
	}


}


void printFinalWinner(int  numOfUserWin, int numOfComputerWin, int numOfEquality) {
	if (numOfUserWin > numOfComputerWin) {
		cout << "              Final Winner			:User" << endl;
	}
	else if (numOfUserWin < numOfComputerWin) {
		cout << "              Final Winner			:Computer Win" << endl;
	}
	else {
		cout << "              Final Winner				: No Winner" << endl;
	}
}

void printFinalGamResult(int numOfRounds,int  numOfUserWin, int numOfComputerWin, int numOfEquality){

	cout << "---------------------------------------------" << endl;
	cout << "               --------------------------------------------------------------" << endl;
	cout << "                            +++ G a m e  O v e r" << endl;
	cout << "               --------------------------------------------------------------" << endl;
	cout << "               ---------------------------- [ Game Result ] -----------------" << endl;
	cout << "               Game Rounds               :" << numOfRounds << endl;
	cout << "               Player1  won  times       :" << numOfUserWin << endl;
	cout << "               Computer won times        :" << numOfComputerWin << endl;
	cout << "               Number of equality times  :" << numOfEquality << endl;
	printFinalWinner(numOfUserWin,numOfComputerWin,numOfEquality);
	cout << "---------------------------------------------" << endl;


}


char readChar() {
	
	char c = 'y';
	
		cout << "               Do you want to play again? Y/N?:" << endl;
		cin >> c;

	return c;

}

void startGame(int& numOfUserWin, int& numOfComputerWin, int& numOfEquality) {
	
	char yesNoOption = 'y';

	do {
		int numberOfRound = readNumber("Please enter the number of round");

		enStoPapSci userSelection;
		for (int i = 0;i < numberOfRound;i++) {
			printRoundNumber(i + 1);

			userSelection = readUserOption();
			getRoundWinner(userSelection, numOfUserWin, numOfComputerWin, numOfEquality);
		}

		printFinalGamResult(numberOfRound, numOfUserWin, numOfComputerWin, numOfEquality);
		yesNoOption=readChar();
		system("cls");
		numOfUserWin = 0;
		numOfComputerWin = 0;
		numOfEquality = 0;
		system("color 0F");
		
	} while (yesNoOption=='y'||yesNoOption=='Y');
	
}

int main() {
	srand((unsigned)time(NULL));
	int numOfUserWin = 0, numOfComputerWin = 0, numOfEquality = 0;
	startGame(numOfUserWin,numOfComputerWin,numOfEquality);


}