#include <iostream>

using namespace std;
bool IsPrime(int n)
{
    int i;
    for(i=2;i<n;++i)
    {
        if(n%i==0)
        {
            return false;
        }

    }
    return true;
}
int NextPrime(int n)
{
    int i;
    i=n+1;
    while(not IsPrime(i))
    {
      i=i+1;
    }
    return i;
}
int main()
{   int n,i;
    cout << "Enter your number" << endl;
    cin>>n;
    i=2;
    while ((i<=n)&&(n>0))
    {
        if(n%i==0)
        {
            n=n/i;
            cout<<i<<endl;
        }
        else
        {
          i=NextPrime(i);
        }
    }

    return 0;
}
