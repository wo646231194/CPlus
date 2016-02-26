//
// Created by hugbr on 2016/2/26.
//

#ifndef SELFSTRING_STRING_H
#define SELFSTRING_STRING_H

#include <iostream>
using namespace std;

class String {

public:
    String(const char*);
    String(int n, char c);
    ~String();

    String(String & s);
    const String & operator=(String &s);

    char operator[](int n)const ;
    char at(int n)const ;

    int size()const ;
    size_t length()const ;
    bool isEmpty()const ;

    const String&operator+=(const String& s);
    bool operator==(const String& s);
    bool compare(const String& s);

    friend ostream &operator<<(ostream &output, String &s);
    friend istream &operator>>(istream &input, String &s);

private:
    char * myBuff;
    int myLen;
    int myBuffSize;

};


#endif //SELFSTRING_STRING_H
