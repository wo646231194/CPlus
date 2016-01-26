//
// Created by hugbr on 2016/1/26.
//

#include "teacher.h"
#include "student.h"

teacher::teacher() {
    gender="not define";
}

teacher::teacher(string g):gender(g) {
}

void teacher::print() {
    cout << "gender " <<gender <<endl;
}

void teacher::print(student & s) {
    cout << "gender " <<gender <<endl;
    cout << s.name <<endl;
}