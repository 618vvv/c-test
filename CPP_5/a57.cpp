/* 7．设计一个名为car的结构，用它存储下述有关汽车的信息：生产
商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建
一个由相应数量的car结构组成的动态数组。接下来，程序提示用户输
入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需
要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，
程序将显示每个结构的内容。该程序的运行情况如下：*/

#include<iostream>
#include<cstring>
using namespace std;
 struct car{
    string make;
    int year;
 };
 int main()
 {
   int count;
   cout<<"请输入汽车的数量：";
   cin>>count;
    car *a=new car[count];
    for(int i=0;i<count;i++)
    {      
      cout<<"请输入第"<<i+1<<"辆车的生产商：";
      cin>>a[i].make;
      cout<<"请输入第"<<i+1<<"辆车的生产年份：";
      cin>>a[i].year;
      cout<<"第"<<i+1<<"辆车的生产商为"<<a[i].make<<endl;
      cout<<"第"<<i+1<<"辆车的生产年份为"<<a[i].year<<endl;

    }
    system("pause");
    return 0;

 }
