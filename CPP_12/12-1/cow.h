#include<iostream>
#include<cstring>
using namespace std;
class Cow{
        char name[20];
        char *hobby;
        double weight;
    public:
        Cow();//构造函数
        Cow(const char *nm,const char *ho,double wt);   //构造函数
        Cow(const Cow & c); //复制构造函数
        ~Cow();
        Cow & operator=(const Cow & c);     //赋值运算符重载
        void ShowCow() const; //display all cow data

};