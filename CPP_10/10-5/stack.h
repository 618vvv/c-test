struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack{
    private:
        Item items[10];
        int top;
    public:
        Stack(){
            for(int i=0;i<10;i++)
            {
                items[i].fullname[0]='\0';
                items[i].payment=0.0;
             }
             top=0;
            }
        bool isEmpty() const;
        bool isFull() const;
        bool push(Item a);
        bool pop(Item a);
};