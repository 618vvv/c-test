#include<iostream>
#include "plorg.h"
using namespace std;
void Plorg::show() const
{
    cout<<name<<endl;
    cout<<CI<<endl;
}
void Plorg::set(int a)
{
    CI=a;
}
