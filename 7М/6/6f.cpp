#include <iostream>

using namespace std;
long NumberOfZeroes(long x) {
    long b=0;
    long a=0;
    while (x>0) {
        b=x%10;
        x=x/10;
        if (b==0) {
            a=a+1;
        }
    }
    return a;
}

int main()
{   long a;
    cout <<"Enter your number"<<endl;
    cin >>a;
    cout <<NumberOfZeroes(a)<<endl;
    return 0;
}

