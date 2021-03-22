#include <iostream>

using namespace std;

int main()
{   long i,a,b;
    for(i=10;i<=99;++i) {
        a=i;
        b=((i%10)+(i/10))*2;
        if (a==b) {
            cout <<i;
        }
    }
    return 0;
}
