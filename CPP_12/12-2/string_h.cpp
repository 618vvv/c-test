#include<iostream>
#include "string_h.h"
#include<cctype>
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
            os<<a.str;
            return os;
    }
    std::istream & operator>>(std::istream &is,String &a)
    {
        char temp[String::CINLIM];
        is.get(temp,String::CINLIM);
        if(is)  a=temp;//调用了重载运算符？？？
        while(is && is.get()!='\n') continue;  //用于过滤换行符
        return is;
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
            str[i]=tolower(str[i]);
        }
    }
    void String::Stringup()
    {
        for(int i=0;i<len;i++)
        {
            str[i]=toupper(str[i]);
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
        if(strlen(a.str)!=strlen(str)) return false;
        for(int i=0;i<len;i++)
        {
            if(str[i]!=a.str[i])
            return false;
        }
        return true;
    }