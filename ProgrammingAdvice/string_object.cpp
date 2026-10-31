#include<iostream>
#include<vector>
using namespace std;

//function/produder:function and procedure are exist indepently
//method:is a function belong to class/object
/*Function
    ↓
exists by itself

Method
    ↓
function that belongs to a class/object*/

/*                Callable code
                     │
          ┌──────────┴──────────┐
          │                     │
       Function              Method
          │                     │
  independent code       belongs to a class/object
                               
                         ┌──────┴──────┐
                         │             │
                       returns       void
                       value        (nothing)
                       
A method doesn't have to be void; a method can return a value or return nothing.
                       */
int main() {
	string s1 = "Welcome,to our programming school";

    cout << s1.length() << endl;
    cout << s1.at(3) << endl;

    s1.append("@Porgramming Advice");
    cout << s1 << endl;

    s1.insert(7," AbuElqasim ");
    cout << s1 << endl;
    //Substring:means give me part of start starting from ... and give me num of ... characters
    cout << s1.substr(8, 10) << endl;
    s1.push_back('X');
    cout << endl<<s1 << endl;

    s1.pop_back();
    cout << endl << s1 << endl;

    cout << endl<<s1.find("Advice") << endl;
    //What did the s1.nPos do or means
    //What i have understand that there is spacfic number represent the not found and it's hard to 
    //rembere this number , so we represent it with "npos"
    if(s1.find("advice")==s1.npos) {
        cout << "The element didn't found" << endl;
    }
  
    s1.clear();
    cout << s1 << endl;


}