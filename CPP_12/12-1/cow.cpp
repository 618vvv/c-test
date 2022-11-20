#include<iostream>
#include<cstring>
#include "cow.h"
using namespace std;
        Cow::Cow(){
            name[0] = '\0';
            hobby = new char[4];
            strcpy(hobby, "null");
            weight = 0;
            } //构造函数
        Cow::Cow(const char *nm,const char *ho,double wt) //根据参数构造
        {
            strcpy(name,nm);
            hobby=new char(strlen(ho)+1);
            strcpy(hobby,ho);
            weight=wt;
        }
        Cow::Cow(const Cow & c) //根据引用构造
        {
             //name不应开辟内存
            strcpy(name,c.name);
            hobby=new char[strlen(c.hobby)+1];      //需要开辟空间，否则指向同一片
            strcpy(hobby,c.hobby);
            weight=c.weight;

        }
        Cow::~Cow()
        {
            delete [] hobby;
        }
        Cow & Cow::operator=(const Cow & c) //赋值运算符的重载
        {
            if(this==&c) //if(*this==c)
                return *this;
            strcpy(name,c.name);
            hobby=new char(strlen(c.hobby)+1);
            strcpy(hobby,c.hobby);
            weight=c.weight;weight;
            return *this;

        }
        void Cow::ShowCow() const //display all cow data
        {       cout<<endl;
                cout<<"名字是："<<name<<endl;
                cout<<"爱好是："<<hobby<<endl;
                cout<<"体重是："<<weight<<endl;
        }

//F11退出全屏
