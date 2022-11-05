/* 4．下面是一个程序框架
请提供其中描述的函数和原型，从而完成该程序。注意，应有两个
show( )函数，每个都使用默认参数。请尽可能使用cosnt参数。set( )使用
new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实
现类时使用的相似。（可能还必须修改头文件的名称，删除using编译指
令，这取决于所用的编译器。） */

/* 参考模板 */

#include <iostream>
using namespace std;
#include <cstring>              // for strlen(), strcpy()
 
struct stringy {
    char * str;                 // points to a string
    int ct;                     // length of string (not counting '\0')
}; 
 
// prototypes for set(), show(), and show() go here 
void set(stringy & stry, const char * str)
{
    stry.str=new char [strlen(str)+1];
    strcpy(stry.str, str);
    stry.ct=strlen(str)+1;
}
 
void show(const stringy & stry, int n=1)
{
    for(int i = 0;i < n;i++)
        cout<<stry.str<<endl;
}
 
void show(const char * str, int n=1)
{
    for (int i = 0; i < n; i++)
        cout << str << endl;
} 
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    
    set(beany, testing);                        
    show(beany);                // prints member string once 打印一次
    show(beany, 2);             // prints member string twice 打印两次
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);              // prints testing string once 
    show(testing, 3);           // prints testing string thrice 
    show("Done!");
    return 0;
}
 
