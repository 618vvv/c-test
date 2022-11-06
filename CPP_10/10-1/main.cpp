/* 5．定义一个类来表示银行帐户。数据成员包括储户姓名、账号
（使用字符串）和存款。成员函数执行如下操作：
创建一个对象并将其初始化；
显示储户姓名、账号和存款；
存入参数指定的存款；
取出参数指定的款项。 */

/* 
g++ main.cpp account.cpp
./a.out

测试样例：
Liminig
542352
55500
Liminig的存款是200
bye 
*/

#include <iostream>
#include <string>
#include "account.h"
using namespace std;
int main()
{
    {
    Bank a=Bank("Liminig","542352",55500);
    a.show();
    a.save(200);
    a.remove();
    }
    return 0;
}

