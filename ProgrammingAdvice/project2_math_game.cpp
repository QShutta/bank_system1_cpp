#include<iostream>
#include<string>
using namespace std; 

enum enQuestionLevel {
	easy=1,med=2,hard=3,mix=4
};

enum enOperationType {
	add = 1, sub = 2, mul = 3, divOp = 4,mixOp=5
};

short readNumberOfQuestions() {
	short numOfQuestions;
	cout << "How many questions do you want to answer" << endl;
	cin >> numOfQuestions;
	return numOfQuestions;
}

enQuestionLevel readQuesionLevel() {
	short quastionLev = 0;
	do {
		cout << "Enter Questions level [1] Easy, [2] Med,[3] Hard, [4] Mix" << endl;
		cin >> quastionLev;

	} while (quastionLev<1||quastionLev>4);
	return (enQuestionLevel)quastionLev;
}

enOperationType readOperationType() {
	short operationType = 0;
	do {
		cout << "Enter Operation Type [1] Add, [2] Sub,[3] Mul, [4] Div,[5] Mix" << endl;
		cin >> operationType;

	} while (operationType < 1 || operationType>5);
	return (enOperationType)operationType;
}


struct stGameInfo {

	int numberOfQuestions = 0;
	int numOfRightAnswer = 0;
	int numOfWrongAnswers = 0;
	string questionLevel = "";
	string opearationType = "";
};

struct stQuestionInfo {
	int numberOfQuestions;
	int questionNumber;
	int num1;
	int num2;	
	char questionOperation;
	int userAnswer;
	int rightAnswer;
};

int getRandomNumber(int from,int to){
	return rand() % (to - from + 1) + from;
}

char getMixOperation() {
	char op[4] = { '+','-','*','/' };
	short randomNum = getRandomNumber(1,4);
	return op[randomNum-1];
}

int readUserAnswer() {
	int number;
	cin >> number;
	return number;
}

char getOperation(enOperationType operationType){
	switch (operationType) {
	case enOperationType::add:return '+';break;
	case enOperationType::sub:return '-';break;
	case enOperationType::mul:return '*';break;
	case enOperationType::divOp:return '/';break;
	case enOperationType::mixOp:getMixOperation();
}
}

int doCalculation(int num1, int num2, char op) {
	if (op == '+')return num1 + num2;
	else if (op == '-')return num1 - num2;
	else if (op == '/')return num1 / num2;
	else  return num1 * num2;
}

int getNumberBasedOnLevel(enQuestionLevel questionLevel){
	switch (questionLevel) {
	case enQuestionLevel::easy:return getRandomNumber(1, 10);break;
	case enQuestionLevel::med:return getRandomNumber(1, 50);break;
	case enQuestionLevel::hard:return getRandomNumber(50, 100);break;
	case enQuestionLevel::mix:return getRandomNumber(1, 100);break;
	}
}

string getQuestionLevelName(enQuestionLevel questionLevel){
	string questionLevelArray[4] = {"Easy","Mid","Hard","Mix"};
	return questionLevelArray[questionLevel-1];
}

string getOperationName(enOperationType operationName) {
	string operationNameArray[5] = { "Add","Sub","Multi","Divition","Mix"};
	return operationNameArray[operationName-1];
}

string getResultText(int userAnswer,int rightAnswer,stGameInfo &rightWrong){
if(userAnswer==rightAnswer){
	rightWrong.numOfRightAnswer++;
	system("color 2f");
	return "Right Answer : - )";
}
else {
	rightWrong.numOfWrongAnswers++;
	system("color 4f");
	cout << "\a" << endl;
	string text= "Wrong Answer : - (\nThe right answer is: "+to_string(rightAnswer);
	return text;
}
}

void printFinalResult(stGameInfo gameInfo) {
	cout <<endl<< "--------------------------------------------------" << endl;
	if(gameInfo.numOfRightAnswer>gameInfo.numOfWrongAnswers){
		system("color 2f");
		cout << "Final Result is Pass : - )" << endl;
	}
	else if(gameInfo.numOfRightAnswer<gameInfo.numOfWrongAnswers){
		system("color 4f");
		cout << "Final Result is Fail : - (" << endl;
	}
	else {
		system("color 6f");
		cout << "Final Result is Draw : - (" << endl;
	}
	cout << "--------------------------------------------------" << endl;
	cout << "Number of Questions : " << gameInfo.numberOfQuestions << endl;
	cout << "Question Level      : " << gameInfo.questionLevel << endl;
	cout << "Operation type      : " << gameInfo.opearationType << endl;
	cout << "Number of Right Answers : " << gameInfo.numOfRightAnswer << endl;
	cout << "Number of Wrong Answers : " << gameInfo.numOfWrongAnswers << endl;
	cout << "--------------------------------------------------" << endl;

}


void printQuestionInfo(stQuestionInfo questionInfo, stGameInfo &gameInfo){
	cout << endl<<"Question[" << questionInfo.questionNumber << "/" << questionInfo.numberOfQuestions << "]" << endl;
	cout << questionInfo.num1 << endl;
	cout << questionInfo.num2 <<" " <<questionInfo.questionOperation<< endl;
	cout << "----------------------------------------------------------------" << endl;
	questionInfo.userAnswer = readUserAnswer();
	cout << getResultText(questionInfo.userAnswer,questionInfo.rightAnswer,gameInfo) << endl;
}

void cleanScreen() {
	system("cls");
	system("color 0f");
}

void playGame(short numOfQuestions,enQuestionLevel questionLevel){
	
	stQuestionInfo questionInfo;
	stGameInfo gameInfo;

	//In the final result i need to print the question level
	gameInfo.questionLevel = getQuestionLevelName(questionLevel);
	gameInfo.numberOfQuestions = numOfQuestions;

	//also in the question result i need to print questionx/numOfQuestions
	questionInfo.numberOfQuestions = numOfQuestions;
	
	enOperationType operationType = readOperationType();
	questionInfo.questionOperation = getOperation(operationType);
	gameInfo.opearationType = getOperationName(operationType);

	for (int questionNum = 1;questionNum <= numOfQuestions;questionNum++) {
		questionInfo.questionNumber = questionNum;
		questionInfo.num1 = getNumberBasedOnLevel(questionLevel);
		questionInfo.num2 = getNumberBasedOnLevel(questionLevel);

		//انا هنا قلتة ليهو لو نوع العمليات هو mix  في الحالة دي كل مرة تجيب عملية عشوائية  في كل جولة 
		if(operationType==enOperationType::mixOp){
			questionInfo.questionOperation = getMixOperation();
		}
		questionInfo.rightAnswer = doCalculation(questionInfo.num1,questionInfo.num2,questionInfo.questionOperation);
		printQuestionInfo(questionInfo,gameInfo);
	}
	//باقي لي بس اجي اطبع النتيجة النهائية واحسن علي الكود حتي اشوف حل الاستاذ
	printFinalResult(gameInfo);
	
}

char readUserChoiseYesNo() {
	char userChoice = 'y';
	cout << "Do you want to play again? Y/N?" << endl;
	cin >> userChoice;
	return userChoice;
}


void startGame() {
	char userChoice = 'y';
	short numOfQuestions = 0;
	enQuestionLevel questionLevel;
	do {
		cleanScreen();
		numOfQuestions = readNumberOfQuestions();
		questionLevel = readQuesionLevel();
		playGame(numOfQuestions,questionLevel);
		userChoice = readUserChoiseYesNo();
	} while (userChoice=='y'||userChoice=='Y');
}

int main() {
	srand((unsigned)time(NULL));
	startGame();
}