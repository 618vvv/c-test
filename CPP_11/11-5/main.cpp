// stone.cpp -- user-defined conversions

// compile with stonewt.cpp

#include <iostream>

using std::cout;

using std::endl;

#include "stonewt.h"
/*
stonewt.cpp这里的函数有个问题-。-
Stonewt Stonewt::operator*(double a)

*/

int main()

{

Stonewt incognito; // uses constructor to initialize
Stonewt wolfe(546,Stonewt::STONES); // same as Stonewt wolfe = 285.7
Stonewt taft(5446,Stonewt::DPOUND);
cout<<"incognit : "<<incognito;
cout<<"wolfe : "<<wolfe;
cout<<"taft : "<<taft;
double i=2.0;
Stonewt w2=i+wolfe;
Stonewt w3=i-wolfe;
Stonewt w4=i*wolfe;
Stonewt w5=wolfe+i;

cout<<" i + wolfe = "<<w2;
cout<<" i + wolfe = "<<w3;
cout<<" i + wolfe = "<<w4;
cout<<" i + wolfe = "<<w5;
return 0;

}

/*
g++ main.cpp stonewt.cpp
./a.out
*/

