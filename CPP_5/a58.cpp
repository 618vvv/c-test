/* 8．编写一个程序，它使用一个char数组和循环来每次读取一个单
词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词
（不包括done在内）。下面是该程序的运行情况： */

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[50];
    int num=0;
    cin>>a;
    while(strcmp(a,"done")!=0)
    {
        num++;
        cin>>a;
    }
    cout<<"单词的个数为："<<num<<endl;
    system("pause");
    return 0;
}
