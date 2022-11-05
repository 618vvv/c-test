/* 2．编写一个程序，最多将10个donation值读入到一个double数组中
（如果您愿意，也可使用模板类array）。程序遇到非数字输入时将结束
输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
 */
//cin>> 最常见的是获取输入的一个字符或数字(后面会介绍只输入字符的情况)

#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<double,10> num;
    int i=0,count=0;
    double sum=0.0,average=0.0;
    while (i<10&&(cin >> num[i]))
    {  
        sum+=num[i];
        i++;
    }
    average=sum/i;
    cout<<"这些数字的总和为："<<sum<<endl;
    cout<<"这些数字的平均值为："<<average<<endl;
    cout<<"这些数字的个数为："<<i<<endl;
    for(int j=0;j<i;j++)
    {
        if(num[j]>average)
            count++;
    }
    cout<<"有"<<count<<"个数字大于平均值"<<endl;
    system("pause");
    return 0;

}