/* 4．编写一个程序，它要求用户首先输入其名，再输入其姓；然后
程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
请使用string对象和头文件string中的函数。下面是该程序运行时的情
形： */

#include<iostream>
#include<string>
using namespace std;

int main() {
    string f_name;
    string l_name;
    string combine;
    cout << "Enter your first name: ";
    getline(cin, f_name);
    cout << "Enter your last name: ";
    getline(cin, l_name);
    combine = l_name + ", " + f_name;
    cout << "Here's the information in a single string: " << combine << endl;

    system("pause");
    return 0;
}