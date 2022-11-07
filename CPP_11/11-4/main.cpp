#include<iostream>
#include "time_a.h"
using namespace std;

int  main() {
    Time plan,total;
    Time coding(2, 40);
    Time fixing(5, 55);

    cout << "planning time =";
    plan.show();
    cout << "coding time =";
    coding.show();
    cout << "fixing time =";
    fixing.show();

    int a = 5, b = 6;
    cout << "a+b="<<a + b << endl;//int型加法
    total = coding + fixing;//Time型加法（即“+”号重载）
    cout << "coding + fixing =";
    total.show();

    Time morefixing(3, 28);
    cout << "more fixing time =";
    morefixing.show();
    Time temp;
    temp = morefixing+total;
    cout << "morefixing.operator+(total) =";
    temp.show();
    return 0;
}