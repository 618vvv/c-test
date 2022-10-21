/* 5．假设要销售《C++ For Fools》一书。请编写一个程序，输入全
年中每个月的销售量（图书数量，而不是销售额）。程序通过循环，使
用初始化为月份字符串的char *数组（或string对象数组）逐月进行提
示，并将输入的数据储存在一个int数组中。然后，程序计算数组中各元
素的总数，并报告这一年的销售情况。 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string month[12]={"January","February","March","April","May","June",
                    "July","August","September","October","November","December"};
    float sale[12],sum=0;
    for(int i=0;i<12;i++)
    {
        cout<<"请输入第"<<month[i]<<"月的营业额：";
        cin>>sale[i];
        cout<<endl;
        sum+=sale[i];
    }
    cout<<"全年营业额是"<<sum<<endl;
    system("pause");
    return 0;
}