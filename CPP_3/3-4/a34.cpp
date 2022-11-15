/* 4．编写一个程序，要求用户以整数方式输入秒数（使用long或long
long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使
用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多
少秒。该程序的输出应与下面类似： */

#include<iostream>
using namespace std;
const int d_to_h =24;
const int h_to_m=60;
const int m_to_s=60;
int main()
{
    long long a;
    cout<<"Enter the number of seconds:";
    cin>>a;
    int day,hour,minute,second;
    day=a/m_to_s/h_to_m/d_to_h;
    a=a-day*d_to_h*h_to_m*m_to_s;
    hour=a/h_to_m/m_to_s;
    a=a-hour*h_to_m*m_to_s;
    minute=a/m_to_s;
    second=a-minute*m_to_s;
    cout<<a<<" seconds ="<<day<<" days,"<<hour<<" hours,"<<minute<<" minutes,"<<second<<" seconds."<<endl;
    system("pause");
    return 0;
}