/* 5．考虑下面的结构声明：
编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声
明表示）。每次customer结构被删除时，其payment的值都被加入到总数
中，并报告总数。注意：应该可以直接使用Stack类而不作修改；只需
修改typedef声明，使Item的类型为customer，而不是unsigned long即可。 */
#include<iostream>
#include "stack.h"
using namespace std;
int main()
{   int sum=0;
    Stack sc;
    customer c[5]={  {"I",10},  {"II",20},  {"III",40},  {"IV",50},  {"V",60}  };
    customer s[5];
    for(int i=0;i<5;i++)
    {
        sc.push(c[i]);
        cout<<c[i].fullname<<" "<<c[i].payment<<endl; 
    }
        for(int i=0;i<5;i++)
    {
        sc.pop(s[i]);
        sum+=s[i].payment;
        cout<<sum<<endl;
    }
    
}

/* 
g++ main.cpp stack.cpp
./a.out
输出样例：
I 10
II 20
III 40
IV 50
V 60
0
0
0
0
0 */