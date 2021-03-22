#include <iostream>
#include <math.h>

using namespace std;
long Log2(long x) {
    long i=1;
    long b=0;
    while (i<=x) {
        b=b+1;
        i=2*i;
        if (x==i) {
            return b;
        }
    }
    return b;

}

int main()
{   long a;
    cout <<"Enter your number"<<endl;
    cin >>a;
    cout <<Log2(a)<<endl;
    return 0;
}
