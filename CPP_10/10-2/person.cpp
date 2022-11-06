#include<iostream>
#include<string>
#include "person.h"
/* Person::~Person()
{
    cout<<"bye";
} */
Person::Person(const string & ln, const char * fn)
{
    lname=ln;
    for(int i=0;i<LIMIT;i++)
        fname[i]=fn[i];
}
void Person::Show() const
{
    cout<<fname<<endl;
    cout<<lname<<endl;
}
void Person::FormalShow() const
{
    cout<<lname<<endl;
    cout<<fname<<endl;
}


