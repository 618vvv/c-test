/* 5．在Neutronia王国，货币单位是tvarp，收入所得税的计算方式如
下：
例如，收入为38000 tvarps时，所得税为5000 0.00 + 10000 0.10 +
20000 0.15 + 3000 0.20，即4600 tvarps。请编写一个程序，使用循环来
要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环
将结束。
 */

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    cout<<"请输入您的收入(结束输入0):";
    double a;
    double tax=0.0;
    while(a>0&&(cin>>a))
    {
        if(a==0)
            break;
        if(a<=5000)
            continue;
        else if(a>5000&&a<15000)
            tax=(a-5000)*0.1;
        else if(a>15000&&a<35000)
            tax=10000*0.1+(a-15000)*0.15;
        else    
            tax=10000*0.1+20000*0.15+(a-35000)*0.2;
        cout<<"用户所交的税为："<<tax<<endl;
        cout<<"请输入您的收入(结束输入0):";

    }
    system("pause");
    return 0;
}