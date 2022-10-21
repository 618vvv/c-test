/* 3．编写一个要求用户输入数字的程序。每次输入后，程序都将报
告到目前为止，所有输入的累计和。当用户输入0时，程序结束。
 */
#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    while(a!=0)
    {
        sum+=a;
        cout<<"当前的累计和为:"<<sum<<endl;
        cin>>a;
    }
    system("pause");
    return 0;
}