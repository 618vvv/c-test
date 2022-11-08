#include<iostream>
#include "vector.h"
#include<cstdlib>  //包含rand()、srand()
#include<ctime>   //包含time()

int main()
{
    const int N=10;
    using namespace std;
    using VECTOR::Vector;   //using声明
    /*给这个算法一个启动种子，也就是算法的随机种子数，有这个数以后才可以产生随机数。
    因为电脑取随机数是伪随机，只要种子一样，则取出来的数一定一样。
    这里用time(0)这个内函数，则是返回了当前的时间值，这样将使得种子为一个不固定的数，这样产生的随机数就不会每次执行都一样了
    srand()就是给rand()提供种子seed。如果srand每次输入的数值是一样的，那么每次运行产生的随机数也是一样的。*/
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int maxstep=0;
    int minstep=65535;
    int sumstep=0;
    double avestep=0.0; //可能是小数
    cout << "Enter target distance:";
    cin >> target;
    cout << "Enter step length:";
    cin>>dstep;
    for(int i=0;i<N;i++)
    {
        while (result.magval() < target)
        {
            //direction的值是0-359中的一个随机数
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result =result + step;
            steps++;
        }
        sumstep+=steps;
        if(steps<minstep)
        minstep=steps;
        if(steps>maxstep)
        maxstep=steps;
        cout << "After " << step << " steps,the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outword distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
    }
    cout<<"最大步数是"<<maxstep<<endl;
    cout<<"最小步数是"<<minstep<<endl;
    cout<<"平均步数是"<<sumstep/double(N)<<endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 0;
}
/*
g++ main.cpp vector.cpp
./a.out

输出样例：
Enter target distance:100
Enter step length:20
After (m,a)=(20,191) steps,the subject has the following location:
(x,y)=(-105.173,-49.0484)
 or
(m,a)=(116.048,-154.998)
Average outword distance per step = 4.83534
After (m,a)=(20,152) steps,the subject has the following location:
(x,y)=(-74.6652,81.4571)
 or
(m,a)=(110.5,132.509)
Average outword distance per step = 2.98647
After (m,a)=(20,84) steps,the subject has the following location:
(x,y)=(42.9493,94.1916)
 or
(m,a)=(103.521,65.488)
Average outword distance per step = 2.52491
After (m,a)=(20,176) steps,the subject has the following location:
(x,y)=(-86.4696,60.2629)
 or
(m,a)=(105.397,145.126)
Average outword distance per step = 4.79079
After (m,a)=(20,104) steps,the subject has the following location:
(x,y)=(-95.158,33.9943)
 or
(m,a)=(101.048,160.341)
Average outword distance per step = 3.60885
After (m,a)=(20,239) steps,the subject has the following location:
(x,y)=(-18.6825,-101.893)
 or
(m,a)=(103.592,-100.39)
Average outword distance per step = 12.949
After (m,a)=(20,51) steps,the subject has the following location:
(x,y)=(96.7699,-25.2525)
 or
(m,a)=(100.011,-14.6254)
Average outword distance per step = 3.12533
After (m,a)=(20,65) steps,the subject has the following location:
(x,y)=(5.94262,108.069)
 or
(m,a)=(108.232,86.8525)
Average outword distance per step = 1.54617
After (m,a)=(20,115) steps,the subject has the following location:
(x,y)=(-82.048,63.8363)
 or
(m,a)=(103.957,142.116)
Average outword distance per step = 11.5507
After (m,a)=(20,308) steps,the subject has the following location:
(x,y)=(106.42,-10.1989)
 or
(m,a)=(106.908,-5.47428)
Average outword distance per step = 4.85945
最大步数是70
最小步数是8
平均步数是29.3
Bye!
 */