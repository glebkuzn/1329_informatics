#include <iostream>

using namespace std;
long gcd(long a,long b) {
    long c=0;
    if (a>=b) {
        c=a;
    }
    else {
       c=b;
    }
    long i=c;
    while (i>=2) {
        if((a%i==0)&&(b%i==0)) {
            return i;
        }
        i=i-1;
    }
}

int main()
{   long x,y;
    cout <<"Enter 2 numbers"<<endl;
    cin >>x>>y;
    cout <<gcd(x,y)<<endl;
    return 0;
}
