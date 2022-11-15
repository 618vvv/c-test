/* 2．CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名
称；第二个成员存储candy bar的重量（可能有小数）；第三个成员存储
candy bar的热量（整数）。请编写一个程序，它使用一个这样的函数，
即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值
设置相应的结构成员。最后3个参数的默认值分别为“Millennium
Munch”、2.85和350。另外，该程序还包含一个以CandyBar的引用为参
数，并显示结构内容的函数。请尽可能使用const */

/* 样例：
请输入品牌名字:brand
请输入重量:256
请输入热量：56 */

#include<iostream>
using namespace std;
struct CandyBar{
    string brand;
    double weight;
    int hot;
};
void Function1(CandyBar* a, const char* b="Millennium",double c=2.85, int d=350);
void Print(CandyBar a);
int main()
{
    CandyBar b;
    const int size=20;
    char brand[20];
    cout<<"请输入品牌名字:";
    cin>>brand;
    double weight;
    cout<<"请输入重量:";
    cin>>weight;
    int hot;
    cout<<"请输入热量：";
    cin>>hot;
    Function1(&b,brand,weight,hot);
    Print(b);
    return 0;
}
void Function1(CandyBar *a,char *b,double c,int d)
{
    a->brand=b;
    a->weight=c;
    a->hot=d;
}
void Print(CandyBar a)
{
    cout<<"品牌名字:"<<a.brand<<endl;
    cout<<"重量:"<<a.weight<<endl;
    cout<<"热量:"<<a.hot<<endl;
}