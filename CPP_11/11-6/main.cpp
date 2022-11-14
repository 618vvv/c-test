// stone.cpp -- user-defined conversions

// compile with stonewt.cpp

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "stonewt.h"


int main()

{

Stonewt stone_s[6]=
{   Stonewt(100,Stonewt::STONES), // uses constructor to initialize
    Stonewt(546,Stonewt::STONES),// same as Stonewt wolfe = 285.7
    Stonewt(5446,Stonewt::STONES)
};
    Stonewt min_st = stone_s[0];
    Stonewt max_st = stone_s[2];

    Stonewt st_11(11, Stonewt::STONES);
    int num=0;
for(int i=0;i<3;i++){
    double total_s;
    cout<<"请输入第"<<i+1<<"个:";
    cin>>total_s;
    cout<<"请输入类型,可选择1或2或3:";
    int a;
    cin>>a;
    while(a!=1&&a!=2&&a!=3)
    {
        cout<<"输入错误，请重新输入：";
        cin>>a;
    }
    if(a==1)
        stone_s[i+3]=Stonewt(total_s,Stonewt::STONES);
    else if(a==2)
        stone_s[i+3]=Stonewt(total_s,Stonewt::IPOUND);
    else
        stone_s[i+3]=Stonewt(total_s,Stonewt::DPOUND);
    cout<<"您输入的为："<<stone_s[i+3];
}
for(int i=0;i<6;i++)
{
    if (stone_s[i] > max_st)
        max_st = stone_s[i];
    if (stone_s[i] < min_st)
        min_st = stone_s[i];
    if (stone_s[i] > st_11)
        num++;

}
cout<<"最小为"<<min_st;
cout<<"最大为"<<max_st;
cout<<"超过11stone的有"<<num<<"个"<<endl;
return 0;

}

/*
g++ main.cpp stonewt.cpp
./a.out
*/

