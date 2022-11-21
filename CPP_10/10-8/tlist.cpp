#include<iostream>
#include "tlist.h"
    //添加成员
        int Tlist::add(uItem & item)
        {
            if(!isfull())
            {
                items[top]=item;
                top++;
                return true;
            }
            return false;
        }
    //判断是否为空
        bool Tlist::isempty()
        {
            return top==0;
        }
    //判断是否满了
        bool Tlist::isfull()
        {
            return top==MAX;
        }
    //
        void Tlist::visit(void(*pf)(uItem &))
        {
            for(int i=0;i<top;i++)
            {
                cout<<i<<":";
                pf(items[i]);
            }
        }
    //求/2
        void half(uItem &item)
        {
            item=item/2;
            cout<<item<<endl;
        }
    //查看
        void Tlist::show() const
        {
            for(int i=0;i<top;i++)
            cout<<items[i]<<" ";
            cout<<endl;
        }