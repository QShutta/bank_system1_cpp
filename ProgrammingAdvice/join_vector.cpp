#include<iostream>
#include<vector>
using namespace std;

//عشان ما نضطر نمل كوبي هل افضل pass by refrence ولا نباصيهو جو اللوب 
//by refrece الاستاذ كان اتكلم عن انلقطة دي بالتفصيل بس حسي نسيت
//string joinVector(vector<string> vWords,string delim){
//	string text = "";
//	for(string word:vWords){
//		if(word==vWords.back()){
//
//			text += word;
//		}
//		else {
//
//			text += word + delim;
//			//This is an equlivent to :
//			//text = text + word + delim;
//		}
//	}
//	return text;
//}
//
//int main() {
//	string myText = "";
//
//	vector<string> vWords = {"Mohmed","Fadi","Ali","Mahir"};
//	myText = joinVector(vWords,"-");
//
//	cout << myText << endl;
//
//
//}


//Instructor solution:

string joinString( vector<string> & vWords,string delim){
	string s1;
for(string & word:vWords){
	s1 += word + delim;
}
return s1.substr(0,s1.length()-delim.length());
}


string joinString(string arrayOfString[3],short length,string delim){
	string s1 = "";
	for (short i = 0;i < length;i++) {
		s1 += arrayOfString[i] + delim;
	}
	return s1.substr(0,s1.length()-delim.length());
}

int main() {
	string myArray[] = {"firElementInArray","SecoundElementInArray","ThirdElementInArray"};
	vector<string> vWords = { "ali","Mohmed","Abubaker" };
	string s1=joinString(vWords,",");
	cout << s1 << endl;
	string s2 = joinString(myArray,3,"-");
	cout << s2 << endl;
	
}

