#include <iostream>

using namespace std;

int main()
{   long a,b,c,d,i;
    cout <<"Enter a"<<endl;
    cin >>a;
    cout <<"Enter b"<<endl;
    cin >>b;
    cout <<"Enter c"<<endl;
    cin >>c;
    cout <<"Enter d"<<endl;
    cin >>d;
    for (i=-1000;i<=1000;++i) {
        if (a*i*i*i+b*i*i+c*i+d==0) {
            cout <<i<<endl;
        }
    }
}
