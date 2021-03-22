#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,d,k;
    k=0;
    cin >> a;
    int A[a];
    for(i=0; i<a; i++)
    {
        cin >> d;
        if(d==0)
        {
            cin >> A[k];
            k=k+1;
        }
        else
        {
            cout << A[k-1];
            k=k-1;
        }
    sort(A,A +k);
    }
    return 0;
}
