#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,h,g;
    h=0;
    g=0;
    cin >> a;
    int A[a],B[a];
    for(i=0; i<a; i++)
    {
        cin >> A[i];
        B[i]=A[i];
    }
    sort(B,B +a);
    h=B[0];
    g=B[a-1];
    for(i=0; i<a; i++)
    {
        if(A[i]==g)
        {
            A[i]=h;
        }
        cout << A[i] << " ";
    }
}
