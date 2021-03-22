#include <iostream>

using namespace std;

int main()
{long a,b,i,x,y,z,n;
    cout << "Enter your A and B" << endl;
    cin >>a;
    cin >>b;
    for (i=a;i<=b;++i)
    {
        x=i/1000;
        y=(i/100)-(x*10);
        z=(i/10)-(y*10)-(x*100);
        n=i%10;
        if
         (( (x==y)&&(y==z)&&(x!=n))||
         ( (n==y)&&(y==x)&&(x!=z))||
         ( (x==n)&&(n==z)&&(x!=y))||
         ( (n==y)&&(y==z)&&(y!=x)))
        {
            cout << i << endl;
        }
    }
    return 0;
}

