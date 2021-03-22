#include <iostream>

using namespace std;

int main()
{   long n,i,s;
    cout <<"Enter the degree of 2"<<endl;
    cin >>n;
    s=2;
    for(i=2;i<=n;++i) {
        s=2*s;
    }
    cout <<s;
}
