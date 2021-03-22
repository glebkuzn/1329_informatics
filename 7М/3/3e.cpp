#include <iostream>

using namespace std;

int main()
{   int n,k,i,a,b,c,d,m,e,x;
    cout <<"Enter 2 numbers"<<endl;
    cin >>n>>k;
    a=1;
    for(i=1;i<=n;++i) {
        a=a*i;
    }
    b=1;
    for(m=1;m<=k;++m) {
        b=b*m;
    }
    c=n-k;
    d=1;
    for(e=1;e<=c;++e) {
        d=d*e;
    }
    x=a/(b*d);
    cout <<x;
    return 0;
}
