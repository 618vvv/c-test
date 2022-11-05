/* 7．编写一个程序，它每次读取一个单词，直到用户只输入q。然
后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，
还有多少个单词不属于这两类。为此，方法之一是，使用isalpha( )来区
分以字母和其他字符打头的单词，然后对于通过了isalpha( )测试的单
词，使用if或switch语句来确定哪些以元音打头。该程序的运行情况如
下： */
#include<iostream>
#include<string>
#include<cctype>
#include <string.h>
using namespace std;
int main()
{
    string a,b="q";
    int num1=0,num2=0,num3=0;
    while(cin>>a)
    {
        if(strcmp(a.c_str(),b.c_str())==0)
            break;
        if(isalpha(a[0]))
        {
            if(a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='u')
            num1++;
            else
            num2++;
        }else
            num3++; 
    }
    cout<<"元音开头的单词有"<<num1<<"个"<<endl;
    cout<<"辅音开头的单词有"<<num2<<"个"<<endl;
    cout<<"其他单词有"<<num3<<"个"<<endl;
    system("pause");
    return 0;
}