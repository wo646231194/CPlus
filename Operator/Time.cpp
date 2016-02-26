//
// Created by hugbr on 2016/2/25.
//

#include "Time.h"
#include <iostream>
using namespace std;

Time::Time() {
    cout<<"Constructing"<<endl;
}

Time::Time(int hour, int minute, int second) {
    myhour = hour;
    myminute = minute;
    mysecond = second;
    cout<<"Constructing"<<endl;
}

Time::~Time() {
    cout<<"Destroying"<<endl;
}

void Time::setHour(int hour) {
    myhour = hour;
}

void Time::setMinute(int minute) {
    myminute = minute;
}

void Time::setSecond(int second) {
    mysecond = second;
}

int Time::getHour() {
    return myhour;
}

int Time::getMinute() {
    return myminute;
}

int Time::getSecond() {
    return mysecond;
}

void Time::print() {
    cout<<myhour<<":"<<myminute<<":"<<mysecond<<endl;
}

Time Time::operator+(Time &t) {
    int hour = 0,minute = 0;
    int second = this->getSecond()+t.getSecond();
    minute = this->getMinute() + t.getMinute() +(second>60?1:0);
    hour = this->getHour()+t.getHour()+(minute>60?1:0);
    hour = hour>24?hour-24:hour;
    minute = minute>60?minute-60:minute;
    second = second>60?second-60:second;
    Time time(hour,minute,second);
    return time;
}

//Time Time::operator=(Time & t) {
//    if(*this == t){
//        return *this;
//    }
//
//    myhour = t.getHour();
//    myminute = t.getMinute();
//    mysecond = t.getSecond();
//    Time tmp(myhour,myminute,mysecond);
//    return tmp;
//}

bool Time::operator==(Time &t) {
    if(this->getHour()==t.getHour()&&
            this->getSecond()==t.getSecond()&&
            this->getMinute()==t.getMinute())
    return true;
    return false;
}

bool Time::operator>(Time &t) {
    if(this->getHour()>t.getHour()) return true;
    else if(this->getHour()<t.getHour()) return false;
    if(this->getMinute()>t.getMinute()) return true;
    else if(this->getMinute()<t.getMinute()) return false;
    this->getSecond()>t.getSecond()? true:false;
}

Time Time::operator++() {
    Time time = *this;
    Time t(0,0,1);
    time = time + t;
    return time;
}

Time Time::operator++(int) {
    Time time = *this;
    Time t(0,0,1);
    *this = (*this + t);
    return time;
}

Time Time::operator=(Time t) {
    myhour = t.getHour();
    myminute = t.getMinute();
    mysecond = t.getSecond();
//    Time tmp(myhour,myminute,mysecond);
    return *this;
}

Time::Time(int value) {
    myhour = value;
    myminute = value;
    mysecond = value;
    cout<<"Constructing"<<endl;
}

Time::operator int() {
    return myhour*3600+myminute*60+mysecond;
}
