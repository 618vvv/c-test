#include <cstring>
#include <iostream>
#include"namesp.h"
using namespace std;
//namesp.h
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
    {
            double sum=0;
            for(int i=0;i<n;i++)
            {
                s.sales[i]=ar[i];
                sum+=ar[i];
            }
            s.average=sum/n;
            s.max=s.min=ar[0];
            for(int i=0;i<n;i++)
            {
                if(s.max<s.sales[i])
                    s.max=s.sales[i];
                if(s.min>s.sales[i])
                    s.min=s.sales[i];
            }
    }
	void setSales(Sales &s)
    {
        double sum=0;
        for(int i=0;i<QUARTERS;i++)
        {
            cout<<"请输入：";
            cin>>s.sales[i];
            sum+=s.sales[i];
        }
        s.average = sum/QUARTERS;
		s.max = s.min = s.sales[0];
         for(int i=0;i<QUARTERS;i++)
            {
                if(s.max<s.sales[i])
                    s.max=s.sales[i];
                if(s.min>s.sales[i])
                    s.min=s.sales[i];
            }

    }
	void showSales(const Sales & s)
    {
        for(int i=0;i<QUARTERS;i++)
            cout<<s.sales[i]<<endl;
        cout<<"平均值："<<s.average<<endl;
        cout<<"最大值："<<s.max<<endl;
        cout<<"最小值"<<s.min<<endl;
    }   
}