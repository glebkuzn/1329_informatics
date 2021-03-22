#include <iostream>

using namespace std;
void inputArray(long array[],long length) {
    long i;
    for(i=0;i<length;++i) {
        cin >>array[i];
    }
}

int main()
{   long n,i,s,j;
    cout <<"Enter your number"<<endl;
    cin >>n;
    long A[n];
    inputArray(A,n);
    s=0;
    for (i=0;i<n;++i) {
        for (j=0;j<n;++j) {
            if (A[i]==A[j]) {
                s=s+1;
            }
        }
        if (s==1) {
            cout <<A[i]<<" ";
        }
        s=0;
    }
    return 0;
}
