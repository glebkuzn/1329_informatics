#include <iostream>

using namespace std;
long SumOfTheDivisors(long a) {
    long b=0;
    for(long i=1;i<=a;++i) {
        if(a%i==0) {
            b=b+i;
        }
    }
    return b;
}

int main()
{   long n;
    cout <<"Enter your number"<<endl;
    cin >>n;
    cout <<SumOfTheDivisors(n)<<endl;
    return 0;
}
