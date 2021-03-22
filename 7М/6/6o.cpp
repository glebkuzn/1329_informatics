#include <iostream>
#include <math.h>
using namespace std;

int main()
{   int n,b;
    cout << "Enter your number" << endl;
    cin>>n;
    while(n>=1)
    {
      b=sqrt(n);
      n=n-b*b;
      cout<<b<<endl;
    }
    return 0;
}
