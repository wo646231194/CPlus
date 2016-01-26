#include <iostream>
#include <stdio.h>
#include "student.h"
#include "teacher.h"
using namespace std;

student& func(student& s){
    cout<<"copying "<<endl;
    return s;
}
//友员函数
void friendfun(){
    student tang("唐嫣",33,"北京");
    tang.age = 18;
    tang.print();
}

int main() {
    cout << "Hello, World!" << endl;
    student stu("huyang",24,"nwu");
    stu.print();
    stu.getAge();

    student * p = &stu;
    p->print();
    p->getAge();

    student &s = stu;
    s.print();
    s.getAge();

    stu.setName("mayan");
    stu.setAge(100);
    stu.setAddress("8-222");
    stu.print();

    student hu(s);
    hu.print();

    student hug = func(hu);
    const student consthu("hu",99,"nwu");
    cout << consthu.getStatus() <<endl;

    friendfun();

    teacher t("男");
    t.print(stu);

    //getchar();
    return 0;
}