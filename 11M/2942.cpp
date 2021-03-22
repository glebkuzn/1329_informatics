#include <iostream>
using namespace std;
int prelast_numb(long a)
{
    return (a%100)/10;
}
int main()
{
    int a, b;
    cin >> a;
    cout << prelast_numb(a);
}
