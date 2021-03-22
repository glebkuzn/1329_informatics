#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,k;
    string A;
    cin >> A;
    k=A.size();
    int B[k];
    for(i=0; i<k; i++)
    {
        B[i]=A[i];
    }
    for(i=0; i<k; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}
