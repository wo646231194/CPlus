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
    //��Ա������ȫ�ֺ���
    friend void friendfun();
    //��Ա����
//    friend teacher;
    //��Ա������
    friend void teacher::print(student &s) ;

    void print(){
        cout << name<<" "<<age<<" "<<address<<endl;
    }

    //���캯��
    student();
    student(string name,int age,string address);
    //��������
    ~student();
    //���ƹ��캯��
    student(student& s);

    //set
    void setName(string s);
    void setAge(int a);
    void setAddress(string s);
    //get
    string getName();
    int getAge();
    string getAddress();

    //��̬����
    static int getNumber();
    //const����
    int getStatus() const;
private:
    string name="huyang";
    int age=22;
    string address="nwu";

    //��̬��Ա
    static int number;
    //������Ա
    const int status;
};

#endif //CLASS_STUDENT_H
