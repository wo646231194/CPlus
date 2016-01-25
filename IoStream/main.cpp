#include <iostream>
#include <iomanip>

using namespace std;

int add(int x,int y){
    return x+y;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << 20 <<endl;
    cout << 30.01 << endl;
    int i = 100;
    cout << i <<endl;
    cout << i+99 <<endl;
    cout << add(11,55) <<endl;
    cout << "Hello" << " " << "huyang" <<endl;
    cout << setfill('-') << setw(10) << 2 << 3 <<endl;
    cout << hex << 16 <<endl;
    cout << oct << 16 << endl;

    int num1;
    float num2;
    string s;

    cin >> num1 >> num2 >> s;
    cout << num1 << num2 << s << endl;

    while(cin>>s){
        if(s=="exit") break;
        cout <<s <<endl;
    }
    return 0;
}