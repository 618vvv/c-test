/* 10．编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，
也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个
array对象来存储数据（如果编译器不支持array类，请使用数组）。 */

#include<iostream>
#include<array>
using namespace std;
const int time=3;
int main()
{
    array<float,time> grade;
    float sum=0.0,average=0.0;
    for(int i=0;i<time;i++)
    {
        cin>>grade[i];
        cout<<"第"<<i+1<<"次的成绩为："<<grade[i]<<endl;
        sum+=grade[i];
    }
    average=sum/time;
    cout<<"平均成绩为："<<average<<endl;
    system("pause");
    return 0;
}