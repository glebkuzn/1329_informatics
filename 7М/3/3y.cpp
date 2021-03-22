#include <iostream>
using namespace std;
int main()
{
    long n,i,k,d;
    cin >> n;
    d=1;
    k=0;
    for(i=1; i<=n; ++i)
    {
        cout << d <<" ";
        k=k+1;
        if (d==k)
        {
            d=d+1;
            k=0;
        }
    }
    return 0;
}

