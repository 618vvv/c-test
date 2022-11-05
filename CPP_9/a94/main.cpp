/* 第一个文件是一个头文件，其中包含名称空间；第二个文件是一个
源代码文件，它对这个名称空间进行扩展，以提供这三个函数的定义；
第三个文件声明两个Sales对象，并使用setSales( )的交互式版本为一个
结构提供值，然后使用setSales( )的非交互式版本为另一个结构提供值。
另外它还使用showSales( )来显示这两个结构的内容 *///main.cpp

/* 
g++ namesp.cpp main.cpp
./9_4
2 34 65 75 
*/
#include<iostream>
#include"namesp.h"
using namespace SALES;
int main()
{

	Sales s1,s2;          //声明两个Sales对象
	double a[4];         
	std::cout << "Please enter numbers:";
	for (int i = 0; i < 4; i++)
		std::cin >> a[i];
	setSales(s1, a, 4);
	showSales(s1);
	
	setSales(s2);      //非交互式
	showSales(s2);
	return 0;
}