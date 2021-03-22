#include <iostream>
#include <cmath>
using namespace std;
void cap(double a, double b)
{
    if(fabs(a)+fabs(b)<=1)
    {cout << "yes";}
    else
    {cout << "no";}
}
int main()
{
    double a,b;
    cin >> a >> b;
    cap(a,b);
    return 0;
}
