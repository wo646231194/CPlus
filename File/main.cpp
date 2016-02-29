#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    ifstream infile;
    ofstream outfile;

    infile.open("C:\\Users\\hugbr\\Desktop\\CPlus\\File\\CMakeLists.txt");
    outfile.open("C:\\Users\\hugbr\\Desktop\\CPlus\\File\\CMakeLists.copy");
    if(!infile || !outfile){
        cout<<"open file failed!"<<endl;
        return 0;
    }

    char ch;
    while(infile.get(ch)){
        cout<<ch;
        outfile.put(ch);
    }

    infile.close();
    outfile.close();
    return 0;
}