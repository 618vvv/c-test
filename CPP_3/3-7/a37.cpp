/* 7．编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100
公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加
仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃
料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等
于3.875升。因此，19mpg大约合12.4l/100km，l27mpg大约合
8.71/100km。
 */

#include<iostream>
using namespace std;
int main()
{
    double Euro_style;
    cout<<"请输入耗油量；";
    cin>>Euro_style;
    cout<<"转化为(miles per gallon):"<<endl;
    cout<<Euro_style<<" L/100Km = "<<62.14*3.785/Euro_style<<" mpg\n";
    system("pause");
    return 0;
}