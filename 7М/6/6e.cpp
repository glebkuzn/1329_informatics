#include <iostream>

using namespace std;
long SumOfTheDigits(long x) {
    long b=0;
    while (x>0) {
        b=b+x%10;
        x=x/10;
    }
    return b;
}

int main()
{   long a;
    cout <<"Enter your number"<<endl;
    cin >>a;
    cout <<SumOfTheDigits(a)<<endl;
    return 0;
}
