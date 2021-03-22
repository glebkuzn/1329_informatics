#include <iostream>
#include <cmath>
using namespace std;
void cap(int a)
{
    int b;
    for(b=2;b<a;++b)
    {
    if(a%b==0)
    {
    cout << b << " ";
    return;
    }
    else
    {cout << "";}
    }
}
int main()
{
    int a,b;
    cin >> a;
    cap(a);
    return 0;
}
