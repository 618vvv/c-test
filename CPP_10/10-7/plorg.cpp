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
Plorg::Plorg(char *p_name,int p_CI)
{
    strcpy(name,p_name);
    p_CI=CI;
}
