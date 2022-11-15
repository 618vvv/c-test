/* 3．编写一个函数，它接受一个指向string对象的引用作为参数，并
将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper(
)。然后编写一个程序，它通过使用一个循环让您能够用不同的输入来
测试这个函数，该程序的运行情况如下：
 */
/* 样例：
请输入字符串，输入@代表结束：btrev
BTREV
请输入字符串，输入@代表结束：cferqcw
CFERQCW
请输入字符串，输入@代表结束：@ 
*/

#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
void change(string a)
{
    int num=strlen(a.c_str());
    for(int i=0;i<num;i++)
    {
        a[i]=toupper(a[i]);
    }
    cout<<a<<endl;
}
int main()
{
    string a,b="@";
    cout<<"请输入字符串，输入@代表结束：";
    cin>>a;
    while(strcmp(a.c_str(),b.c_str())!=0)
    {
        change(a);
        cout<<"请输入字符串，输入@代表结束：";
        cin>>a;
    }
    return 0;
}