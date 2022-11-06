#include<iostream>
#include<string>
const int Len=40;
class Golf
{
    private:
        char fullname[Len];
        int handicap;
    public:
    //展示内容
        void showgolf() const;
    //初始化
        Golf(){fullname[0]='\0'; handicap=0;}
        Golf(char * fname,int handicap_golf);
    //改变handicap的值
        void handicap_golf(int hc);
};
