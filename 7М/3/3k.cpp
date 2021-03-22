#include <iostream>

using namespace std;

int main()
{   long a,i,s;
    s=0;
    for (i=1;i<=10;++i) {
        cout <<"Enter your number"<<endl;
        cin >>a;
        s=s+a;
    }
    cout <<s;
}

