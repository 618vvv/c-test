#include<iostream>
#include<cstring>
#include "golf.h"
using namespace std;
Golf::Golf()
{
    char name[Len]={'\0'};
    int hc;
    cout<<"请输入名字：";
    cin.getline(name,Len);
    cout<<"请输入handicap:";
    while(!(cin>>hc)){
        cin.clear();
        while(cin.get()!='\n')
        cin.clear();
/*      clear()函数不是清除输入，而是清除错误状态。 标准库的IO类如果出错
        ，会为自身设置错误状态，这时是不能继续输入/输出的。 所以要先
        clear错误状态。然后while (cin.get() != '\n')  continue;这一句
        不停从输入缓冲区中读取已经输入的字符，直到读走'\n'。 */
        continue;
        cout<<"请输入handicap:";
    }
    strcpy(fullname,name);
    handicap=hc;
}
Golf::Golf(char * fname,int handicap_golf)
{
    strcpy(fullname,fname);
   /*  for(int i=0;i<Len;i++)
    fullname[i]=fname[i]; */
    handicap=handicap_golf;
}
void Golf::showgolf() const
{
    cout<<(*this).fullname<<endl;
    cout<<(*this).handicap<<endl;
}
void Golf::handicap_golf(int hc)
{
    handicap=hc;
}
