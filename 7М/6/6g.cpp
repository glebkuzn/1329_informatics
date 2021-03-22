#include <iostream>

using namespace std;

int main()
{   int n,b,min,max;
    cout << "Enter your number" << endl;
    cin>>n;
    b=0;
    min=n%10;
    max=n%10;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        if(b<min)
        {
          min=b;
        }
        if(b>max)
        {
            max=b;
        }

    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
