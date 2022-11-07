class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    friend Time operator+(const Time &a,const Time &b);
    //重载之前为：Time Sum(const Time & t) const;
    //只要把运算符（这里为“+”）放到operator后面，并将结果用做方法名即可
    void show() const;
};
