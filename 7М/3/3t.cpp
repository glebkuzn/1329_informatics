#include <iostream>

using namespace std;

int main()
{
    int x,y,b,a;
    cout <<"Enter  height "<<endl;
    cin >>y;
    cout <<"Enter  width"<<endl;
    cin >>x;
    for (a=1; a<=y; ++a)
     {for (b=1; b<=x;++b)
         cout<<"+--";
         cout <<"+"  <<endl;
        for (b=1; b<=x; ++b)
        cout <<"|  ";
        cout <<"|" <<endl;
     }
     for (b=1; b<=x;++b)
      cout<<"+--";
      cout <<"+";
    return 0;
}
