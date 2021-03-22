#include <iostream>

using namespace std;

int main()
{   int k,n,a,b;
    cout <<"Enter 2 numbers"<<endl;
    cin >>n>>k;
    if ((n/2)>=k) {
        a=n/2-k;
        cout <<a;
    }
    else {
        if ((n/2)<k) {
            a=k-n/2-1;
            cout <<a;
        }
    }
}
