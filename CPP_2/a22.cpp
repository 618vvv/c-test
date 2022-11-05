/* 2．编写一个C++程序，它要求用户输入一个以long为单位的距离，
然后将它转换为码（一long等于220码）。 */

// 多行注释：shift+ALT+A
// 单行注释：CTRL+/

#include<iostream>
using namespace std;
int main()
{
    cout<<"请输入一个以long为单位的距离：";
    int num;
    cin>>num;
    cout<<"转换为码，结果为："<<num*220<<endl;
    system("pause");
    return 0;
}