#include <iostream>
using namespace std;
int last_numb(long a)
{
    return a%10;
}
int main()
{
    int a, b;
    cin >> a;
    cout << last_numb(a);
}
