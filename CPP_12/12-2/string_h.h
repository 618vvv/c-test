#include <iostream>
#include <cstring>
#ifndef GOLF_H_INCLUDED
#define GOLF_H_INCLUDED


class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    //构造函数
    String();
    String(const char *a);
    String(const String & a); //复制构造函数
    //析构函数
    ~String();
    //输入 输出 友元函数
    friend std::ostream & operator<<(std::ostream &os,const String &a);
    friend std::istream & operator>>(std::istream &is,String &a);
    //重载赋值运算符
    String & operator=(const String & a);
    String & operator=(const char * a);
    //重载加法运算符 合并字符串
    friend String operator+(const String &a,const String &b);
    //字符串转大小写
    void Stringlow();
    void Stringup();
    int Count(char a);
    //比较字符串
    bool operator==(const String &a) const;
};
#endif // GOLF_H_INCLUDED

