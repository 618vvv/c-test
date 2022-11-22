#include<iostream>
#include<string>
using namespace std;

class Bank{
private:
    string name;
    string account_num;
    double money;
public:
    //默认构造函数
    Bank();
    ~Bank();
    Bank(string name_b="a",string acount_num_b="b",double money_b=0.0);
    //存入参数指定的存款
    void save(double money_b);
    //取出参数指定的款项
    void remove(double money_b);
    void show() const;
};