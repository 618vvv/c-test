/* 8．在不使用array类的情况下完成程序清单7.15所做的工作。编写
两个这样的版本：
b．使用const char *数组存储表示季度名称的字符串，并使用一个
结构，该结构只有一个成员——一个用于存储开支的double数组。这种
设计与使用array类的基本设计类似。
*/
// 程序清单7.15 -- arrobj.cpp
#include <iostream>
#include <array>
#include <string>
using namespace std;
 
// const data
const int Seasons = 4;
const array<string, Seasons> Snames = { "Spring", "Summer", "Fall", "Winter" };
 
 typedef struct Message{
    double b[Seasons];
 };
// function to modify array object
void fill(Message *a);
// function that uses array object without modifying it
void show(Message a);
 
int main() {
	Message a;
	fill(&a);
	show(a);
	return 0;
}
 
void fill(Message *a) {
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*a).b[i];
	}
}
 
void show(Message a) {
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] <<":"<< a.b[i] << endl;
		total += a.b[i];
	}
	cout << "Total Expenses: &" << total << endl;
}