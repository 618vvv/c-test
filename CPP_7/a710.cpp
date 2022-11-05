/* 10．设计一个名为calculate( )的函数，它接受两个double值和一个指
向函数的指针，而被指向的函数接受两个double参数，并返回一个
double值。calculate( )函数的类型也是double，并返回被指向的函数使用
calculate( )的两个double参数计算得到的值。例如，假设add( )函数的定
义如下： */
#include<iostream>
using namespace std;
double add(double x ,double y)
{
    return x+y;
}
double average(double x,double y)
{
    return (x+y)/2.0;
}
double calculate(double x,double y,double (*p)(double,double))
{
    return p(x,y);
}
int main()
{
    double a,b;
    cout<<"请输入a和b:";
    while(cin>>a>>b)
    {
        cout<<"a+b="<<calculate(a,b,add)<<endl;
        cout<<"(a+b)/2="<<calculate(a,b,average)<<endl;
        cout<<"请输入a和b:";
    }
    return 0;
}
