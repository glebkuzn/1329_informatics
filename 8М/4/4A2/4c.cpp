#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i,k,l;
    string A,B;
    cin >> A >> B;
    k=A.size();
    l=B.size();
    if(k!=l)
    {
        cout << "No";
        return 0;
    }
    else
    {
        int A1[k],B1[k];
        for(i=0; i<k; i++)
        {
            A1[i]=A[i];
        }
        sort(A1,A1 +k);
        for(i=0; i<k; i++)
        {
            B1[i]=B[i];
        }
        sort(B1,B1 +k);
        for(i=0; i<k; i++)
        {
            if(A1[i]!=B1[i])
            {cout << "No";
            return 0;}
        }
    cout << "Yes";
    }
    return 0;
}
