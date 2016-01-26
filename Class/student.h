//
// Created by hugbr on 2016/1/26.
//
#include <iostream>
#include <string>
#include "teacher.h"
using namespace std;

#ifndef CLASS_STUDENT_H
#define CLASS_STUDENT_H

class student{
public:
    //友员函数，全局函数
    friend void friendfun();
    //友员对象
//    friend teacher;
    //友员对象函数
    friend void teacher::print(student &s) ;

    void print(){
        cout << name<<" "<<age<<" "<<address<<endl;
    }

    //构造函数
    student();
    student(string name,int age,string address);
    //析构函数
    ~student();
    //复制构造函数
    student(student& s);

    //set
    void setName(string s);
    void setAge(int a);
    void setAddress(string s);
    //get
    string getName();
    int getAge();
    string getAddress();

    //静态函数
    static int getNumber();
    //const函数
    int getStatus() const;
private:
    string name="huyang";
    int age=22;
    string address="nwu";

    //静态成员
    static int number;
    //常量成员
    const int status;
};

#endif //CLASS_STUDENT_H
