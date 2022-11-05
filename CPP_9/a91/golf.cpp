#include "golf.h"
#include<iostream>
#include<cstring>
using namespace std;
void setgolf(golf& g, const char* name, int hc)
{
    if(strlen(name)>0)
        strcpy(g.fullname,name);
    if(hc>0)
        g.handicap=hc;
}

int setgolf(golf& g)
{
    cout<<"请输入fullname:"<<endl;
    cin.getline(g.fullname,Len);
    int num=1;
    if(strcmp(g.fullname," ")==0)
    {
        num=0;
        return num;
    }else{
        cout<<"请输入value:"<<endl;
        cin>>g.handicap;
        return num;
    }
}
void handicap(golf& g, int hc)
{
    if(hc>0)
        g.handicap=hc;
}
void showgolf(const golf& g)
{
    cout<<"name:"<<g.fullname<<endl;
    cout<<"handicap:"<<g.handicap<<endl;
}