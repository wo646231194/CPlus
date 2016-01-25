#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

//-----------重载--------
int max(int x,int y){
    return x>y?x:y;
}
double max(double x,int y){
    return x>y?x:y;
}
double max(int x, double y){
    return x>y?x:y;
}
double max(double x, double y){
    return x>y?x:y;
}
//--------内联函数：展开-------
inline void fun(){

}

int main() {
    cout << "Hello, World!" << endl;

    int *p = (int *)malloc(sizeof(int)*100);
//    if(p) return 0;
    free(p);
    p = NULL;
    p = new int[100];
    delete[]p;
    p = new int;
    delete p;

    int a = 30;
    int &a1 = a;//a和b指向同一数据
    a++;
    a1++;
    cout<<a1<<endl;

    int f = 0,i;
    cout << (a==0?"a==0":"a!=0") <<endl;
    int b[10] = {1,2,3};
    vector<int> c;
    c.push_back(10);
    c.push_back(20);
    c.push_back(30);
    c.push_back(40);
    cout<< "c的长度为" <<c.size() <<endl;
    for(i=0;i<c.size();i++){
        cout<<c[i]<<endl;
    }

    string s;
    s = "huyang";
    s += "mayan";
    cout << s <<endl;
    return 0;
}