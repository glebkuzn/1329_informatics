#include <iostream>

using namespace std;

int main()
{   long a,b,i;
    cout <<"Enter 2 numbers"<<endl;
    cin >>a>>b;
    if (a<b) {
        for(i=a;i<=b;i=i+1)
        cout <<i<<endl;
    }
    else {
        cout <<"No";
    }
    return 0;
}

