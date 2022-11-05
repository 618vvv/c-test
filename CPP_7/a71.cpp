/* 1．编写一个程序，不断要求用户输入两个数，直到其中的一个为
0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并
将结果返回给main( )，而后者将报告结果。调和平均数指的是倒数平均
值的倒数，计算公式如下： */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int aver(int a,int b)
{
    double average=0;
    while(a!=0&&b!=0)
    {
        average=2.0*a*b/(a+b);
        cout<<"调和平均数是"<<average<<endl;
        cout<<"请继续输入:";
        cin>>a>>b;
    }
    return 0;
}
 int main()
 {
    double x,y;
    double ave=0;
    cout<<"请输入两个数：";
    cin>>x>>y;
    aver(x,y);
    return 0;
 }

