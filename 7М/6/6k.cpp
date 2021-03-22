#include <iostream>
using namespace std;
int main()
{   int a,a1,a2,b,i;
    cout << "Enter your number" << endl;
    cin>>a;
    a1=1;
    a2=1;
    i=1;
    while(a2<a)
    {
       b=a2;
       a2=a1+a2;
       a1=b;
       i=i+1;
    }
    if(a2==a)
       {
           cout<<i<<endl;

       }
       else
       {
          cout<<"-1"<<endl;
       }
    return 0;
}
