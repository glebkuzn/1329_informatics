#include <iostream>

using namespace std;

int main()
{
    int a,b,c,x,y,z,n,m,p,d,e,f;
    cout <<"Enter 6 numbers"<<endl;
    cin >>a>>b>>c>>x>>y>>z;
    n=(a/x)*(b/y)*(c/z);
    m=(a/x)*(b/z)*(c/y);
    p=(a/y)*(b/x)*(c/z);
    d=(a/y)*(b/z)*(c/x);
    e=(a/z)*(b/x)*(c/y);
    f=(a/z)*(b/y)*(c/x);
    if ((n>=m)&&(n>=p)&&(n>=d)&&(n>=e)&&(n>=f)) {
        cout <<n;
    }
    else {
        if ((m>=n)&&(m>=p)&&(m>=d)&&(m>=e)&&(m>=f)) {
            cout <<m;
        }
        else {
             if ((p>=m)&&(p>=n)&&(p>=d)&&(p>=e)&&(p>=f)) {
                cout <<p;
             }
             else {
                  if ((d>=m)&&(d>=p)&&(d>=n)&&(d>=e)&&(d>=f)) {
                        cout <<d;
                    }
                    else {
                         if ((e>=m)&&(e>=p)&&(e>=d)&&(e>=n)&&(e>=f)) {
                            cout <<e;
                        }
                        else {
                             if ((f>=m)&&(f>=p)&&(f>=d)&&(f>=e)&&(f>=f)) {
                                cout <<f;
                                }
                        }
                    }
             }
        }
    }

}
