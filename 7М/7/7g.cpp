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
    while (i<=a) {
        cout <<A[a-i]<<endl;
        ++i;
    }
    return 0;
}
