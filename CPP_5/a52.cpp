/* 
2．使用array对象（而不是数组）和long double（而不是long long）
重新编写程序清单5.4，并计算100!的值。 */
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<long double,100> a;
    a[0]=1;
    for(int i=1;i<=100;i++)
    {
        a[i]=i*a[i-1];
        cout<<i<<"!="<<a[i]<<endl;
    }
    system("pause");
    return 0;

}