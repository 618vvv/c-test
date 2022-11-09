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
    return Complex(a.real-real,a.image-image);
}
Complex operator*(const double &a,const Complex &b)
{
    return Complex(a*b.real,a*b.image);
}
std::ostream & operator<<(std::ostream &os, const Complex & a)
{
    os<<"实数部分为"<<a.real<<endl;
    os<<"虚数部分为"<<a.image<<endl;
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