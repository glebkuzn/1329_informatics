#include <iostream>
#include <math.h>

using namespace std;
long Fib(long a) {
    double b=(pow((1+sqrt(5))/2,a)-pow((1-sqrt(5))/2,a))/sqrt(5);
    return b;
}

int main()
{   long n;
    cout <<"Enter your number"<<endl;
    cin >>n;
    cout <<Fib(n+1)<<endl;
    return 0;
}
