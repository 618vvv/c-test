/* 5．结构CandyBar包含3个成员。第一个成员存储了糖块的品牌；第
二个成员存储糖块的重量（可以有小数）；第三个成员存储了糖块的卡
路里含量（整数）。请编写一个程序，声明这个结构，创建一个名为
snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3
和350。初始化应在声明snack时进行。最后，程序显示snack变量的内
容。 */

#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string brand;
    float weight;
    int calories;
};
int main()
{
    CandyBar a;
    a.brand="Mcha Munch";
    a.weight=2.3;
    a.calories=350;
    cout<<"The name of this candy is: "<<a.brand<<endl;
    cout<<"The weight of this candy is: "<<a.weight<<endl;
    cout<<"The calories of this candy is: "<<a.calories<<endl;
    system("pause");
    return 0;

}