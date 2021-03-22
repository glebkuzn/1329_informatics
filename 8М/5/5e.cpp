#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,k,i,l,j;
    l=0;
    string S,N;
    getline (cin, S);
    a=S.size();
    getline (cin, N);
    b=N.size();
    k=0;
    if(a<b)
    {
        cout << "No";
        return 0;
    }

    else if(a==b)
    {
        for (i=0; i<b; i++)
            {
                    if(S[i]==N[i])
                    {
                        l++;
                    }
            }
            if(l==b)
            {
                cout << "Yes";
            }
            else{cout << "No";}
                return 0;
    }
    else
    {
        while (k<a-b+1)
        {
            for (i=k; i<k+b; i++)
            {
                for (j=0; j<b; j++)
                {
                    if(S[i]==N[j])
                    {
                        l++;
                    }
                }
            }
            if(l==b)
            {
                cout << "Yes";
                return 0;
            }
            else
            {
                l=0;
                k++;
            }
        }
        cout << "No";
    }
}

