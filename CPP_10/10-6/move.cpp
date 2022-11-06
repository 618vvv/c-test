#include<iostream>
#include "move.h"
using namespace std;
Move::Move (double a , double b)
{
    x=a;
    y=b;
}
void Move::showMove () const
{
    cout<<x<<endl;
    cout<<y<<endl;
}
Move Move::add (const Move& m) const
{
    Move s;
    s=Move(m.x+x,m.y+y);
    return s;
}
void Move::reset (double a, double b)
{
    x=a;
    y=b;
}



