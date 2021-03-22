#include <iostream>

using namespace std;

int main()
{   int n,i,s;
    cout <<"Enter your number"<<endl;
    cin >>n;
    s=0;
    for(i=1;i<=n;++i) {
        s=s+i*i;

    }
    cout <<s;
    return 0;
}

