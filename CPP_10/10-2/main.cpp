#include<iostream>
#include<string>
#include "person.h"
using namespace std;
/* 
g++ main.cpp person.cpp
./a.out
输出样例：




Heyyou
smythecradft
smythecradft
Heyyou
Sam
Dimwiddy
Dimwiddy
Sam
 */
int main()
{
    Person one;
    Person two("smythecradft");
    Person three("Dimwiddy","Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    return 0;
}