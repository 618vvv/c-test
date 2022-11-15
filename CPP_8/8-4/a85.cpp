/* 5．编写模板函数max5( )，它将一个包含5个T类型元素的数组作为
参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使
用硬编码，而不必通过参数来传递）。在一个程序中使用该函数，将T
替换为一个包含5个int值的数组和一个包含5个dowble值的数组，以测试
该函数。 */

#include<iostream>
using namespace std;

template<typename T>
void max5(T num[],int n)
{
    T a=num[0];
    for(int i=1;i<n;i++)
    {
        if(a<num[i])
            a=num[i];
    }
    cout<<"数组的最大值为"<<a<<endl;
}
int main()
{
    int a[5]={524,432,632,4523,52};
    double b[5]={56.26,4983.4848,65.56,3.45,46.5};
    max5(a,5);
    max5(b,5);
    return 0;
}