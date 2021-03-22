#include <iostream>

using namespace std;

int main()
{   int a,b,c,x,y,z;
    cout <<"Enter 3 numbers"<<endl;
    cin >>a>>b>>c;
    x=a*a;
    y=b*b;
    z=c*c;
    if ((a<b+c)&&(b<a+c)&&(c<a+b)) {
        if ((z==x+y)||(y==x+z)||(x==y+z)) {
            cout <<"Rectangular";
        }
        if ((x+y>z)&&(y+z>x)&&(x+z>y)) {
            cout <<"Acute";
        }
        if ((x+y<z)||(y+z<x)||(x+z<y)) {
            cout <<"Obtuse";
        }
    }
    else {
        cout <<"Impossible";
    }
    return 0;
}
