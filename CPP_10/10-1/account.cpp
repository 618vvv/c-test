#include<iostream>
#include "account.h"
using namespace std;
Bank::Bank()
{
    name="a";
    account_num="b";
    money=0.0;
}
Bank::~Bank()
{
    cout<<"bye"<<endl;
}

Bank::Bank(string name_b,string account_num_b,double money_b)
{
    name=name_b;
    account_num=account_num_b;
    money=money_b;
}
void Bank::save(double money_b)
{
    money=money_b;
}
void Bank::remove() const
{
    cout<<(*this).name<<"的存款是"<<money<<endl;
}
void Bank::show() const
{
    cout<<name<<endl;
    cout<<account_num<<endl;
    cout<<money<<endl;
}
