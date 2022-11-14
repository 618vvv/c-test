#include <iostream>
#include "time_a.h"
using namespace std;

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}
void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;

}
void Time::AddHr(int h) {
    hours += h;
}
void Time::Reset(int h , int m ) {
    hours = h;
    minutes = m;
}
Time operator+(const Time &a,const Time &b)
{
    Time sum;
    sum.minutes =a.minutes + b.minutes;
    sum.hours = a.hours + b.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
/*
向左缩进：Ctrl + [ 或者 Shift+Tab
向右缩进：Ctrl + ] 或者 Tab
 */
Time operator-(const Time &a,const Time &b)
{
    Time sum;
    int total_a,total_b,flag=0;
    total_a=a.hours*60+a.minutes;
    total_b=b.hours*60+b.minutes;
    if(total_b>total_a)
    {
        sum.minutes = (total_b-total_a)%60;
        sum.hours = (total_b-total_a)/60;
        sum.minutes*=-1;
        sum.hours*=-1;
    }else
    {
        sum.minutes = (total_a-total_b)%60;
        sum.hours = (total_a-total_b)/60;
    }
    return sum;
}
Time operator*(double a,const Time &b)
{
    Time c;
    double total=b.hours*60+b.minutes;
    total*=a;
    c.hours=total/60.0;
    c.minutes=total-60.0*c.hours;
    return c;
}

std::ostream & operator<<(std::ostream &os,const Time &a)
{
    os<<a.hours<<"小时"<<a.minutes<<"分"<<endl;
    return os;
}
