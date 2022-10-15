/* 修改程序清单4.4，使用C++ string类而不是char数组。
 */
// https://blog.csdn.net/weixin_54344261/article/details/118904087?spm=1001.2101.3001.6661.1&utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1-118904087-blog-114537716.pc_relevant_multi_platform_whitelistv3&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1-118904087-blog-114537716.pc_relevant_multi_platform_whitelistv3&utm_relevant_index=1

/* getline()
接收一个字符串，可以接收空格并输出，不过要包含#include<string> */

#include<iostream>
#include<string>
using namespace std;

int main() {
    const int ArrSize = 20;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter you favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name <<endl;

    system("pause");
    return 0;
}