#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i;
    cin >> a;
    int A[a];
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    sort(A,A +a);
    if(A[a/2]-A[a/2+1]==1)
    {
        cout << A[a/2]-1;
    }
    else
    {
        cout << (A[a/2]+A[a/2+1])/2;
    }
}
