#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    cin >> a;
    b=a-(trunc(a/30))*30;
    cout << trunc(a/30) << endl;
    cout << trunc(b)*2 << endl;
    cout << (b-trunc(b))*120 << endl;
    return 0;
}
