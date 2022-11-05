/* 7．修改程序清单7.7中的3个数组处理函数，使之使用两个指针参
数来表示区间。fill_array( )函数不返回实际读取了多少个数字，而是返
回一个指针，该指针指向最后被填充的位置；其他的函数可以将该指针
作为第二个参数，以标识数据结尾。 */

// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
 
// function prototypes
double* fill_array(double *begin, double *end);
void show_array(double *begin, double *end);  // don't change data
void revalue(double *begin, double *end,double r);
 
int main()
{
    using namespace std;
    double properties[Max];
 
    double* size = fill_array(properties, properties + Max - 1);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue( properties,size,factor);
        show_array(properties, size);
    }
    cout << "Done.\n";
    return 0;
}
 
double* fill_array(double *begin, double *end)
{
    using namespace std;
    double temp;
    double *p;
    for (p=begin;p<end+1;p++)
    {
        cout << "Enter value #" << p-begin+1 << ": ";
        cin >> temp ;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *p = temp;
    }
    return p;
}
 
// the following function can use, but not alter,
// the array whose address is ar
void show_array(double *begin, double *end)
{
    using namespace std;
    double *p;
    for (p=begin; p<end; p++)
    {
        cout << "Property #" << p-begin+1 << ": $";
        cout << *p << endl;
    }
}
 
// multiplies each element of ar[] by r
void revalue(double *begin, double *end,double r)
{
    double *p;
    for (p=begin; p<end; p++)                //p<end???
        (*p) *= r;
}