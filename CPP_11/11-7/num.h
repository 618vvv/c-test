#include<iostream>
using namespace std;
class Complex{
    private:
        double real;
        double image;
    public:
        Complex(){real=0.0; image=0.0;}
        Complex(double a,double b);
        Complex operator ~() const;
        Complex operator +(const Complex &a);
        Complex operator *(Complex &a);
        Complex operator -(Complex &a);
        friend Complex operator*(const double &a, const Complex &b);
        friend std::ostream & operator<<(std::ostream &os, const Complex & a);
        friend std::istream & operator>>(std::istream &is, Complex & a);

};