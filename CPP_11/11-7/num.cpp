#include "num.h"
using namespace std;
Complex::Complex(double a,double b)
{
    real=a;
    image=b;
}

Complex Complex::operator~() const
{
    return Complex(real,-image);
;
}
Complex Complex::operator+(const Complex &a)
{
   return Complex(a.real+real,a.image+image);
}
Complex Complex::operator*(Complex &a)
{
    return Complex(real*a.real-image*a.image,real*a.image+image*a.real);
}
Complex Complex::operator-(Complex &a)
{
    return Complex(real-a.real,image-a.image);
}
Complex operator*(const double &a,const Complex &b)
{
    return Complex(a*b.real,a*b.image);
}
std::ostream & operator<<(std::ostream &os, const Complex & a)
{
    if(a.image>=0)
    os<<a.real<<"+"<<a.image<<"i"<<endl;
    else
    os<<a.real<<a.image<<"i"<<endl;

    return os;
}
std::istream & operator>>(std::istream &is,Complex & a)
{
    cout<<"请输入实数部分：";
    is>>a.real;
    cout<<"请输入虚数部分：";
    is>>a.image;
    return is;
}