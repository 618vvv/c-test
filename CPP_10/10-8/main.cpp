/* 8．可以将简单列表描述成下面这样：
可存储0或多个某种类型的列表；
可创建空列表；
可在列表中添加数据项；
可确定列表是否为空；
可确定列表是否为满；
可访问列表中的每一个数据项，并对它执行某种操作。
请设计一个List类来表示这种抽象类型。您应提供头文件list.h和实
现文件list.cpp，前者包含类定义，后者包含类方法的实现。您还应创建
一个简短的程序来使用这个类。
 */
#include<iostream>
#include "tlist.h"
using namespace std;
int main()
{
    Tlist one;
    one.show();
	cout << "是否空：" <<one.isempty()<<endl;
    uItem a=20;
    one.add(a);
    one.show();
    cout<<endl;
    one.visit(half);
    one.visit(half);
    one.show();
    return 0;

}

/* g++ main.cpp tlist.cpp
./a.out
是否空：1
是否添加成功：20 

0:10
10  */