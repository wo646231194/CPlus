#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    string str1;
    string str2("str2");
    string str3 = "str3";
    string str4 = string("str4");
    string str5(10,'a');
    string str6 = str5;

    cout << str1<< str2<< str3<< str4<< str5<< str6<< endl;

    str1 = "hello huyang";
    cout << str1 <<endl;
    str2 = "huyang";
    cout << str2 <<endl;

    str1 += str2;
    cout << str1 <<endl;

    str2 = str3 + "hello";
    cout << str2 <<endl;

    cout << (str2 == str3) <<endl;

    string str;
    int lines = 0;
    while (getline(cin,str1)) {
        if(str1 == "q") break;
        str += str1;
        str += "\n";
        lines++;
    }

    cout << "总字符数为" << str.size() <<endl;
    cout << "总行数为" <<lines <<endl;
    cout << str << endl;

    const char * p  = str.c_str();

    return 0;
}