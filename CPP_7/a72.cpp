/* 2．编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存
储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成
绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显
示和计算平均成绩。 */

#include<iostream>
using namespace std;
const int num=10;
int insert(double * grade,int* num)
{   int length;
    cout<<"请输入成绩（输入非数字代表结束）：";
    while(cin>>grade[(*num)++])
    {
        length++;
    }
    return length;
}
int show(double* grade,int length)
{
    for(int i=0;i<length;i++)
    cout<<grade[i]<<" ";
    return 0;
}
int average(double *grade,int length)
{
    double sum=0.0,average=0.0;
    for(int i=0;i<length;i++)
    {
        sum+=grade[i];
    }
    average=sum/length;
    cout<<"平均数为："<<average<<endl;
}
int main()
{
    double grade[num];
    int num=0,length=0;
    length=insert(grade,&num);
    show(grade,length);
    average(grade,length);
    return 0;
}