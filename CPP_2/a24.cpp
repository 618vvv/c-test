/* 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少
个月，如下所示： */

#include<iostream>
using namespace std;
int age(int a)
{
    return a*12;
}
int main()
{
    cout<<"enter your age:";
    int a;
    cin>>a;
    cout<<age(a)<<endl;
    system("pause");
    return 0;
}
