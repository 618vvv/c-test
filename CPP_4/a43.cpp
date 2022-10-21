/* 3．编写一个程序，它要求用户首先输入其名，然后输入其姓；然
后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结
果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的
情形：
 */

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char f_name[40],l_name[40],combine[40];
    cout<<"Enter your first name:";
    cin.getline(f_name, 20);
    cout<<"Enter your last name: ";
    cin.getline(l_name, 20);
    strcpy_s(combine, l_name);
    strcat_s(combine, ", ");
    strcat_s(combine, f_name);
    cout << "Here's the information in a single string: " << combine << endl;
    system("pause");
    return 0;
}