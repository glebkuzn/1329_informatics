#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a,b,c,i,l,f,k;
    l=1000000000;
    k=0;
    cin >> a >> b >> c;
    int A[a];
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    sort(A,A +a);
    for(i=0;i<a-b*c;i++)
    {
        for(f=0;f<=b-1;f++)
        {
            if(A[f*c+c-1]-A[f*a]>=k)
            {
                k=A[f*c+c-1]-A[f*a];
            }
        if(k<=l){l=k;}
        }
    }
    cout << l;
    return 0;
}
