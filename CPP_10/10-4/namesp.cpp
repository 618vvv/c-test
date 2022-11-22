#include"namesp.h"
#include<cstring>
#include<iostream>
#include<float.h>
using namespace std;
using namespace SALES;
Sales::Sales(const double ar[],int n)
{
    double sum=0;
    if(n>=QUARTERS) memcpy(sales,ar,QUARTERS*sizeof(double));
    else
    {
        memset(sales,0,QUARTERS*sizeof(double));
        memcpy(sales,ar,n);
    }
    max=min=sales[0];
    for(int i=0;i<QUARTERS;i++)
    {
        sum+=sales[i];
        if(max<sales[i])max=sales[i];
        if(min>sales[i])min=sales[i];
    }
    average=sum/QUARTERS;
}
Sales::Sales()
{   double sum;
    max=DBL_MIN;
    min=DBL_MAX;
    for(int i=0;i<QUARTERS;i++)
    {
        cout<<"请输入第"<<i+1<<"个数:";
       // cin>>sales_s[i];
        while(!(cin>>sales[i])){
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"错误，请重新输入第"<<i+1<<"个数:";
        }
        sum+=sales[i];
        if(sales[i]>max)
            max=sales[i];
        if(sales[i]<min)
            min=sales[i];
    }
    average=sum/QUARTERS;
}
void Sales::showSales() const
{
    for(int i=0;i<QUARTERS;i++)
    {
            cout<<sales[i]<<" ";
    }
    cout<<endl;
    cout<<"平均数为:"<<average<<endl;
    cout<<"最大值为："<<max<<endl;
    cout<<"最小值为："<<min<<endl;

}
