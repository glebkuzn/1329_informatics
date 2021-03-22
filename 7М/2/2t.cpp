#include <iostream>

using namespace std;

int main()
{   int a,b,c,n,d;
    cout <<"Enter your number"<<endl;
    cin >>n;
    if (n<=0) {
        cout <<"Error";
    }
    else {
        if (n>=60) {
            a=n/60;
            b=n-(a*60);
            c=b/10;
            d=b-(c*10);
            cout <<a<<" - 60 noe3DoK "<<c<<" - 10 noe3DoK "<<d<<" - 1 noe3DKa";
        }
        else {
            a=n/10;
            b=n-(a*10);
            cout <<0<<" - 60 noe3DoK "<<a<<" - 10 noe3DoK "<<b<<" - 1 noe3Dka";
        }
    }
    return 0;
}
