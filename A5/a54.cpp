/* 4．Daphne以10%的单利投资了100美元。也就是说，每一年的利润
都是投资额的10%，即每年10美元：
利息 = 0.10×原始存款
而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款
（包括获得的利息）的5%，：
利息 = 0.05×当前存款
Cleo在第一年投资100美元的盈利是5%—得到了105美元。下一年
的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计
算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时
两个人的投资价值。
 */

#include<iostream>
using namespace std;
int main()
{
    long double daphne=100,cleo=100,year=0,daphne_sum=100;
    while(daphne_sum>=cleo)
    {
        daphne_sum+=daphne*0.10;
        cleo+=cleo*0.05;      
        year++;  
  }
    cout<<"第"<<year<<"年"<<"daphne的存款是"<<daphne_sum<<endl;
    cout<<"第"<<year<<"年"<<"cleo的存款是"<<cleo<<endl;
    system("pause");
    return 0;

}  

