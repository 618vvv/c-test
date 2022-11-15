/* 6．编写模板函数maxn( )，它将由一个T类型元素组成的数组和一
个表示数组元素数目的整数作为参数，并返回数组中最大的元素。在程
序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个
double元素的数组来调用该函数。程序还包含一个具体化，它将char指
针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如
果有多个这样的字符串，则返回其中第一个字符串的地址。使用由5个
字符串指针组成的数组来测试该具体化。 */

/* 无输入 直接输出
数组num1的最大值为：6
数组num2的最大值为：524.32
数组str1的中长度最长的元素为aaaaa
数组str2的中长度最长的元素为aaacfsra
 */
#include<iostream>
#include<string.h>
using namespace std;

template<typename T>
void maxn(T *num,int n)
{
    T a=num[0];
    for(int i=1;i<n;i++)
    {
        if(a<num[i])
            a=num[i];
    }
    cout<<"最大值为："<<a<<endl;
}

template<>
void maxn(const char * num[],int n)
{
    const char * a=num[0];
    for(int i=1;i<n;i++)
    {
        if(strlen(a)<strlen(num[i]))
            a=num[i];
    }
    cout<<"中长度最长的元素为"<<a<<endl;
}

int main()
{
    int num1[6]={1,2,3,4,5,6};
    double num2[6]={6.4,345.423,524.32,54.323,5.4,8.4};
    const char * str1[5] = {"a", "ab", "aaaaa", "abcd", "abcde"};   
    const char * str2[5] = {"a", "ab", "aaacfsra", "acrsed", "abcraee"};  
    cout<<"数组num1的";
    maxn(num1,6);
    cout<<"数组num2的";
    maxn(num2,6);
    cout<<"数组str1的";
    maxn(str1,5);
    cout<<"数组str2的";
    maxn(str2,5);
    return 0;
}