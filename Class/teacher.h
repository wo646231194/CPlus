//
// Created by hugbr on 2016/1/26.
//
#include <iostream>
#include <string>
class student;
using namespace std;

#ifndef CLASS_TEACHER_H
#define CLASS_TEACHER_H

class teacher {
public:
    teacher();
    teacher(string g);

    void print();
    void print(student & s);
private:
    string gender;
};


#endif //CLASS_TEACHER_H
