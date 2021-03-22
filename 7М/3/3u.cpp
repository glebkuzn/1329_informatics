#include <iostream>
using namespace std;
int main()
{
    long a,b,c,d,e,f,i,x,y;
    for (i=1000; i<=9999; ++i)
    {
        c=i%10;
        d=(i/10)%10;
        e=(i/100)%10;
        f=i/1000;
        x=10*c+d;
        y=10*f+e;
        if (x==y)
        {
            cout <<i<<endl;
        }
    }
    return 0;
}
