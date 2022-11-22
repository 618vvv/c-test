  #include<iostream>
#include<string>
#include "golf.h"
using namespace std;
/*
g++ golf.cpp main.cpp
./a.out
输出样例：

0

200
jimmt
100
jimmt
200
 */

int main()
{
    Golf g;
    Golf g2("jimmt",100);
    g.showgolf();
    g.handicap_golf(200);
    g.showgolf();
    g2.showgolf();
    g2.handicap_golf(200);
    g2.showgolf();
    return 0;}