/* 9．编写一个满足前一个练习中描述的程序，但使用string对象而不
是字符数组。请在程序中包含头文件string，并使用关系运算符来进行
比较测试。 */

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a;
    int num=0;
    cin>>a;
    while(a!="done")
    {
        num++;
        cin>>a;
    }
    cout<<"单词的个数为："<<num<<endl;
    system("pause");
    return 0;
}