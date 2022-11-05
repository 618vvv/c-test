/* 8．编写一个程序，它打开一个文件，逐个字符地读取该文
件，直到到达文件末尾，然后指出该文件中包含多少个字符。 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string FileName;
    ifstream inFile;
    unsigned int num = 0;
    char ch = 0;
    cout << "Enter the file name:";
    getline(cin, FileName);
    inFile.open(FileName.c_str());
    while ((ch = inFile.get()) != EOF)
    {
        num++;
    }
    cout << "There are " << num << " characters in " << FileName << " file." << endl;

}