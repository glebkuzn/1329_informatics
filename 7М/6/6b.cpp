#include <iostream>

using namespace std;
bool IsPowerOf2(long x) {
    long i=1;
    while (i<=x) {
        if (i==x) {
            return true;
        }
        else {
            i=i*2;
        }
        if (i>x) {
            return false;
        }
    }
}

int main()
{   long a,b;
    cout <<"Enter your number"<<endl;
    cin >>a;
    b=IsPowerOf2(a);
    if (b==true) {
        cout <<"YES"<<endl;
    }
    else {
        if (b==false) {
            cout <<"NO"<<endl;
        }
    }

    return 0;
}
