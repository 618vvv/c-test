#include <iostream>

typedef unsigned long Item;

class Stack
{
private:
    static const int MAX = 10;
    Item *pitems;
    int size;
    int top;

public:
    Stack(int n);
    Stack(const Stack &st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop();
    Stack & operator=(const Stack &st);
    friend std::ostream & operator<<(std::ostream &os,const Stack &st);
};
