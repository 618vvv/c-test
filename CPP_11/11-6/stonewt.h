// stonewt.h -- definition for the Stonewt class

#include<iostream>
#define STONEWT_H_

class Stonewt
{
public:
    enum format{STONES, IPOUND, DPOUND}; //设置三种类型，分别为英石格式、整数磅格式还是浮点磅格式

private:
    enum {Lbs_per_stn = 14}; // pounds per stone
    format ft;
    int stone; // whole stones  石英格式
    double pds_left; // fractional pounds   整数榜格式
    double pounds; // entire weight in pounds   浮点榜格式
    double total; //总数
    void update();
public:
    //构造函数
    Stonewt(){ total=0;ft=STONES;update();} // default constructor
    Stonewt(double total_s,format a);
    //析构函数
    ~Stonewt();
    //运算符重载
    Stonewt operator+(double a);
    Stonewt operator-(double a);
    Stonewt operator*(double a);
    //六个运算符
    bool operator<(Stonewt &a);
    bool operator>(Stonewt &a);
    bool operator<=(Stonewt &a);
    bool operator>=(Stonewt &a);
    bool operator!=(Stonewt &a);
    bool operator==(Stonewt &a);

    //友元函数
    friend Stonewt operator+(double n,Stonewt &a);
    friend Stonewt operator-(double n,Stonewt &a);
    friend Stonewt operator*(double n,Stonewt &a);
    friend std::ostream & operator<<(std::ostream &os,Stonewt &a);

};
