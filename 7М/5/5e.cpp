#include <iostream>
#include <cmath>
using namespace std;
void cap(double a, double b,double c,double d)
{
    double n;
    n=sqrt(fabs(a-c)*fabs(a-c)+fabs(b-d)*fabs(b-d));
    cout << n;
}
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cap(a,b,c,d);
    return 0;
}
