#include<iostream>
#include<string.h>
 const int Len=19;
class Plorg
{
    private:
        char name[Len];
        int CI;
    public:
    //构造函数
        Plorg(char p_name[Len]=(char*)"Plorga",int p_CI=50);
        void show() const;
        void set(int a);

};