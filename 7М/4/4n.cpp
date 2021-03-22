#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,i,sum,s;
    cin >> a;
    sum=0;
    for(i=1;i<=a;i=i+2)
    {
        sum=1/(i*2-1)+sum-1/(i*2+1);
    }
    if(a-trunc(a/2)==1)
    s=sum+1/(a*2+1);
    else
    {
    s=sum;
    }
    cout << s*4 << endl;
    return 0;
}
