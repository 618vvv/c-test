#include<iostream>
#include<string>
#include "golf.h"
using namespace std;
Golf::Golf(char * fname,int handicap_golf)
{
    for(int i=0;i<Len;i++)
    fullname[i]=fname[i];
    handicap=handicap_golf;
}
void Golf::showgolf() const
{
    cout<<(*this).fullname<<endl;
    cout<<(*this).handicap<<endl;
}
void Golf::handicap_golf(int hc) 
{
    handicap=hc;
}
