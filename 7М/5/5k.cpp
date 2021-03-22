#include <iostream>
using namespace std;
bool IsPrime(int a)
{
    int b;
    for(b=2;b<a;++b)
    {
    if(a%b!=0)
    {
    if(a==b+1)
    {
    return false;
    }
    else
    {
        cout << "";
    }
    }
    else
    {
    return true;
    }
    }
}
int main()
{
    int a;
    cin >> a;
    if(IsPrime(a)==true)
    {
            cout <<"no";
    }
    else
    {
    cout <<"yes";
    }
return 0;
}
