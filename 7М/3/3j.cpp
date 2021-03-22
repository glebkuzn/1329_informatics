#include <iostream>

using namespace std;

int main()
{   long a,b,i,c,n,m;
    cout <<"Enter 2 numbers" <<endl;
    cin >>a>>b;
    c=(a+1)/2;
    n=c*2;
    c=b/2;
    m=c*2;
    for (i=n;i<=m;i=i+2) {
        cout <<i<<" ";
    }
    return 0;
}
