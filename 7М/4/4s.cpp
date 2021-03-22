#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    cin >> a >> b;
    cout << floor(a/b) << endl;
    cout << a-floor(a/b)*b << endl;
    return 0;
}
