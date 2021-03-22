#include <iostream>

using namespace std;

int main()
{   long a,i,x,y,z;
    cout <<"Enter your number"<<endl;
    cin >>a;
    for(i=100;i<=999;++i) {
        x=i%10;
        y=(i/10)%10;
        z=i/100;
        if (x+y+z==a) {
            cout <<i<<endl;
        }
    }
    return 0;
}
