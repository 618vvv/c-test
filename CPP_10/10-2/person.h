#include<iostream>
#include<string>
using namespace std;
class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
 
public:
    //~Person();
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const string & ln, const char * fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};