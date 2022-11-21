#include<cstring>
struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack{
    private:
        static const int MAX=10;
        Item items[MAX];
        int top;
    public:
        Stack(){
            //memset(items->fullname,'\0',MAX);
            memset(items,0,MAX*sizeof(Item));
           /*  for(int i=0;i<10;i++)        //memcpy()函数 在遇到 '\0' 的时候并不会停下来。
            {
                items[i].fullname[0]='\0';
                items[i].payment=0.0;       //类初始化里面memcpy就可以全部初始化
             } */
             top=0;
            }//memset 一般使用“0”初始化内存单元，而且通常是给数组或结构体进行初始化。
        bool isEmpty() const;
        bool isFull() const;
        bool push(Item a);
        bool pop(Item &a);
        void show()const;
};