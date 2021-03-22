#include <iostream>
#include <cmath>
using namespace std;
double power(int a, int b)
{
    if(b==0)
    {
    return 1;
    }
    else
    {
        a=a*power(a,(b-1));
    }
    return a;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << power(a,b);
}
