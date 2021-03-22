#include <iostream>

using namespace std;
long gcd(long a,long b) {
    if (a==0) {
        return b;
    }
    else {
        if (b==0) {
            return a;
        }
        else {
            return gcd(b,a%b);
        }
    }
}

int main()
{   long x,y;
    cout <<"Enter 2 numbers"<<endl;
    cin >>x>>y;
    cout <<gcd(x,y)<<endl;
    return 0;
}
