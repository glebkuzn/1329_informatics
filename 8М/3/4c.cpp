#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,n;
    cin >> a;
    int A[a];
    n=1;
    for(i=0;i<a;i++)
    {
        cin >> A[i];
    }
    sort(A,A +i);
    for(i=0;i<a-1;i++)
    {
        if(A[i]!=A[i+1])
        {
            n=n+1;
        }
    }
    cout << n;
    return 0;
}
