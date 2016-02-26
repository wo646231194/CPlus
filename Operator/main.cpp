#include <iostream>
#include "Time.h"

using namespace std;

//--------运算符重载--------
//Time operator+(Time& time1,Time& time2){
//    int hour = 0,minute = 0;
//    int second = time1.getSecond()+time2.getSecond();
//    minute = time1.getMinute() + time2.getMinute() +(second>60?1:0);
//    hour = time1.getHour()+time2.getHour()+(minute>60?1:0);
//    hour = hour>24?hour-24:hour;
//    minute = minute>60?minute-60:minute;
//    second = second>60?second-60:second;
//    Time time(hour,minute,second);
//    return time;
//}

Time addTime(Time& time1,Time& time2){
    int hour = 0,minute = 0;
    int second = time1.getSecond()+time2.getSecond();
    minute = time1.getMinute() + time2.getMinute() +(second>60?1:0);
    hour = time1.getHour()+time2.getHour()+(minute>60?1:0);
    hour = hour>24?hour-24:hour;
    minute = minute>60?minute-60:minute;
    second = second>60?second-60:second;
    Time time(hour,minute,second);
    return time;
}

istream& operator>>(istream& input,Time& time){
    int hour,minute,second;
    cin>>hour>>minute>>second;
    time.setHour(hour);
    time.setMinute(minute);
    time.setSecond(second);
    return input;
}

ostream& operator<<(ostream& output,Time& time){
    time.print();
    return output;
}

int main() {
    cout << "Hello, World!" << endl;
    Time time1(14,38,6);
    time1.print();

    Time time2(20,12,12);
    time2.print();

    Time time3 = addTime(time1,time2);
    time3.print();

    //+运算符
    Time time4 = time3+time2;
    time4.print();

    //赋值运算符
    time1 = time4;
    time1.print();

    bool s1 = time2 == time4;
    bool s2 = time2 > time4;

    (time2++).print();//前置++
    (++time2).print();//后置++

    cout<<"istream:请输入时间"<<endl;
    Time time5;
    cin>>time5;
    time5.print();
    cout<<"ostream:"<<time5;

    int sumsecond = time5;
    cout<<sumsecond<<endl;

    return 0;
}