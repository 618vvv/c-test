/* 6．编写一个程序，其main( )调用一个用户定义的函数（以光年值
为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输
入光年值，并显示结果： */

#include<iostream>

using namespace std;

double transform(double a)
{
    return 63240*a;
}
int main()
{
    float a;
    cout<<"Enter the number of light years: ";
    cin>>a;
    cout<<a<<" light years = "<<transform(a)<<" astronomical units. "<<endl;
    system("pause");
    return 0;
}