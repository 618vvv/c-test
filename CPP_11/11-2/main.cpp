#include<iostream>
#include "vector.h"
#include<cstdlib>  //包含rand()、srand()
#include<ctime>   //包含time()

int main()
{
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
    cout << "Enter target distance(q to quit);";
    while (cin >> target)
    {
        cout << "Enter step length:";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            //direction的值是0-359中的一个随机数
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result =result + step;
            steps++;
        }
        cout << "After " << step << " steps,the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outword distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    system("pause");
    return 0;
}