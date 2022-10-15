/* 5．编写一个程序，其中的main( )调用一个用户定义的函数（以摄
氏温度值为参数，并返回相应的华氏温度值）。该程序按下面的格式要
求用户输入摄氏温度值，并显示结果： */

#include<iostream>
using namespace std;
float transform(float a)
{
    return a*1.8+32;
}
int main()
{
    cout<<"Please enter a Celsius value: ";
    float a;
    cin>>a;
    cout<<a<<" degree Celsius is "<<transform(a)<<" degrees Fahrenheit."<<endl;
    system("pause");
    return 0;
}