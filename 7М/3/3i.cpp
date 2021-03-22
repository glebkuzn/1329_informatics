#include <iostream>
#include <math.h>
#include <complex.h>

using namespace std;

int main()
{   long n,i,s;
    cout <<"Enter your number"<<endl;
    cin >>n;
    if (n<2) {
        cout <<"Error"<<endl;
    }
    else {
        s=0;
        for (i=2;i<=n;++i) {
            s=s+(i-1)*i;
            cout <<(i-1)<<"*"<<i;
            if (i!=n) {
                cout <<"+";
            }
        }
        cout <<"="<<s<<endl;
    }

    return 0;
}
