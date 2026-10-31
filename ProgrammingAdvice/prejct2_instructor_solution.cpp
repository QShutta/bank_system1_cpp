#include<iostream>
using namespace std;


enum enOperationType {
	add = 1, sub = 2, Mult = 3, divOp = 4,mixOp=5
};

enum enQuestionLevel {
	easy = 1, med = 2, hard = 3, mix = 4
};

struct stQuestion {
	int num1 = 0;
	int num2 = 0;
	int correctAnswer = 0;
	int userAnswer = 0;
	bool answerResult = false;
	//why did we mention them in this struct too?
	//because of the user option can select mix and in case of mix option for each question there will be 
	//a differation operation type and different question level.
	enOperationType operationType;
	enQuestionLevel questionLevel;

};

struct stQuiz {
	stQuestion questionList[100];
	int numOfQuestions=0;
	enQuestionLevel questionLevel;
	enOperationType operationType;
	short numOfRightAnswers=0;
	short numOfWrongAnswers=0;
	bool isPass = false;

};

short readNumberOfQuestions() {
	int numOfQuestions;
	cout << "How many Questions do you want to answer ?" << endl;
	cin >> numOfQuestions;
	return numOfQuestions;
}

enQuestionLevel readQuestionLevel() {
	short questionLevel;
	cout << "Enter Question Level [1] Easy, [2] Med, [3] Hard, [4] Mix" << endl;
	cin >> questionLevel;
	return (enQuestionLevel)questionLevel;
}

enOperationType readOperationType() {
	short operationType;
	cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mult, [4] Div, [5] Mix" << endl;
	cin >> operationType;
	return (enOperationType)operationType;
}

void resetScreen() {
	system("color 0f");
	system("cls");
}

char readUserChoice() {
	char choice;
	cout << "Do you want to play again?Y/N" << endl;
	cin >> choice;
	return choice;
}

int generateRandomNumber(int from,int to){
	return rand() % (to - from + 1) + from;
}

int generateNumberBasedOnLevel(enQuestionLevel questionLevel){
switch(questionLevel){
case enQuestionLevel::easy:return generateRandomNumber(1,10);
case enQuestionLevel::med:return generateRandomNumber(10, 50);
case enQuestionLevel::hard:return generateRandomNumber(50, 100);

default:
	return generateRandomNumber(1,10);
}
}

	int simpleCalculator(int num1,int num2,enOperationType opType){
	switch(opType){
	case enOperationType::add:return num1 + num2;
	case enOperationType::sub:return num1 - num2;
	case enOperationType::Mult:return num1 * num2;
	case enOperationType::divOp:return num1 / num2;

	default:return num1 + num2;
	}
	}

	char getOperation(stQuestion question) {
		switch (question.operationType) {
		case enOperationType::add:return '+';
		case enOperationType::sub:return '-';
		case enOperationType::Mult:return '*';
		case enOperationType::divOp:return '/';
			//I think the "default" option is not neccery in my opnion it's not necccery
		//default:
		//	return '+';

		}
	}


	int readUserAnswer() {
		int answer;
		cin >> answer;
		return answer;
	}

	void correctQuestionAnswer(stQuiz& quiz, int questionNum) {
		if (quiz.questionList[questionNum].userAnswer== quiz.questionList[questionNum].correctAnswer) {
			quiz.questionList[questionNum].answerResult = false;
			quiz.numOfRightAnswers++;
			cout << "Right Answer :-)" << endl;
			system("color 2f");
		}
		else {
			quiz.questionList[questionNum].answerResult = true;
			quiz.numOfWrongAnswers++;
			cout << "Wrong Answer :-(" << endl;
			cout << "The right answer is: " << quiz.questionList[questionNum].correctAnswer << endl;
			system("color 4f");
		}
	}


	void printQuestion(stQuiz quiz, int questionNumber) {
		cout << endl << "Question [" << questionNumber + 1 << "/" << quiz.numOfQuestions << "]" << endl;
		cout << quiz.questionList[questionNumber].num1 << endl;
		cout << quiz.questionList[questionNumber].num2 << " " << getOperation(quiz.questionList[questionNumber]);
		cout << endl << "---------------------------------------" << endl;
	
	}

	void askAndCorrectQuestionListAnswers(stQuiz& quiz) {

		for (int question = 0;question < quiz.numOfQuestions;question++) {
			printQuestion(quiz,question);
			quiz.questionList[question].userAnswer = readUserAnswer();
			correctQuestionAnswer(quiz,question);
		}
		quiz.isPass = quiz.numOfRightAnswers >= quiz.numOfWrongAnswers;

	}

stQuestion generateQuestion(enQuestionLevel questionLevel,enOperationType opType) {
		stQuestion question;

		question.operationType = opType;
		question.questionLevel = questionLevel;

		if(questionLevel==enQuestionLevel::mix){
			question.questionLevel = (enQuestionLevel)generateRandomNumber(1,3);
		}
		if(opType==enOperationType::mixOp){
			question.operationType =(enOperationType)generateRandomNumber(1, 4);
		}
		

		question.num1 = generateNumberBasedOnLevel(question.questionLevel);
		question.num2 = generateNumberBasedOnLevel(question.questionLevel);
		//Complete fill the question struct.
		question.correctAnswer = simpleCalculator(question.num1,question.num2,question.operationType);
		return question;
}

void generateQuizQuestions(stQuiz &quiz ){
	for (int question = 0;question < quiz.numOfQuestions;question++) {
		quiz.questionList[question] = generateQuestion(quiz.questionLevel,quiz.operationType);
	}
}

void printFinalResult(stQuiz quiz){
	cout << "-----------------------------------------------------" << endl;
if(quiz.isPass){
	system("color 2f");
	cout << "Final Result is Pass :-)" << endl;
}
else {
	system("color 4f");
	cout << "Final Result is Fail :-(" << endl;
}
cout << "-----------------------------------------------------" << endl;
}

string getQuestionLevelText(enQuestionLevel questionLevel) {
	string questionLevelArrayText[4] = { "Easy","Med","Hard","Mix" };
	return questionLevelArrayText[questionLevel - 1];
}

string getOperationTypeText(enOperationType operationType) {
	string operationTypeArray[5] = { "Add","Sub","Mult","Div","Mix" };
	return operationTypeArray[operationType - 1];
}

void printQuizResult(stQuiz quiz) {
	printFinalResult(quiz);
	cout << "Number of Questions    :" << quiz.numOfQuestions << endl;
	cout << "Question Level         :" << getQuestionLevelText(quiz.questionLevel) << endl;
	cout << "Operation Type         :" << getOperationTypeText(quiz.operationType) << endl;
	cout << "Number Of Right Answers:" << quiz.numOfRightAnswers << endl;
	cout << "Operation Type         :" << quiz.numOfWrongAnswers << endl;
	cout << "-----------------------------------------------------" << endl;
}

void playMathGame() {
	stQuiz quiz;
	quiz.numOfQuestions = readNumberOfQuestions();
	quiz.questionLevel = readQuestionLevel();
	quiz.operationType = readOperationType();

	generateQuizQuestions(quiz);
	askAndCorrectQuestionListAnswers(quiz);
	printQuizResult(quiz);
}

void startGame() {
	char userChoice = 'y';
	do {
		resetScreen();
		playMathGame();
		userChoice = readUserChoice();
	} while (userChoice=='y'||userChoice=='Y');
}

int main() {
	startGame();
}