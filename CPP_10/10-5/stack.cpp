#include "stack.h"
#include<iostream>
using namespace std;
bool Stack::isEmpty() const
{
    return top==0;
}
bool Stack::isFull() const
{
    return top==10;
}
bool Stack::pop(Item a)
{
    if(top<=0)
        return false;
    else 
    {
        a=items[top];
        top--;
    }
    return true;
}
bool Stack::push(Item a)
{
    if(Stack::isFull())
        return false;
    else
    {
        top++;
        items[top]=a;
    }
    return true;     
}