#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,f,i;
    cin >> a >> b >> c >> f;
    d=100*b+c;
    e=d*(100+a)/100;
    for(i=1;i<=f;++i);
    {
        e=e+(100+a*i)/100;
    }
    cout << trunc(e/100) << endl;
    cout << e-trunc(e/100)*100 << endl;
    return 0;
}
