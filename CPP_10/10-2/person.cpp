#include<iostream>
#include<cstring>
#include "person.h"
/* Person::~Person()
{
    cout<<"bye";
} */
Person::Person(const string & ln, const char * fn)
{
    lname=ln;
    strcpy(fname,fn);   //或者memcpy
/*     for(int i=0;i<LIMIT;i++)
        fname[i]=fn[i]; */
}
void Person::Show() const
{
    cout<<"fname:"<<fname<<endl;
    cout<<"lname:"<<lname<<endl;
}
void Person::FormalShow() const
{
   // cout<<(*this)<<endl;
    cout<<"lname:"<<lname<<endl;
    cout<<"fname:"<<fname<<endl;
}


