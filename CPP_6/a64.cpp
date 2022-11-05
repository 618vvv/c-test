/* 4．加入Benevolent Order of Programmer后，在BOP大会上，人们便
可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请
编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出
成员。编写该程序时，请使用下面的结构： */

#include<iostream>
using namespace std;
const int size=50;
const int a_size=5;
typedef struct pro{
    const char dis_by_name[size];
    const char dis_by_title[size];
    const char dis_by_bopname[size];
    int preference;
};
int main()
{
    pro a[a_size]={
        {"Wimp Macho", "YYY", "Y----", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}};
    char ch;
    cout << "Benevolent Order of Proframers Report" << endl;
    cout <<"a. display by name" << "b. display by title" << endl;
    cout << "c. display by bopname" << "d. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice:";
    while(cin>>ch)
    {
        if(ch=='q')
            break;
        switch(ch)
        {
            case 'a':
                for(int i=0;i<a_size;i++)
                    cout<<a[i].dis_by_name<<endl;
                break;
            case 'b':
                for(int i=0;i<a_size;i++)
                    cout<<a[i].dis_by_title<<endl;
                break;
            case 'c':
                for(int i=0;i<a_size;i++)
                    cout<<a[i].dis_by_bopname<<endl;
                break;
            case 'd':
                for(int i=0;i<a_size;i++)
                {
                    if(a[i].preference==0)
                        cout<<a[i].dis_by_name<<endl;
                    if(a[i].preference==1)
                         cout<<a[i].dis_by_title<<endl;
                    if(a[i].preference==2)
                        cout<<a[i].dis_by_bopname<<endl;
                }
                break;
        }
        cout<<"next choice:";
    }
    cout<<"Bye"<<endl;
    system("pause");
    return 0;
}