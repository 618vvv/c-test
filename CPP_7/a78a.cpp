/* 8．在不使用array类的情况下完成程序清单7.15所做的工作。编写
两个这样的版本：
 a．使用const char *数组存储表示季度名称的字符串，并使用double
数组存储开支。
*/
// 程序清单7.15 -- arrobj.cpp
#include <iostream>
#include <array>
#include <string>
using namespace std;
 
// const data
const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
 
// function to modify array object
void fill(double *pa,int Seasons);
// function that uses array object without modifying it
void show(const double *da,int Seasons);
 
int main() {
	double expenses[Seasons];
	fill(expenses,Seasons);
	show(expenses,Seasons);
	return 0;
}
 
void fill(double *pa,int Seasons) {
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin>>pa[i];
	}
}
 
void show(const double *da,int Seasons) {
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: &" << total << endl;
}