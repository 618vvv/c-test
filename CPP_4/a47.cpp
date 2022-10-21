/* 7．William Wingate从事比萨饼分析服务。对于每个披萨饼，他都
需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成。
披萨饼的直径。
披萨饼的重量
请设计一个能够存储这些信息的结构，并编写一个使用这种结构变
量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用
cin（或它的方法）和cout。
 */

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
    pizza a;
    getline(cin,a.name);
    cin>>a.len;
    cin>>a.wei;
    cout<<"公司名称为："<<a.name<<endl<<"披萨饼的直径为："<<a.len<<endl<<"披萨饼的重量为："<<a.wei<<endl;
    system("pause");
    return 0;

}