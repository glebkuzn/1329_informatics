#include <iostream>

using namespace std;
void inputArray(long array[],long length) {
    long i;
    for(i=0;i<length;++i) {
        cin >>array[i];
    }
}
void outputArray(long A[],long n) {
    long i;
    for (i=0;i<n;++i) {
        cout <<A[i]<<" ";
    }
}

int main()
{   long a,b,c,i,j;
    cout <<"Enter your number"<<endl;
    cin >>a;
    long A[a];
    inputArray(A,a);
    long B[a];
    i=0;
    while (i<=a) {
        B[i]=A[a-i-1];
        ++i;
    }
    outputArray(B,a);
    return 0;
}
