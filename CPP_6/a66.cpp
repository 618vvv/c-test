/* 6．编写一个程序，记录捐助给“维护合法权利团体”的资金。该程
序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和
款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个
成员：用来储存姓名的字符数组（或string对象）和用来存储款项的
double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐
款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款
者是重要捐款人（Grand Patrons）。然后，程序将列出其他的捐款者，
该列表要以Patrons开头。如果某种类别没有捐款者，则程序将打印单
词“none”。该程序只显示这两种类别，而不进行排序。 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct comm{
    string name;
    double money;
};
int main()
{
    cout<<"请输入人数:";
    int num;
    cin>>num;
    vector<comm> a(num);
    for(int i=0;i<num;i++)
    {
        cout<<"请输入第"<<i+1<<"个人的名字和金额:";
        cin>>a[i].name;
        cin>>a[i].money;
    }
    int flag1=0,flag2=0;
    cout<<"Grand Patrons"<<endl;
    for(int i=0;i<num;i++)
    {
        if(a[i].money>1000)
        {
            cout<<a[i].name<<" "<<a[i].money<<endl;
            flag1=1;
        }
    }
    if(flag1==0)
        cout<<"none"<<endl;
    cout<<"Patrons"<<endl;
    for(int i=0;i<num;i++)
    {
        if(a[i].money<=1000)
        {
            cout<<a[i].name<<" "<<a[i].money<<endl;
            flag2=1;
        }
    }
    if(flag2==0)
        cout<<"none"<<endl;
    system("pause");
    return 0;
}