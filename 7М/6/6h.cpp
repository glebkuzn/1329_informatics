
#include <iostream>

using namespace std;
int Reverse(int n)
{
    int k,b;
    k=0;
    b=0;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        k=b+k*10;
    }
    return k;
}
int main()
{   int n;

    cout<<"Enter your number"<<endl;
    cin>>n;
    cout<<Reverse(n)<<endl;
    return 0;
}
