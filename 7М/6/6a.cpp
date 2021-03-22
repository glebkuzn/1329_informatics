#include <iostream>

using namespace std;

int main()
{   long a,b;
    cout <<"Enter your number"<<endl;
    cin >>a;
    b=1;
    cout <<b<<endl;
    while (b<=a/2) {
        b=b*2;
        cout <<b<<endl;
    }
    return 0;
}
