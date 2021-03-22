#include <iostream>

using namespace std;

int main()
{   int a,b,c,d,e;
    cout <<"Enter 5 numbers"<<endl;
    cin >>a>>b>>c>>d>>e;
    if ((((a<=d)&&(b<=e))||((a<=e)&&(b<=d)))||(((a<=d)&&(c<=e))||((a<=e)&&(c<=d)))||(((c<=d)&&(b<=e))||((c<=e)&&(b<=d)))) {
        cout <<"YES";
    }
    else {
        cout <<"NO";
    }
    return 0;
}
