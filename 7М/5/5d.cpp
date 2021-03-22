#include <iostream>
#include <cmath>
using namespace std;
void power(int a, int b)
{
    int i,n,v;
    n=1;
    if(b>=0)
    {
        for(i=1; i<=b; ++i)
        {
            n=a*n;
        }
        cout << n;
    }
    else
    {
        for(i=1; i<=-b; ++i)
        {
            n=a*n;
        }
        double v=1.0/n;
        cout << v;
    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    power(a,b);
    return 0;
}
