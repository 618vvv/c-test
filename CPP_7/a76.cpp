/* 6．编写一个程序，它使用下列函数：
Fill_array( )将一个double数组的名称和长度作为参数。它提示用户
输入double值，并将这些值存储到数组中。当数组被填满或用户输入了
非数字时，输入将停止，并返回实际输入了多少个数字。
Show_array( )将一个double数组的名称和长度作为参数，并显示该
数组的内容。
Reverse-array( )将一个double数组的名称和长度作为参数，并将存
储在数组中的值的顺序反转。
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后
显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后
显示数组。 */
 #include<iostream>
using namespace std;
void show_array(double* array,int length)
{
    cout<<"数组为："<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<array[i]<<" ";
    }
}
void Reverse_array(double* array,int length)
{
        cout<<"数组翻转后："<<endl;
    for (int i = 0; i < length / 2; i++)
    {
        double tmp=array[i];
        array[i]=array[length-1-i];
        array[length-1-i] = tmp;
    }
}
int Fill_array(double* array,int length)
{
    int num=0;
    cout<<"请输入数组：";
    for(int i=0;i<length;i++)
    {
        if(cin>>array[i])
        num++;
        else
        break;
    }
    return num;
}
int main()
{
    double array[10];
    int num;
    num=Fill_array(array, 10);
    show_array(array, num);
    Reverse_array(array, num);
    show_array(array, num);
    return 0;
} 
 