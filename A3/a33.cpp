/* 3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量
的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
下面是该程序运行时的情况： */

#include<iostream>
#include<cmath>
using namespace std;
const float num=60;
int main()
{
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    float degrees,minutes,seconds;
    cout<<"First, enter the degrees:";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc:";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc:";
    cin>>seconds;
    cout<<degrees<<" degrees, "<<minutes<<" minutes ,"<<seconds<<" seconds ="<<degrees+minutes/num+seconds/pow(num,2)<<" degrees."<<endl;
    system("pause");
    return 0;
}