/* 9．完成编程练习6，但从文件中读取所需的信息。该文件的第一项
应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款
人姓名，第二行为捐款数额。即该文件类似于下面 */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
typedef struct comm{
    string name;
    double money;
};
int main()
{
    int num_peo=0;
    string Filename;
    ifstream inFile;
    cout<<"请输入文件名字：";
    getline(cin,Filename);
    inFile.open(Filename.c_str());
    inFile>>num_peo;
    inFile.get();  //获取一整行
    struct comm *a=new struct comm[num_peo];   //创建动态数组
    for(int i=0;i<num_peo;i++)
    {
        getline(inFile,a[i].name);
        inFile>>a[i].money;
        inFile.get();
    }
    int flag1=0,flag2=0;
    cout << "Grand Pators:" << endl;
    for(int i=0;i<num_peo;i++)
    {
        if(a[i].money>1000)
        {
            cout<<a[i].name<<endl;
            cout<<a[i].money<<endl;
            flag1=1;
        }
    }
    if(flag1==0)
        cout<<"none"<<endl;
     for(int i=0;i<num_peo;i++)
    {
        if(a[i].money<=1000)
        {
            cout<<a[i].name<<endl;
            cout<<a[i].money<<endl;
            flag2=1;
        }
    }
    if(flag2=0)
        cout<<"none"<<endl;
    return 0;
}