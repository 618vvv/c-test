#include "vector.h"    //包含#include<iostream>
#include<cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_Deg = 45.0 / atan(1.0);
    void Vector::set_x(double mag,double ang)
    {x = mag*cos(ang);}
    void Vector::set_y(double mag,double ang)
    {y = mag*sin(ang);}

    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            magval();
            angval();
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / Rad_to_Deg;
            set_x(mag,ang);
            set_y(mag,ang);
        }
        else
        {
            cout << "不正确！vector设置为0！\n";
            x = y =  0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            magval();
            angval();
        }
        else if (form == POL)
        {
            double mag = n1;
            double ang = n2 / Rad_to_Deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "不正确！vector设置为0！\n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector()
    {
    }
    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x *n, y*n);
    }
    //friends
    Vector operator*(double n, const Vector &a)
    {
        return a*n;
    }
    std::ostream & operator<<(std::ostream & os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y)=(" << v.x << "," << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(m, a) = (" << v.magval() << ", " <<  Rad_to_Deg*v.angval()  << ")";
        else
            os << "Vector object mode is invalid.";
        return os;
    }

    //返回mag的值
    double Vector::magval() const
    {return sqrt(x*x + y*y);}

    //返回ang的值
    double Vector::angval() const
    {
        if(x==0.0&&y==0.0)
            return 0.0;
        else
            return atan2(y,x);
    }
}