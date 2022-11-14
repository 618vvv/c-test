#include<iostream>
#include "time_a.h"
using namespace std;

int  main() {
    Time plan,total;
    Time coding(2, 40);
    Time fixing(5, 55);

    cout << "planning time ="<<plan;
    cout << "coding time ="<<coding;
    cout << "fixing time ="<<fixing;
    int a = 5, b = 6;
    cout << "a+b="<<a + b << endl;//int型加法
    total = coding + fixing;//Time型加法（即“+”号重载）
    cout << "coding + fixing ="<<total;
    total=coding-fixing;
    cout << "coding - fixing ="<<total;
    Time morefixing(3, 28);
    cout << "more fixing time ="<<morefixing;
    Time temp;
    temp = 2.0*total;
    cout << "2.0*total ="<<temp;
    return 0;
}