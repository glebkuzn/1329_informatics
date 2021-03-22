#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a,i,b,z;
    cin >> b >> a;
    b=fabs(b);
    int A[a];
    for(i=0; i<a; i++)
    {
        cin >> A[i];
    }
    sort(A,A +a);
    for(i=-b; i<=b; i++)
    {
        cout << i << " ";
        for(z=0; z<a; z++)
        {
            if(A[z]==i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
