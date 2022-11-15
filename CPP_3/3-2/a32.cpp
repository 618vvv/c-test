/* 2．编写一个小程序，要求以几英尺几英寸的方式输入其身高，并
以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报
告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英
寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身
高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位
的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应
的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转
换因子。 */


#include<iostream>
#include<cmath>
using namespace std;
const int f_to_r=12;
const float f_to_m=0.0254;
const float k_to_b=2.2;

int main()
{
    float num_f,num_r,weight_b;
    cout<<"请输入身高（英尺和英寸）和体重:"<<endl;
    cin>>num_f>>num_r>>weight_b;
    float num_m,weight_k;
    num_m=(num_f * f_to_r+ num_r)*f_to_m;
    weight_k=weight_b/k_to_b;
    cout<<"您的身高是"<<num_m<<" m "<<endl;
    cout<<"您的体重是"<<weight_k<<" kg "<<endl;
    cout<<"您的BMI是"<<weight_k/pow(num_m,2);
    return 0;
}