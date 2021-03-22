#include <iostream>
#include <cmath>
using namespace std;
double Piphagor(double a, double b)
{
    return sqrt(a*a+b*b);
}
int main()
{
    double a, b;
    cin >> a >> b;
    cout << Piphagor(a,b);
}
