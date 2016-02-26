//
// Created by hugbr on 2016/2/26.
//

#include <string.h>
#include "String.h"

#define ExtLength 50

String::String(const char *string) {
    myLen = strlen(string);
    myBuff = new char[myLen + ExtLength];
//    strcpy(myBuff,string);
    memcpy(myBuff, string, (size_t) myLen);
    myBuffSize = myLen + ExtLength;
}

String::String(int n, char c) {
    myBuff = new char[n + ExtLength];
    for (int i = 0; i < n; ++i) {
        myBuff[i] = c;
    }
    myLen = n;
    myBuffSize = n + ExtLength;
}

String::~String() {
    if(myBuff){
        delete []myBuff;
        myBuff = NULL;
    }
    myLen = 0;
    myBuffSize = 0;
}

String::String(String &s) {
    myBuff = new char[s.length() + ExtLength];
//    strcpy(myBuff,s.myBuff);
    memcpy(myBuff,s.myBuff,s.length());
    myLen = s.length();
    myBuffSize = s.length() + ExtLength;
}

const String &String::operator=(String &s) {
    if(this == &s){
        return *this;
    }
    if(myBuff){
        delete []myBuff;
        myBuff = NULL;
    }

    myBuff = new char[s.length() + ExtLength];
//    strcpy(myBuff,s.myBuff);
    memcpy(myBuff,s.myBuff,s.length());
    myLen = s.length();
    myBuffSize = s.length() + ExtLength;
    return *this;
}

char String::operator[](int n) const {
    if(n >= myLen){
        return 0;
    }
    return myBuff[n];
}

char String::at(int n) const {
    if(n >= myLen){
        return 0;
    }
    return myBuff[n];
}

int String::size() const {
    return myBuffSize;
}

size_t String::length() const {
    return (size_t) myLen;
}

bool String::isEmpty() const {
    return !myLen;
}

const String &String::operator+=(const String &s) {
    if(myBuffSize-myLen>s.length()){
//        strcat(myBuff,s.myBuff);
        memcpy(myBuff+myLen, s.myBuff, (size_t) s.length());
        myLen = myLen + s.length();
        myBuffSize -= s.length();
    } else{
        int len = myLen + s.length();
        char * p = new char[len + ExtLength];
//        strcpy(p,myBuff);
        memcpy(p, myBuff, (size_t) myLen);
//        strcpy(p+myLen,s.myBuff);
        memcpy(p+myLen,s.myBuff,s.length());
        myLen = len;
        myBuffSize = len + ExtLength;

        if(myBuff){
            delete []myBuff;
            myBuff = NULL;
        }

        myBuff = p;
    }
    return *this;
}

bool String::operator==(const String &s) {

}

bool String::compare(const String &s) {
    return false;
}

istream& operator>>(istream& input , String & s){
    cin.get(s.myBuff,s.size(),'\n');
    return input;
}

ostream& operator<<(ostream& output, String & s){
    for (int i = 0; i < s.length(); ++i) {
        cout.put(s[i]);
    }
    return output;
}
