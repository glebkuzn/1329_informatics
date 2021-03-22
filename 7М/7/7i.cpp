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
{   long n,i,k;
    cout <<"Enter your number"<<endl;
    cin >>n;
    long A[n];
    inputArray(A,n);
    cout <<"Enter the number of element to delete"<<endl;
    cin >>k;
    for (i=k-1;i<n-1;++i) {
        A[i]=A[i+1];
    }
    n=n-1;
    outputArray(A,n);
    return 0;
}
