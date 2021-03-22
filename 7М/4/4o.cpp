#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,f,x,y;
    cin >> a >> b >> c >> d >> e >> f;
    y=(c*e-a*f)/(c*b-d*a);
    x=(e-b*y)/a;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
