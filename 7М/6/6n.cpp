#include <iostream>

using namespace std;
long gcd(long a,long b) {
    if (a==b) {
        return a;
    }
    if ((a%2==0)&&(b%2==0)) {
        return 2*gcd(a/2,b/2);
    }
    if ((a%2==0)&&(b%2!=0)) {
        return gcd(a/2,b);
    }
    if ((a%2!=0)&&(b%2==0)) {
        return gcd(a,b/2);
    }
    else {
        if (a>=b) {
            return gcd(a-b,b);
        }
        else {
            return gcd(a,b-a);
        }
    }
}

int main()
{   long a,b;
    cout <<"Enter 2 numbers"<<endl;
    cin >>a>>b;
    cout <<gcd(a,b)<<endl;
    return 0;
}
