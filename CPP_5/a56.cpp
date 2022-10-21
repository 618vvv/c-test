/* 6．完成编程练习5，但这一次使用一个二维数组来存储输入—3年
中每个月的销售量。程序将报告每年销售量以及三年的总销售量。 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{   string year[3]={"1","2","3"};
    string month[12]={"January","February","March","April","May","June",
                    "July","August","September","October","November","December"};
    float sale[3][12],sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<12;j++)
        {   cout<<"请输入第"<<year[i]<<"年,第"<<month[j]<<"月的营业额：";
            cin>>sale[i][j];
            cout<<endl;
            sum+=sale[i][j];
        }
    }
    cout<<"全年营业额是"<<sum<<endl;
    system("pause");
    return 0;
}