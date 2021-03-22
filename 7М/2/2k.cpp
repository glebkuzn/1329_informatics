#include <iostream>

using namespace std;

int main()
{   int a,b,c,d,x;
    cout <<"Enter 4 numbers"<<endl;
    cin >>a>>b>>c>>d;
    x=a-c;
    if ((a<9)&&(b<9)&&(c<9)&&(d<9)) {
        if ((a==c)&&(b==d)) {
            cout <<"NO";
        }
        else {
            if ((x==b-d)||(x==d-b)) {
                cout <<"YES";
            }
            else {
                cout <<"NO";
            }
        }
    }
    else {
        cout <<"Error";
    }
    return 0;
}

