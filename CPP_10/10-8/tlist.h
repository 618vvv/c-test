#include<iostream>
using namespace std;
typedef int uItem;
class Tlist{
    private:
        uItem items[20];
        int top;
    public:
    //构造函数
        Tlist(){top=0;}
    //添加成员
        int add(uItem & item);
    //判断是否为空
        bool isempty();
    //判断是否满了
        bool isfull();
    //
        void visit(void(*pf)(uItem &));
    //查看
        void show() const;
};
void half(uItem &item);
