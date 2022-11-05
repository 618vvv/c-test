/* 2．修改程序清单9.9：用string对象代替字符数组。这样，该程序将
不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符
串“”进行比较，以判断是否为空行。 */

/* 对清单进行修改 */

#include<iostream>
using namespace std;

const int Size=10;
void strcount(const string &str){//const表示str指针不能修改指向的内容（不过可以指向另外一块内容）
    static int total=0;//static静态变量，首次初始化后，其值一直存在（即第二次调用strcount函数时，total的值不会再次初始化）
    int count=0;
    while(str[count])
        count++;
    total+=count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total!\n"; 
}

int main() {
    string input;
    char next;
    cout<<"Enter a line:"<<endl;
    getline(cin,input);
    while(input!="") //判断是否为空行
    {
        strcount(input);
        getline(cin,input);
    }
    cout<<"Bye!"<<endl;
    return 0;
}