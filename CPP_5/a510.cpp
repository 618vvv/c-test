/* 10．编写一个使用嵌套循环的程序，要求用户输入一个值，指出要
显示多少行。然后，程序将显示相应行数的星号，其中第一行包括一个
星号，第二行包括两个星号，依此类推。每一行包含的字符数等于用户
指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运
行情况如下 */
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of rows:";
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i-1;j++)
        cout<<".";
        for(int k=0;k<=i;k++)
        cout<<"*";
        cout<<endl;
    }
    system("pause");
    return 0;
}