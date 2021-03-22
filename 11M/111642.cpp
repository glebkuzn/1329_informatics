#include <iostream>
using namespace std;
int sum(long a, long b)
{
    return a+b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a,b);
}
