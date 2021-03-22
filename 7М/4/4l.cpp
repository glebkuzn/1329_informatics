#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << trunc(a) << endl;
    cout << (a-trunc(a))*100 << endl;
    return 0;
}
