#include "num.h"
using namespace std;
Complex Complex::operator~()
{
    Complex b(real,-image);
    return b;
}
Complex Complex::operator+(Complex &a)
{
    Complex b(a.real+real,a.image+image);
    return b;
}
Complex Complex::operator*(Complex &a)
{
    Complex b(real*a.real-image*a.image,real*a.image+image*a.real);
    return b;
}
Complex Complex::operator-(Complex &a)
{
    Complex b(a.real-real,a.image-image);
    return b;
}
Complex operator*(double &a,Complex &b)
{
    Complex c(a*b.real,a*b.image);
    return c;
}
std::ostream & operator<<(std::ostream &os,Complex & a)
{
    os<<"实数部分为"<<a.real<<endl;
    os<<"虚数部分为"<<a.image<<endl;
    return os;
}
std::istream & operator>>(std::istream &is,Complex & a)
{
    is>>a.real;
    is>>a.image;
    return is;
}