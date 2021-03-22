#include <iostream>

using namespace std;
void inputArray(long array[],long length) {
    long i;
    for(i=0;i<length;++i) {
        cin >>array[i];
    }
}

int main()
{   long a,b,c,i,j;
    cout <<"Enter your number"<<endl;
    cin >>a;
    long A[a];
    inputArray(A,a);
    i=1;
    b=1;
    while (i<a) {
        if (A[i-1]!=A[i]) {
            b=b+1;
        }
        ++i;
    }
    cout <<b<<endl;
    return 0;
}
