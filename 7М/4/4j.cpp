#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cin >> a >> b >> c;
    d=100*b+c;
    e=d*(100+a)/100;
    cout << trunc(e/100) << endl;
    cout << e-trunc(e/100)*100 << endl;
    return 0;
}
