/* 3．编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的
菜单——每个选项用一个字母标记。如果用户使用有效选项之外的字母
进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为
止。然后，该程序使用一条switch语句，根据用户的选择执行一个简单
操作。该程序的运行情况如下： */

#include<iostream>
using namespace std;
int main()
{
    cout<<"c) carnivore   p) pianist"<<endl;
    cout<<"t) tree        g) game"<<endl;
    char a;
    int flag=0;
    while(cin>>a&&flag==0)
    {
        switch(a)
        {
            case 'c':
                cout<<"Tyrannosaurus rex is a carnivore."<<endl;
                flag=1;
                break;
            case 'p':
                cout<<"Langlang is a pianist."<<endl;
                flag=1;
                break;
            case 't':
                cout<< "A maple is a tree."<<endl;
                flag=1;
                break;
            case 'g':
                cout<<"Dota2 is a game."<<endl;
                flag=1;
                break;    
            default:
                cout<<"Please enter a c, p, t or g: ";
                break;

        }
    }
    cout<<"bye!"<<endl;
    system("pause");
    return 0;
}