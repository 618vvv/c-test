/* 7．修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数
来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总
和以及所有debt的总和 */

/* 直接输出 无样例 */

#include <iostream>   
using namespace std;
template<typename T>
void SumArray(T arr[], int n)
{
	T sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    cout<<"总和为"<<sum<<endl;
}
template<typename T>
void SumArray(T* arr[], int n)
{
	T sum=0;
	for (int i=0;i<n;i++)
		sum+=*arr[i];
	cout<<"总和为"<<sum<<endl;
}
struct debt {
    char name[40];
    double amount;
};

int main()
{
    int thing[6] = { 13,31,103,301,310,130 };
    struct debt mr_E[3] = {
        { "I W",2400.0 },
        { "U F",1300.0 },
        { "I S",1800.0 }
    };
    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    SumArray(thing, 6);
	SumArray(pd, 3);
    return 0;
}