#include <iostream>

using namespace std;
long sum(long a,long b) {
    if(b==0) {
        return a;
    }
    else {
        return sum(a+1,b-1);
    }
}

int main()
{   long n,m;
    cout <<"Enter 2 numbers"<<endl;
    cin >>n>>m;
    cout <<sum(n,m)<<endl;
    return 0;
}
