#include <iostream>
using namespace std;
int main()
{
    long n,i,s,k;
    cin >> n;
    s=(n*(n+1))/2;
    for (i=1; i<=n-1; ++i)
    {
        cin >> k;
        s=s-k;
    }
    cout << s << endl;
    return 0;
}
