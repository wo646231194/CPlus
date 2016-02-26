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

    //--------���������--------
    Time operator+(Time & t);
    Time operator=(Time t);
//    Time operator=(Time & t);
    bool operator==(Time & t);
    bool operator>(Time & t);
    Time operator++();//ǰ��++
    Time operator++(int);//����++

    //����ת��
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
