#include <iostream>
#include "String.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    String str1("Hello huyang");
    cout<< str1 <<endl;

    String str2(10,'a');
    cout<<str2<<endl;

    str2 = str1;
    cout<<str2<<endl;

    String str3 = str2;
    cout<<str3<<endl;

    cout<< "size is "<<str3.size() <<"  length is "<<str3.length()<<endl;

    str3 += " mayan";

    cout << str3 <<endl;
    return 0;
}