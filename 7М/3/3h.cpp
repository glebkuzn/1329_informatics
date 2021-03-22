#include <iostream>

using namespace std;

int main()
{   long n,i;
    cout <<"Enter the number of the flags"<<endl;
    cin >>n;
    for(i=1;i<=n;++i) {
        cout <<"+___"<<endl;
        cout <<"|"<<i<<" /"<<endl;
        cout <<"|__\\"<<endl;
        cout <<"|"<<endl;
    }
}
