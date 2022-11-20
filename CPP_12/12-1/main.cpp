#include <iostream>
#include "cow.h"

using std::cout;

/* g++ main.cpp cow.cpp
./a.out
输出样例：
名字是：
爱好是：n
体重是：0
名字是：Ginger ale
爱好是：M
体重是：80
名字是：
爱好是：n
体重是：0

名字是：Ginger ale
爱好是：M
体重是：80 */

int main()
{
    Cow test1;
    Cow test2("Ginger ale", "Missing you", 80);
    Cow test3 (test1);     //使用复制构造
    test1.ShowCow();
    test2.ShowCow();
    test3.ShowCow();
    cout << std::endl;
    test3 = test2;          //使用赋值运算符
    test3.ShowCow();
    return 0;
}
