#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout <<"Enter 3 numbers"<<endl;
    cin >>a>>b>>c;
    if ((a<b+c)&&(b<a+c)&&(c<a+b)) {
    cout <<"Yes";
    }
    else {
    cout <<"No";
    }
    return 0;
}
