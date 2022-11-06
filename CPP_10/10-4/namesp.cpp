#include"namesp.h"
#include<iostream>
using namespace std;
Sales::Sales(double * sales_s,double average_s,double max_s,double min_s)
{   double sum;
    for(int i=0;i<QUARTERS;i++)
    {
        cout<<"请输入第"<<i+1<<"个数:";
        cin>>sales_s[i];
        sales[i]=sales_s[i];
        sum+=sales[i];
        if(sales[i]>max_s)
            max_s=sales[i];
        if(sales[i]<min_s)
            min_s=sales[i];
    }
    average_s=sum/QUARTERS;
    average=average_s;
    min=min_s;
    max=max_s;
}
void Sales::showSales() const
{   
    cout<<"的信息为：";
    for(int i=0;i<QUARTERS;i++)
    {
            cout<<sales[i]<<endl;
    }
    cout<<"平均数为:"<<average<<endl;
    cout<<"最大值为："<<max<<endl;
    cout<<"最小值为："<<min<<endl;

}
