#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,d,k,o;
    o=0;
    d=1;
    k=1;
    cin >> a;
    int A[a],B[a];
    for(i=0; i<2*a; i++)
    {
        cin >> A[i];
        B[i]=A[i];
    }
    sort(A,A +2*a);
    for(i=0; i<2*a; i++)
    {
        while (B[i]!=A[o])
        {
            o=o+1;
        }
        if(o%2==0)
        {
            d=d-1;
        }
        else
        {
            d=d+1;
        }
        if(d>=k)
        {
            k=d;
        }
        o=0;
    }
    cout << k;
    return 0;
}
