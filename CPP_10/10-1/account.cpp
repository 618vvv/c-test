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
    money+=money_b;   //存入指定的存款应该是money+存入的钱吧,不应该直接覆盖
}
void Bank::remove(double money_b)
{
    while(money_b>money)
    {
        cout<<"当前金额不足！请重试:";
        cin>>money_b;
    }
    money-=money_b;
}
void Bank::show() const
{
    cout<<"名字为："<<name;
    cout<<"，账户为："<<account_num;
    cout<<"，金额为："<<money<<endl;
}
