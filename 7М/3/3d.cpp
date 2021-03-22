#include <iostream>

using namespace std;

int main()
{   long n,i,s;
    cout <<"Enter your number"<<endl;
    cin >>n;
    s=1;
    for(i=1;i<=n;++i) {
        s=s*i;
    }
    cout <<s;
    return 0;
}

