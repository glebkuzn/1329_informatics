#include <iostream>

using namespace std;
double step(double a,int n) {
    if (n%2==0) {
        if (n==2) {
            return a*a;
        }
        else {
            return step(a*a,n/2);
        }
    }
    else {
        if (n==1) {
            return a;
        }
        else {
            return a*step(a,n-1);
        }
    }
}

int main()
{   double x;
    int y;
    cout <<"Enter 2 numbers"<<endl;
    cin >>x>>y;
    cout <<step(x,y)<<endl;
    return 0;
}
