#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,n,o,z;
    cin >> a;
    int A[a];
    n=1;
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    cin >> z;
    sort(A,A +i);
    for(i=a-1; i>=0; i--)
    {
        if(A[i]+A[i-1]<z)
        {
            cout << "No";
            return 0;
        }
        for(o=i-1; o>=0; o--)
        {
        if(A[o]+A[i]==z)
        {
            cout << A[o] << " " << A[i];
            return 0;
        }
        }
    }
}
