/* 1．编写一个C++程序，如下述输出示例所示的那样请求并显示信
息：
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调
整成绩，即向上调一个字母。假设用户请求A、B或C，所以不必担心D
和F之间的空档 */
#include<iostream>
#include<string>

using namespace std;
int main()
{
    char f_name[20],l_name[20],grade;
    int age;
    cout<<"What is your first name? ";
    cin>>f_name;
    cout<<"What is your last name? ";
    cin>>l_name;
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Name:"<<f_name<<","<<l_name<<endl;
    cout<<"Grage:"<<char(grade+1)<<endl;
    cout<<"Age:"<<age<<endl;
    system("pause");
    return 0;
}