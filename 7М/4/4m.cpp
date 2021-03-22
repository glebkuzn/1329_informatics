#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,i,sum;
    cin >> a;
    sum=1;
    for(i=2;i<=a;++i)
    {
        sum=1/(i*i)+sum;
    }
    cout << sum << endl;
    return 0;
}
