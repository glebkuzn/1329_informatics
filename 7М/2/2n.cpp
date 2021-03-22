#include <iostream>

using namespace std;

int main()
{   int a,b,c,d,x,y;
    cout <<"Enter 4 numbers"<<endl;
    cin>>a>>b>>c>>d;
    x=(a+b)%2;
    y=(c+d)%2;
    if ((a<9)&&(b<9)&&(c<9)&&(d<9)) {
        if (x==y) {
            cout <<"Yes";
        }
        else {
            cout <<"No";
        }
    }
    else {
        cout <<"Error";j
    }
    return 0;
}
