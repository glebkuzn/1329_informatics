#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    cout <<"Enter 4 numbers"<<endl;
    cin >>a>>b>>c>>d;
    if ((a<9)&&(b<9)&&(c<9)&&(d<9)) {
        if ((a==c)&&(b==d)) {
            cout <<"NO";
        }
        else {
            if ((((a-1==c)&&(b==d))||((a+1==c)&&(b==d))||((a==c)&&(b+1==d))||((a==c)&&(b-1==d)))||(((a-1==c)&&(b-1==d))||((a+1==c)&&(b-1==d))||((a-1==c)&&(b+1==d))||((a+1==c)&&(b+1==d)))) {
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

