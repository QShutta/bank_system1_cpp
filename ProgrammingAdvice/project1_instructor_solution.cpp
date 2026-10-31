#include<iostream>
using namespace std;

enum enWinner {
	player1 = 1, computer = 2, draw=3
};

enum enGameOptions {
	paper = 1, stone = 2, scissor = 3
};

struct stRoundInfo {
	short roundNumer;
	enGameOptions player1Choise;
	enGameOptions computerChoise;
	enWinner winner;
	string winnerName;
};

struct stGameResult {
	short gameRound;
	short player1WinTimes;
	short computerWinTimes;
	short drawTimes;
	enWinner winner;
	string winnerName;
};

string getWinnerName(enWinner winner) {
	string winerName[3] = { "Player1","Computer","Draw" };
	return winerName[winner-1];
}

string choiceName(enGameOptions option) {
	string optionName[3] = { "Paper","Stone","Scissor" };
	return optionName[option - 1];
}


enWinner whoWontheRound(stRoundInfo roundInfo) {

	if(roundInfo.player1Choise==roundInfo.computerChoise){
		return enWinner::draw;
	}
	switch (roundInfo.player1Choise) {
	case enGameOptions::paper:if(roundInfo.computerChoise==enGameOptions::scissor){
		return enWinner::computer;
	}
	case enGameOptions::stone:if (roundInfo.computerChoise == enGameOptions::paper) {
		return enWinner::computer;
	}case enGameOptions::scissor:if (roundInfo.computerChoise == enGameOptions::stone) {
		return enWinner::computer;
	}
	}


	return enWinner::player1;
}


char doYouWnatToPlayAgain() {
	char userC;
	cout << "Do you want to play again?y/n" << endl;
	cin >> userC;
	return userC;
}

void resetScreen() {
	system("cls");
	system("color 0F");
}

enGameOptions readUserOption() {

	int op;
	do {
		cout << "Your choise: [1]:stone,[2]:paper,[3]:Scissors ?" << endl;
		cin >> op;
	} while (op <= 0 || op > 3);
	return (enGameOptions)op;
}

int getRandomNumber(int from,int to){
	int random = rand() % (to - from + 1) + from;
	return random;
}


enWinner whoWonGame(int player1WinTimes, int computerWinTimes, int drawTimes) {
	if (player1WinTimes == computerWinTimes) {
		return enWinner::draw;
	}
	else if (player1WinTimes > computerWinTimes) {
		return enWinner::player1;
	}
	else {
		return enWinner::computer;
	}
}


stGameResult fillGameResult(int gameRound,short player1WinTimes,short computerWinTimes,short drawTimes){
	stGameResult gameResult;
	gameResult.gameRound = gameRound;
	gameResult.player1WinTimes = player1WinTimes;
	gameResult.computerWinTimes = computerWinTimes;
	gameResult.drawTimes = drawTimes;
	gameResult.winner = whoWonGame(player1WinTimes,computerWinTimes,drawTimes);
	gameResult.winnerName = getWinnerName(gameResult.winner);
	return gameResult;
}


enGameOptions getComputerOption() {
	enGameOptions computerOption = (enGameOptions)getRandomNumber(1,3);
	return computerOption;

}

short readNumberOfRounds() {
	int numOfRounds=0;
	do {
		cout << "How many Rounds 1 to 10 ?" << endl;
		cin >> numOfRounds;
	} while (numOfRounds<1||numOfRounds>10);
	return numOfRounds;
}

void setWinnerScreenColor(enWinner winner) {
	switch (winner) {
	case enWinner::computer:system("color 4F");cout << "\a";break;
	case enWinner::player1:system("color 2F");break;
	case enWinner::draw:system("color 6F");break;
	}
}
void printRoundResult(stRoundInfo roundInfo) {
	setWinnerScreenColor(roundInfo.winner);
	cout << endl<<"-------------------------Round[" << roundInfo.roundNumer << "]----------------------------------" << endl;
	cout << "Player1 Choise:" << choiceName(roundInfo.player1Choise)   << endl;
	cout << "Computer Choise:" << choiceName(roundInfo.computerChoise)  << endl;
	cout << "Round Winner Name:[" << roundInfo.winnerName << "]" << endl;
	cout << "--------------------------------------------------------------------------------------------" << endl<<endl;
}


stGameResult playGame(short roundNumber) {
	stRoundInfo roundInfo;
	int roundNum = 0,player1WonTimes=0,computerWonTimes=0,drawTimes=0;
	for (int gameRound = 1;gameRound <= roundNumber;gameRound++) {
		roundNum++;
		roundInfo.roundNumer = gameRound;
		roundInfo.player1Choise = readUserOption();
		roundInfo.computerChoise = getComputerOption();
		roundInfo.winner = whoWontheRound(roundInfo);
		roundInfo.winnerName = getWinnerName(roundInfo.winner);

		printRoundResult(roundInfo);

		if(roundInfo.winner==enWinner::computer){
			computerWonTimes++;
		}
		else if(roundInfo.winner == enWinner::player1){
			player1WonTimes++;
		}
		else {
			drawTimes++;
		}

		
	}

	return fillGameResult(roundNum,player1WonTimes,computerWonTimes,drawTimes);
}

//stoped here build these functions................................................
string tabs(int numOfTabs){
	string tb = "";
	for (int i = 0;i < numOfTabs;i++) {
		tb += "\t";
	}
	return tb;
}

void printGameOver(){
	cout << tabs(2) << "---------------------------------------------------------------------------" << endl;
	cout << tabs(5) << "+++ G a m e    O v e r +++" << endl;
	cout << tabs(2) << "---------------------------------------------------------------------------" << endl;
}




void printGameResult(stGameResult gameRes){
	cout << tabs(2) << "Game Rounds" << tabs(1) << " : " << gameRes.gameRound << endl;
	cout << tabs(2) << "Player1 won times" << tabs(1) << " : " << gameRes.player1WinTimes << endl;
	cout << tabs(2) << "Computer won times" << tabs(1) << " : " << gameRes.computerWinTimes << endl;
	cout << tabs(2) << "Draw times" << tabs(1) << " : " << gameRes.drawTimes << endl;
	cout << tabs(2) << "Final Winner" << tabs(1) << " : " << gameRes.winnerName << endl;
	cout << tabs(2) << "--------------------------------------------------------------------------------------" << endl;
	setWinnerScreenColor(gameRes.winner);
}



void startGame() {
	char userC = 'n';
	do {
		resetScreen();
		stGameResult gameResult = playGame(readNumberOfRounds());
		printGameOver();
		printGameResult(gameResult);
		userC = doYouWnatToPlayAgain();
	} while (userC=='y'||userC=='Y');
}

int main() {
	srand((unsigned)time(NULL));
	startGame();
}