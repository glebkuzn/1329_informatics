#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,l,j,h,s;
    cin >> a >> h;
    int A[a],B[a];
    for(b=0; b<a; b++)
    {
        A[b]=0;
    }
    for(b=a-1; b>=0; b--)
    {
        B[b]=a-b;
    }
    for(b=0; b<pow(2,a); b++)
    {
        j=0;
        for(l=0; l<a; l++)
        {
            if(A[l]==0)
            {
                j=j+1;
            }
        }
        if(j==h)
        {
            for(d=0; d<a; d++)
            {
                if(A[d]==1)
                {
                cout << B[d] << " ";
                }
            }
            cout << endl;
        }
        for(c=a-1;A[c]==1;c--)
        {}A[c]=1;
        for(c=c+1;c<a;c++)
        {
            A[c]=0;
        }
    }
    return 0;
}
