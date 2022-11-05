/* 3．下面是一个结构声明：
a．编写一个函数，按值传递box结构，并显示每个成员的值。
b．编写一个函数，传递box结构的地址，并将volume成员设置为其
他三维长度的乘积。
c．编写一个使用这两个函数的简单程序。 */

#include<iostream>
using namespace std;
typedef struct box
{
    char maker[40];
    double height;
    double width;
    double length;
    double volume;
};
int Print(box mbox)
{
    cout<<"输出：";
    cout<<mbox.maker<<endl;
    cout<<mbox.height<<endl;
    cout<<mbox.length<<endl;
    cout<<mbox.volume<<endl;
    return 0;
}

int Add(box *mbox)
{
    mbox->volume=mbox->height*mbox->width*mbox->length;
}
int main()
{
     struct box mbox = { "123", 4, 2, 3, 4 };
     Print(mbox);
     Add(&mbox);
     Print(mbox);
     return 0;
}