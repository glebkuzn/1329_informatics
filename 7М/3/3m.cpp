#include <iostream>

using namespace std;

int main()
{   long n,i,a,c;
    cout <<"Enter the number of your numbers"<<endl;
    cin >>n;
    c=0;
    for (i=1;i<=n;++i) {
        cout <<"Enter your number"<<endl;
        cin >>a;
        if (a==0) {
            c=c+1;
        }
    }
    cout <<c;
}
