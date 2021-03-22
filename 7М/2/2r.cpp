#include <iostream>

using namespace std;

int main()
{   int n,m,x,y,a,b,c,d;
    cout <<"Enter 4 numbers"<<endl;
    cin >>n>>m>>x>>y;
    if (n>m) {
        a=m-x;
        b=x;
        c=n-y;
        d=y;
            if ((a<=b)&&(a<=c)&&(a<=d)) {
                cout <<a;
            }
            if ((b<=a)&&(b<=c)&&(b<=d)) {
                cout <<b;
            }
            if ((c<=a)&&(c<=b)&&(c<=d)) {
                cout <<c;
            }
            if ((d<=a)&&(d<=c)&&(d<=b)) {
                cout <<d;
            }
    }
    if (n<m) {
        a=n-x;
        b=x;
        c=m-y;
        d=y;
            if ((a<=b)&&(a<=c)&&(a<=d)) {
                cout <<a;
            }
            if ((b<=a)&&(b<=c)&&(b<=d)) {
                cout <<b;
            }
            if ((c<=a)&&(c<=b)&&(c<=d)) {
                cout <<c;
            }
            if ((d<=a)&&(d<=c)&&(d<=b)) {
                cout <<d;
    }
    if (n==m) {
        a=m-x;
        b=x;
        c=n-y;
        d=y;
            if ((a<=b)&&(a<=c)&&(a<=d)) {
                cout <<a;
            }
            if ((b<=a)&&(b<=c)&&(b<=d)) {
                cout <<b;
            }
            if ((c<=a)&&(c<=b)&&(c<=d)) {
                cout <<c;
            }
            if ((d<=a)&&(d<=c)&&(d<=b)) {
                cout <<d;
            }
    }
    }
    return 0;
}
