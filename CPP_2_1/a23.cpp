/* 3．编写一个C++程序，它使用3个用户定义的函数（包括main(
)），并生成下面的输出： */
#include<iostream>
using namespace std;
void functionA()
{
    cout<<"Three blind mice"<<endl;
}
void functionB()
{
    cout<<"See how then run"<<endl;
}
int main()
{
    functionA();
    functionA();
    functionB();
    functionB();
    system("pause");
    return 0;
}