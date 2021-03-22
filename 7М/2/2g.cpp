#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout <<"Enter 3 numbers"<<endl;
    cin >>a>>b>>c;
    if ((a==b)&&(b==c)&&(c==a)) {
    cout <<"3";
    }
    if (((a==b)&&(b!=c)&&(a!=c))||((a==c)&&(b!=c)&&(a!=b))||((a!=b)&&(b==c)&&(a!=c))) {
    cout <<"2";
    }
    if ((a!=b)&&(a!=c)&&(b!=c)) {
    cout <<"0";
    }
    return 0;
}
