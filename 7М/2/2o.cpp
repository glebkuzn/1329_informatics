#include <iostream>

using namespace std;

int main()
{   int n,m,k,a,b;
    cout <<"Enter 3 numbers"<<endl;
    cin >>n>>m>>k;
    a=k/n;
    b=k/m;
    if ((k==n*a)||(k==m*b)) {
        cout <<"YES";
    }
    else {
        cout <<"NO";
    }
    return 0;
}

