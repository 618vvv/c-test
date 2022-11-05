/* 9．这个练习让您编写处理数组和结构的函数。下面是程序的框
架，请提供其中描述的函数，以完成该程序 */

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
/*
  getinfo() has two arguments : a pointer to the first element of
  an array of student structures and an int representing the
  number of elements of the array. The function solicits and
  stores data about students. It terminates input upon filling
  the array or upon encountering a blank line for the student
  name. The function returns the actual number of array elements filled.
*/ 
int getinfo(student pa[], int n);
 
// display1() takes a student structure as an argument and displays its contents
void display1(student st);
 
// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2(const student* ps);
 
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main() {
	cout << "Enter class size: ";
	int class_size;
	while (! (cin >> class_size)) {
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Please enter number: ";
	}
	
	// important
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		cout << "\n";
		cout << "The NO." << i + 1 << " stuent's message is \n";
		display1(ptr_stu[i]);
		cout << endl;
		display2(&ptr_stu[i]);
	}
	cout << endl;
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student pa[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        cout<<"请输入fullname：";
        cin.getline(pa[i].fullname, 20);
        cout<<"请输入hobby：";
        cin.getline(pa[i].hobby, 20);
        cout<<"请输入ooplevel：";
        cin>>pa[i].ooplevel;
    }
    return i;
}
void display1(student st)
{
    cout<<st.fullname<<endl;
    cout<<st.hobby<<endl;
    cout<<st.ooplevel<<endl;
}
void display2(const student* ps)
{
    cout<<ps->fullname<<endl;
    cout<<ps->hobby<<endl;
    cout<<ps->ooplevel<<endl;
}
void display3(const student pa[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<pa[i].fullname<<endl;
        cout<<pa[i].hobby<<endl;
        cout<<pa[i].ooplevel<<endl;
    }
}