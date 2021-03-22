#include <iostream>

using namespace std;

bool IsPalindrome(int n)
{
    int k,b,l;
    k=0;
    b=0;
    l=n;
    while(l>0)
    {
        b=l%10;
        l=l/10;
        k=b+k*10;
    }
    return (n==k);
}
int main()
{   int n,i,a;
    cout << "Enter your number" << endl;
    cin>>n;
    a=0;
    for(i=1;i<=n;++i)
    {
      if(IsPalindrome(i))
      {
          a=a+1;
      }
    }
   cout<<a<<endl;

    return 0;
}
