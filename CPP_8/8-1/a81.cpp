/* 1．编写通常接受一个参数（字符串的地址），并打印该字符串的
函数。然而，如果提供了第二个参数（int类型），且该参数不为0，则
该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打
印次数不等于第二个参数的值，而等于函数被调用的次数）。是的，这
是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一
个简单的程序中使用该函数，以演示该函数是如何工作的。
 */

/* 样例：
vhvrt_vtrsv   5 
*/
#include<iostream>
using namespace std;
void Result(string a)
{
    cout<<a<<endl;
}
void Result_num(string a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a<<endl;
    }
}
int main()
{
    string str;
    int n;
    cout<<"请输入字符串:";
    cin>>str;
    cout<<"请输入次数：";
    cin>>n;
    if(n==0)
    {
        Result(str);
    }else
    {
        Result_num(str,n);
    }
    return 0;
}