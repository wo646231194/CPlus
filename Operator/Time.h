//
// Created by hugbr on 2016/2/25.
//

#ifndef OPERATOR_TIME_H
#define OPERATOR_TIME_H


class Time {

public:
    Time();
    Time(int hour,int minute,int second = 0);
    Time(int value);
    //Time(Time& time);
    ~Time();

    //--------运算符重载--------
    Time operator+(Time & t);
    Time operator=(Time t);
//    Time operator=(Time & t);
    bool operator==(Time & t);
    bool operator>(Time & t);
    Time operator++();//前置++
    Time operator++(int);//后置++

    //类型转换
    operator int();

    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    int getHour();
    int getMinute();
    int getSecond();

    void print();

private:
    int myhour;
    int myminute;
    int mysecond;

};


#endif //OPERATOR_TIME_H
