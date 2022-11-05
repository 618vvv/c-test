/* 1．编写一个程序，读取键盘输入，直到遇到@符号为止，并回显
输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大
写（别忘了cctype函数系列）。 */

#include<iostream>
#include<cctype>
using namespace std;
/*
int isdigit(int c) //该函数检查所传的字符是否是十进制数字。
int isalpha(int c)	//该函数检查所传的字符是否是字母。
int islower(int c) //该函数检查所传的字符是否是小写字母。
int isupper(int c)	//该函数检查所传的字符是否是大写字母。

int tolower(int c) //该函数把大写字母转换为小写字母。
int toupper(int c) //该函数把小写字母转换为大写字母。
*/
int main()
{
    char ch=0;
     while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
        {
            continue;
        } 
        else if (islower(ch))
        {
            cout << (char)toupper(ch);
        }
        else if (isupper(ch))
        {
            cout << (char)tolower(ch);
        }
    }
    cout<<endl;
    cout << "Done!" << endl;
    system("pause");
    return 0;
}
 