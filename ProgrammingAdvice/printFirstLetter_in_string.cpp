#include<iostream>
#include<string>
using namespace std;
//One of the limitation of my solution compared to the instructor solution is that when the string
// contain to spaces then letter it will treate the space as the first letter.and this limitiation 
// is not exist in the instructor solution.
 

//string readString() {
//	string strRead = "";
//	cout << "Please enter your string?" << endl;
//	getline(cin,strRead);
//	return strRead;
//}
//
//void printFirstLetterOfString(string userEnterdString){
//	for (int i = 0;i < userEnterdString.length();i++) {
//		if(i==0){
//			cout << userEnterdString[0] << endl;
//		}
//		//After see the instructor solution i learn to check that the next letter should not be empty too.
//		if(userEnterdString[i]==' '&&userEnterdString[i+1]!=' ') {
//			cout << userEnterdString[i + 1] << endl;
//		}
//	}
//}
//int main() {
//	string userInput = "";
//	userInput=readString();
//	printFirstLetterOfString(userInput);
//}
//-------------------------------------------------instructor solution--------------------------


//string readString() {
//	string strRead = "";
//	cout << "Please enter your string?" << endl;
//	getline(cin,strRead);
//	return strRead;
//}
//
//void printFirstLetterOfString(string userInput){
//
//	bool isFirstLetter = true;
//	for (int i = 0;i < userInput.length();i++) {
//
//		//the instructor solve the issue that exist in my code by this small condition:
//		//check wither userInput[i]!=' '
//	if((userInput[i]!=' ')&&(isFirstLetter==true)) {
//		cout << userInput[i] << endl;
//	}
//	//The isFirstLetter is an important var which we are using to trace the empty string
//	//المتغير بستخدم القيمة بتاعت الجولة السابقة  في لاجولة البعدها يعني القيمة لاحلاية حتفيدنا في الجولة لاقادمة صح ؟
//	//The proccess of tracing for the xample if the user enter "ali ali omar"
//	//it will be :0:a:true:a/1:l:false,null/2:i:false:null/3:'':true:''/5:a:true:a if the order is i:userInput[i]:isFirst:output
////افحص القيمة القديمة، وبعدها حدّثها للمستقبل.
//	isFirstLetter = userInput[i] == ' ' ? true : false;
//	}
//}
//int main() {
//	printFirstLetterOfString(readString());
//}
//implement the code again


string readString() {
	string userInput = " ";
	getline(cin,userInput);
	return userInput;
}


void printFirstLetterOfEachWord(string userInput) {
	bool isFirstLetter = true;

	for (int i = 0;i < userInput.length();i++) {
		if((isFirstLetter==true)&&(userInput[i]!=' ')) {
			cout << userInput[i] << endl;
		}
		isFirstLetter = (userInput[i]==' '?true:false);
	
	}
}

int main() {
	printFirstLetterOfEachWord(readString());
}