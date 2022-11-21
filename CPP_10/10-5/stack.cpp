#include "stack.h"
#include<iostream>
using namespace std;
bool Stack::isEmpty() const
{
    return top==0;
}
bool Stack::isFull() const
{
    return top==MAX;   //定义了一个存储容量的变量
}
bool Stack::pop(Item &a)   //传入的应该是引用 不然不会改变参数的值
{
    if(top==0)
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
        items[top]=a;   //修改
        top++;
    }
    return true;
}