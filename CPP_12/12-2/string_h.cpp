#include<iostream>
#include "string_h.h"
using namespace std;
int String::num_strings = 0;
    String::String()
    {
        str=new char[1];
        len=1;
        str[0]='\0';
        num_strings++;
    }
    String::String(const char *a)
    {
        str=new char[strlen(a)+1];
        len=strlen(a)+1;
        strcpy(str,a);
        num_strings++;
    }
    String::String(const String & a) //复制构造函数
    {
        str=new char[strlen(a.str)+1];
        len=strlen(a.str)+1;
        strcpy(str,a.str);
        num_strings++;
    }
    //析构函数
    String::~String()
    {
        delete [] str; //
        num_strings--;
    }
    //输入 输出 友元函数
    std::ostream & operator<<(std::ostream &os,const String &a)
    {
            os<<"字符串为："<<a.str<<endl;
            os<<"长度为："<<a.len<<endl;
            os<<"当前对象个数为："<<String::num_strings<<endl;
            return os;
    }
    std::istream & operator>>(std::istream &is,String &a)
    {
        cout<<endl<<"请输入对象的str:";
        is>>a.str;
        a.len=strlen(a.str)+1;
    }
    //重载赋值运算符
    String & String::operator=(const String & a)
    {
        if(this==&a)
        return *this;
        delete [] str;
        str=new char[strlen(a.str)+1];
        len=strlen(a.str)+1;
        strcpy(str,a.str);
        return *this;
    }
    String & String::operator=(const char * a)
    {
        delete [] str;
        str=new char[strlen(a)+1];
        len=strlen(a)+1;
        strcpy(str,a);
        return *this;
    }
    //重载加法运算符 合并字符串
    String operator+(const String &a,const String &b)
    {
        return String(strcat(a.str,b.str));
    }

    //字符串转大小写
    void String::Stringlow()
    {
        for(int i=0;i<len;i++)
        {
            if(str[i]>=65&&str[i]<=90)
            str[i]+=32;
        }
    }
    void String::Stringup()
    {
        for(int i=0;i<len;i++)
        {
            if(str[i]>=97&&str[i]<=122)
            str[i]-=32;
        }

    }
    int String::Count(char a)
    {
        int num=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]==a)
                num++;
        }
        return num;
    }
bool String::operator==(const String &a) const
    {
        for(int i=0;i<len;i++)
        {
            if(str[i]!=a.str[i])
            return false;
        }
        return true;
    }