/* 请提供成员函数的定义和测试这个类的程序。 */
#include<iostream>
#include "move.h"
using namespace std;

int main()
{
    Move a(2.7,5.3);
    a.showMove();
    Move v(2,4);
    a.add(v);
    a.showMove();
    a.reset(43,645);
    a.showMove();
    return 0;
}

/* g++ main.cpp move.cpp
./a.out
2.7
5.3
2.7
5.3
43
645 */