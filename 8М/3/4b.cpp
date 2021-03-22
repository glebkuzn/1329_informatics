#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,i;
    cin >> a;
    int A[a];
    for(i=0;i<a;i++)
    {
        cin >> A[i];
    }
    sort(A,A +i);
    for(i=0;i<a;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
