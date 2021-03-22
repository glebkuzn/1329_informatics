#include <iostream>
#include <math.h>

using namespace std;
bool IsPrime(long a) {
    long b=0;
    for (long i=2;i<=trunc(sqrt(a));++i) {
        if (a%i==0) {
            b=b+1;
        }
    }
    if (b==0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{   long a,b,c,i;
    cout <<"Enter your number"<<endl;
    cin >>a;
    i=2;
    while (i<=a) {
        b=IsPrime(i);
        c=IsPrime(a-i);
        if ((b==true)&&(c==true)) {
            cout <<a<<"="<<i<<"+"<<a-i<<endl;
            break;
        }
        else {
            i=i+1;
        }
    }
    return 0;
}
