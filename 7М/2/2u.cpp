#include <iostream>

using namespace std;

int main()
{   int a,b,c,d,e,n,x,y,z;
    cout <<"Enter your number"<<endl;
    cin >>n;
    a=n/60;
    b=n-(a*60);
    c=b/20;
    d=b-(c*20);
    x=d/10;
    y=d-(x*10);
    z=y/5;
    e=y-(z*5);
    cout <<a<<" - 60 noe3DoK "<<c<<" - 20 noe3DoK "<<x<<" - 10 noe3DoK "<<z<<" - 5 noe3DoK "<<e<<" - 1 noe3DKa";
    return 0;
}

