#include <iostream>
using namespace std;
int main()
{
    int n,i,s,a;
    s=0;
    cin >>n;
    for (i=0; i<n; ++i)
    {
        cin >> a;
        s=s+a;
    }
    cout << s;
}
