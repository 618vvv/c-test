#include<iostream>

class Complex{
    private:
        double real;
        double image;
    public:
        Complex();
        Complex(double a,double b){a=0.0; b=0.0;}
        Complex operator~();
        Complex operator +(Complex &a);
        Complex operator *(Complex &a);
        Complex operator -(Complex &a);
        friend Complex operator*(double &a,Complex &b);
        friend std::ostream & operator<<(std::ostream &os,Complex &a);
        friend std::istream & operator>>(std::ostream &os,Complex &a);

};