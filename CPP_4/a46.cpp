/* 6．结构CandyBar包含3个成员，如编程练习5所示。请编写一个程
序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择
的值，然后显示每个结构的内容。 */

#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string brand;
    float weight;
    int calories;
};
int main()
{   
    CandyBar a[3]={{"a",22,33},{"b",44,55},{"c",66,77}};
/*  a[0]={"a",22,33};
    a[1]={"b",44,55};
    a[2]={"c",66,77}; */
    
    cout<<a[0].brand<<a[0].weight<<a[0].calories<<endl;
    cout<<a[1].brand<<a[1].weight<<a[1].calories<<endl;
    cout<<a[2].brand<<a[2].weight<<a[2].calories<<endl;
    system("pause");
    return 0;
}