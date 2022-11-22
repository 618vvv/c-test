/* 4．完成第9章的编程练习4，但将Sales结构及相关的函数转换为一
个类及其方法。用构造函数替换setSales（sales &，double [ ]，int）函
数。用构造函数实现setSales（Sales &）方法的交互版本。将类保留在名称空间SALES中。
 */

#include<iostream>
#include"namesp.h"
using namespace std;
using namespace SALES;
int main()
{
    double s[QUARTERS]={0,1,2,3};
    double average_m,max_m,min_m;
	Sales s1;
    Sales s2(s,QUARTERS);
    s1.showSales();
    s2.showSales();
	return 0;
}
/*
g++ namesp.cpp main.cpp
./a.out
输出样例：
请输入第1个数:423
请输入第2个数:7534
请输入第3个数:432
请输入第4个数:65
的信息为：0
0
0
0
平均数为:0
最大值为：0
最小值为：0
的信息为：423
7534
432
65
平均数为:2113.5
最大值为：7534
最小值为：6.91226e-310
 */