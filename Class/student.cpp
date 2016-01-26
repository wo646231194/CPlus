//
// Created by hugbr on 2016/1/26.
//
#include "student.h"

//初始化student静态成员
int student::number = 0;
int student::getNumber() {
    cout << number <<endl;
    return number;
}
//const 成员函数
int student::getStatus() const {
    return status;
}
//构造函数
student::student():status(1) {
    name="xxx";
    age=0;
    address="xxx";
    number ++;
    cout << number <<endl;
};
student::student(string name,int age,string address):status(1){
    this->name= name;
    this->age = age;
    this->address=address;
    number ++;
    cout << number <<endl;
};
//析构函数
student::~student() {
    number--;
    cout << "销毁student" <<endl;
}
//复制构造函数
student::student(student& s):status(1) {
    name = s.name;
    age = s.age;
    address = s.address;
    number ++;
    cout << number <<endl;
}

void student::setName(string s) {
    name = s;
}
void student::setAge(int a) {
    age = a;
}
void student::setAddress(string s) {
    address = s;
}

string student::getName() {
    return name;
}
int student::getAge() {
    return age;
}
string student::getAddress() {
    return address;
}
