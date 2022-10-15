/* 8．完成编程练习7，但使用new来为结构分配内存，而不是声明一
个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼
的直径。 */

#include<iostream>
#include<string>
using namespace std;
struct pizza{
    string name;
    float len;
    float wei;
};
int main()
{
    pizza *a=new pizza();
    getline(cin,a->name);
    cin>>a->len;
    cin>>a->wei;
    cout<<"公司名称为："<<a->name<<endl<<"披萨饼的直径为："<<a->len<<endl<<"披萨饼的重量为："<<a->wei<<endl;
    system("pause");
    return 0;

}