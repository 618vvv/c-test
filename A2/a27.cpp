/* 7．编写一个程序，要求用户输入小时数和分钟数。在main( )函数
中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两
个值 */

#include<iostream>
using namespace std;
void time(int a,int b)
{
    cout<<"Time: "<<a<<" : "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the number of hours: ";
    cin>>a;
    cout<<"Enter the number of minutes: ";
    cin>>b;
    time(a,b);
    system("pause");
    return 0;
}