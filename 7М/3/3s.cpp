#include <iostream>

using namespace std;

int main()
{   long n,i,s,j;
    cout <<"Enter the number of CTyneHeK"<<endl;
    cin >>n;
    for(i=1;i<=n;++i) {
        for (j=1;j<=i;++j) {
            cout <<"*";
        }
        cout <<endl;
    }
    return 0;
}
