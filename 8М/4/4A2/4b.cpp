#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,b,z,l;
    l=0;
    z=0;
    cin >> a;
    int A[a],B[a];
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    sort(A,A +a);
    cin >> b;
    for(i=0; i<b; i++)
    {
        cin >> B[i];
    }
    sort(B,B +b);
    for(i=0; i<b; i++)
    {
        while(z < a && A[z]==i)
        {
            l=l+1;
            z=z+1;
        }
        cout << l << " ";
        l=0;
    }
    return 0;
}
