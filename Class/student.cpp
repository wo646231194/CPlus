//
// Created by hugbr on 2016/1/26.
//
#include "student.h"

//��ʼ��student��̬��Ա
int student::number = 0;
int student::getNumber() {
    cout << number <<endl;
    return number;
}
//const ��Ա����
int student::getStatus() const {
    return status;
}
//���캯��
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
//��������
student::~student() {
    number--;
    cout << "����student" <<endl;
}
//���ƹ��캯��
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
