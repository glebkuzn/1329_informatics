#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,n,z;
    cin >> a;
    int A[a];
    n=1;
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    cin >> z;
    sort(A,A +i);
    for(i=a; i>=0; i--)
    {
        if(A[a]+A[i]==z)
        {
            cout << A[a] << " " << A[i];
            return 0;
        }
        else if(i==0)
        {
            a=a-1;
            i=a;
        }
        else if(a==1)
        {
            cout << "No";
        }
    }
}
