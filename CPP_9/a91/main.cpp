/* 上述函数调用提供了存储在ann结构中的信息。可以这样使用其第
二个版本：
上述函数将提示用户输入姓名和等级，并将它们存储在andy结构
中。这个函数可以（但是不一定必须）在内部使用第一个版本。
根据这个头文件，创建一个多文件程序。其中的一个文件名为
golf.cpp，它提供了与头文件中的原型匹配的函数定义；另一个文件应
包含main( )，并演示原型化函数的所有特性。例如，包含一个让用户输
入的循环，并使用输入的数据来填充一个由golf结构组成的数组，数组
被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。
main( )函数只使用头文件中原型化的函数来访问golf结构。
 */

/* 
g++ golf.cpp main.cpp -o 9_1
./9_1

name:a
handicap:20
请输入fullname:
fsdg
请输入value:
56
name:fsdg
handicap:56
name:fsdg
handicap:2
 */
#include<iostream>
#include "golf.h"
using namespace std;
int main()
{
    golf a;
    setgolf(a,"a",20);
    showgolf(a);

    setgolf(a);
    showgolf(a);

    handicap(a,2);
    showgolf(a);
    return 0;
}