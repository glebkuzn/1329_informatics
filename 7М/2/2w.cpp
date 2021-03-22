#include <iostream>

using namespace std;

int main()
{   int a,b,c,x,y,z;
    cout <<"Enter 6 numbers"<<endl;
    cin >>a>>b>>c>>x>>y>>z;
    if (((a==x)&&(b==y)&&(c==z))||((a==x)&&(b==z)&&(c==y))||((a==y)&&(b==x)&&(c==z))||((a==y)&&(b==z)&&(c==x))||((a==z)&&(b==y)&&(c==x))||((a==z)&&(b==x)&&(c==y))) {
        cout <<"Boxes are equal";
    }
    else {
        if (((a<x)&&(b<y)&&(c<z))||((a<x)&&(b<z)&&(c<y))||((a<y)&&(b<x)&&(c<z))||((a<y)&&(b<z)&&(c<x))||((a<z)&&(b<y)&&(c<x))||((a<z)&&(b<x)&&(c<y))) {
            cout <<"The first box is smaller than the second one";
        }
        else {
            if (((a>x)&&(b>y)&&(c>z))||((a>x)&&(b>z)&&(c>y))||((a>y)&&(b>x)&&(c>z))||((a>y)&&(b>z)&&(c>x))||((a>z)&&(b>y)&&(c>x))||((a>z)&&(b>x)&&(c>y))) {
                cout <<"The first box is larger than the second one";
            }
            else {
                cout <<"The boxes are incomparable";
            }
        }
    }
     return 0;
}
