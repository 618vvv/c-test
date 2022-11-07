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
void Time::show() const {
    cout <<" "<< hours << " hours, " << minutes << " minutes"<<endl;
}
