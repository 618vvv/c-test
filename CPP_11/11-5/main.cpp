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
cout<<"incognit:"<<incognito;
cout<<"wolfe:"<<wolfe;
cout<<"taft:"<<taft;
Stonewt w2=2.0+wolfe;
Stonewt w3=2.0-wolfe;
Stonewt w4=2.0*wolfe;
Stonewt w5=wolfe+2.0;

cout<<w2<<w3<<w4<<w5;
return 0;

}

/*
g++ main.cpp stonewt.cpp
./a.out
*/

