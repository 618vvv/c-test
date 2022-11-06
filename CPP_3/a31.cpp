/* 1．编写一个小程序，要求用户使用一个整数指出自己的身高（单
位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来
指示输入位置。另外，使用一个const符号常量来表示转换因子。
 */

// 1英尺=12英寸

/*
const使用
https://blog.csdn.net/k5722166/article/details/85114068 */

#include<iostream>
using namespace std;

const int num=12;

int main()
{
    cout<<"请输入你的身高（单位为英寸）___\b\b\b:";
    int a,b,c;
    cin>>a;
    b=a/num;
    c=a%num;
    cout<<"身高为 "<<b<<" 英尺 "<<c<<" 英尺 "<<endl;
    return 0;

}