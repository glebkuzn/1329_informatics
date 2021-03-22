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
{   long n,i,k,c;
    cout <<"Enter your number"<<endl;
    cin >>n;
    long A[n];
    inputArray(A,n);
    cout <<"Enter index and number"<<endl;
    cin >>k>>c;
    n=n+1;
    for (i=n;i>=k;i=i-1) {
        A[i]=A[i-1];
    }
    A[k-1]=c;
    outputArray(A,n);
    return 0;
}
