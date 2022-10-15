/* 1．编写一个要求用户输入两个整数的程序。该程序将计算并输出
这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较
小的整数。例如，如果用户输入的是2和9，则程序将指出2～9之间所有
整数的和为44。
 */

#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a+1;i<b;i++)
    sum+=i;
    cout<<"和为："<<sum<<endl;
    system("pause");
    return 0;
}