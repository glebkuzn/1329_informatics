#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << (a-(trunc(a/30))*30)*12 << endl;
    return 0;
}
