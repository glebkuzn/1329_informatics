#include <iostream>
using namespace std;
int Is(long long n)
{
    long long a,b,c,d,e;
    cin >> a;
    d=1;
    c=1;
    e=1;
    while(e<=a)
{
    b=d+c;

    c=d;
    d=b;
    e=e+1;
cout << d-c << endl;
}
}
int main()
{
    int n;
    cout << "enter number, which is fewer than 92" << endl;
    Is(n);
    return 0;
}
