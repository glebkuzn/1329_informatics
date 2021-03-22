#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,n;
    cin >> a;
    int A[2*a];
    n=0;
    for(i=0;i<2*a;i++)
    {
        cin >> A[i];
    }
    sort(A,A +2*a);
    for(i=0;i<2* a-1;i++)
    {
        if(A[i]==A[i+1])
        {
            n=n+1;
        }
    }
    cout << n;
    return 0;
}
