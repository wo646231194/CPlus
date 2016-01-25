#include <iostream>

using namespace std;
//-----------------传参---------------
typedef struct{
    int a;
    int b[1000];
}BigStruct;

//b不是形参，b是别名,const 禁止修改
void constf(const BigStruct& b){
}
//返回别名
const BigStruct& returns(){
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

//----------------函数默认值-------------
void move(int step=1,int delta=20){
}
void move2(int i, int j=10,int k=20,int m=30){
}
//----------------重载-----------------
int add(int x,int y){
    return x+y;
}
float add(float x, float y){
    return x+y;
}
double add(double x, double y){
    return x+y;
}
double add(int x, double y){
    return x+y;
}

//----------------函数模板--------------
template <typename S>
S addt (S a,S b){
    return a+b;
}

int main() {
    int a,b;
    a=1,b=2;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;

    move(1,30);
    move(2);
    move();

    move2(1,2,3,4);
    move2(1,2,3);
    move2(1,2);
    move2(1);

    float f1 = 10.1,f2 = 20.1;
    add(a,b);
    add(f1,f2);

    addt(10,20);
    addt(f1,f2);
    return 0;
}