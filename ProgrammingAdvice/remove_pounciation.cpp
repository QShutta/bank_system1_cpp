#include<iostream>
#include <cctype> 
using namespace std;


string removePounciationInString(string userInput){

	string textAfterRemovePunc = "";
	for (short counter = 0;counter < userInput.length();counter++) {
	if(!ispunct(userInput[counter])) {
		textAfterRemovePunc += userInput[counter];
	}
	}
	return textAfterRemovePunc;
}

int main() {

	string text = "Welcome :to, Jordan, Jordan is a><() nice countery; it's amazing.";
	cout << "Orignal string is:" << endl;
	cout << text << "\n\n";

	text = removePounciationInString(text);
	cout << "Text after remove pounciation:" << endl;
	cout << text << "\n\n";

}