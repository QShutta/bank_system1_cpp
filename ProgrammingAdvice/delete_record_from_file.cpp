#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


void printFileContent(string fileName) {

	fstream fName;
	string line = "";
	fName.open(fileName,ios::in);

	if(fName.is_open()){
		while(getline(fName,line)){
			cout << line << endl;
		}
	}
	fName.close();
}

void loadDataFromFileToVector(string fileName,vector<string>&vName){
	fstream fName;
	string line = "";
	//هنا نحنا بنحاول نفتح الملف صاحب الاسم المعين .؟الملف ممكن ما يفتح مثلا كتبنا اسمو غلط او ما عندنا صلاحيات ليهو
	//او غيرو من الاسباب 
	fName.open(fileName, ios::in);
	//اذا الملف فتح بي نجاح ؟في الحالة دي نفذ لي الشرط الفلاني .
	if (fName.is_open()) {
		while (getline(fName, line)) {
			vName.push_back(line);
		}
	}
	fName.close();
}

void saveDataFromVectorToFile(string fileName,vector<string> &vName){
	fstream fName;
	fName.open(fileName,ios::out);

	if(fName.is_open()){
		for (string& line : vName) {
			if (line!="") {
				fName << line << endl;
			}
		}
	}
	fName.close();
}

void deleteRecordFromFile(string fName,string record){
	vector<string> vFileContent;
	loadDataFromFileToVector(fName,vFileContent);
	for(string& line:vFileContent){
		if(line==record){
			line = "";
		}
	}
	saveDataFromVectorToFile(fName,vFileContent);

}

int main() {
	cout << "The file content before of delete:" << endl;
	printFileContent("myFile.text");
	deleteRecordFromFile("myFile.text","Lama");

	cout <<endl <<endl<<"The file content After of delete:" << endl;
	printFileContent("myFile.text");

}