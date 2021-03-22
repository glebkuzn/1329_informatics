#include <iostream>

using namespace std;
long sgn(long a) {
    if (a>0) {
        return 1;
    }
    else {
        if (a==0) {
            return 0;
        }
        else {
            return -1;
        }
    }
}
long abs(long a) {
    a=a*sgn(a);
    return a;
}

int main()
{   long n;
    cout <<"Enter your number"<<endl;
    cin >>n;
    cout <<"MoDylb "<<n<<" = "<<abs(n)<<endl;;
    cout <<"3Hak "<<n<<" = "<<sgn(n);
    return 0;
}

