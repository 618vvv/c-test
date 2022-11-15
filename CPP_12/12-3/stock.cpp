#include<iostream>
#include<cstring>
#include "stock.h"
using namespace std;
Stock::Stock()
{
    company=new char[1];
    company[0]='\0';
    shares=0;
    share_val=0;
    total_val=0;
}
Stock::Stock(const char * co, long n , double pr )
{
    company=new char[strlen(co)+1];
    strcpy(company,co);
    if(n<0)
    {
        shares=0;
    }else{
        shares=n;
        share_val=pr;
        set_tot();
    }
}
Stock::~Stock()
{
    delete [] company;
}
void Stock::buy(long num, double price)
{
      if (num < 0) {
    std::cout << "Number of shares purchased can’t be negative. "
              << "Transaction is aborted.\n";
  } else {
    shares += num;
    share_val = price;
    set_tot();
  }
}
void Stock::sell(long num, double price)
{
    if (num < 0) {
    cout << "Number of shares sold can’t be negative. "
         << "Transaction is aborted.\n";
  } else if (num > shares) {
    cout << "You can’t sell more than you have! "
         << "Transaction is aborted.\n";
  } else {
    shares -= num;
    share_val = price;
    set_tot();
  }
}
void Stock::update(double price)
    {
        share_val=price;
        set_tot();
}
ostream & operator<<(std::ostream &os,const Stock &st)
{
    os<<"company:"<<st.company<<endl;
    os<<"share price:"<<st.shares<<endl;
    os<<"total worth"<<st.total_val<<endl;
    return os;
}
const Stock & Stock::topval(const Stock & s) const
    {
          if (s.total_val > total_val) return s;
          else return *this;
    }