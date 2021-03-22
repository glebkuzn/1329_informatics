#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    cout <<"Enter 4 numbers"<<endl;
    cin >>a>>b>>c>>d;
    if ((a<9)&&(b<9)&&(c<9)&&(d<9)) {
        if (((a==c)&&(b!=d))||((b==d)&&(a!=c))) {
        cout <<"YES";
        }
        if ((a!=c)&&(b!=d)) {
        cout <<"NO";
        }
    }
    else {
    cout <<"Error";
    }
    return 0;
}
