#pragma warning(disable:4996)
#include<iostream>
#include<ctime>
using namespace std;

int main() {

    // نحصل على الوقت الحالي ونخزنه في المتغير t.
    time_t t = time(0);

    // نرسل عنوان 
    // t
    // إلى 
    // ctime() 
    // لكي تستخدم الوقت الموجود فيه
    // وتحوله إلى تاريخ ووقت بصيغة مقروءة.
    //
    // ctime() 
    // ترجع عنوان
    // (pointer) 
    // لأول حرف من النص الناتج،
    // لذلك نخزن العنوان في 
    // char*
    // اسمه 
    // dt.
    //
    // عند استخدام 
    // cout مع 
    // char*،
    // يتم التعامل معه كنص
    // C-style
    // ويتم طباعة النص كاملًا بدل طباعة العنوان نفسه.
    char* dt = ctime(&t);

    //when use the cout with char* will print the entire text that it refer too.
    cout << "Locale date and time is:" << dt << endl;


    //Why when he come to print the time in grinitch didn't folow the same approach?
    //the previous one?
    
    // gmtime() returns the address of a tm structure
    // that contains the date and time in GMT format.
    tm* gmt = gmtime(&t);
    //get teh time and convedrt into a readbable formtat.
    //→ asctime() 
    // تأخذ بيانات الـ 
    // struct
    // وتحولها إلى نص مقروء، وترجع عنوان أول حرف من النص وتخزنه في 
    // dt.
    dt = asctime(gmt);
    cout << "The globale data&time is:" << dt << endl;
}