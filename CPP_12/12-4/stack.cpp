#include "stack.h"
#include<iostream>
#include<string.h>
using namespace std;
    Stack::Stack()
    {
        size=MAX;
        pitems=new Item[size];
        for(int i=0;i<size;i++)pitems[i]=0;
        top=0;
    }
    Stack::Stack(const Stack &st)
    {
        size=st.size;
        pitems=new Item[size];
        for(int i=0;i<size;i++)pitems[i]=st.pitems[i];
        top=st.top;
    }
    Stack::~Stack()
    {
        delete [] pitems;
    }
    bool Stack::isempty() const
    {
        return top==0;
    }
    bool Stack::isfull() const
    {
        return top==10;
    }
    bool Stack::push(const Item &item)
    {
        if(isfull())return false;
        pitems[top]=item;
        top++;
        return true;
    }
    bool Stack::pop(Item &item)
    {
        if(isempty())return false;
        top--;
    }
    Stack & Stack::operator=(const Stack &st)
    {
        if(this==&st)return *this;
        delete [] pitems;
        size=st.size;
        pitems=new Item[size];
        for(int i=0;i<size;i++)pitems[i]=st.pitems[i];
        top=st.top;
        return *this;
    }
    std::ostream & operator<<(std::ostream &os,const Stack &st)
    {
        for(int i=0;i<st.size;i++)os<<i<<":"<<st.pitems[i]<<endl;
        os<<"top的值："<<st.top<<endl;
        return os;
    }