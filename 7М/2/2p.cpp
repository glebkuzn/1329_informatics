#include <iostream>

using namespace std;

int main()
{   int a,x,b,y,z;
    cout <<"Enter 2 numbers"<<endl;
    cin >>a>>b;
    y=b/a;
    z=-y;
    if ((a==0)&&(b==0)) {
        y=0;
        cout <<"INF";
    }
    if ((y+b%a==y)&&(a!=0)&&((b!=0)||(b==0))) {
        cout <<z;
    }
    else {
        cout <<"NO";
    }
    return 0;
}

