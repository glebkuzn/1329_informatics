#include <iostream>

using namespace std;
void inputArray(long array[],long length) {
    long i;
    for(i=0;i<length;++i) {
        cin >>array[i];
    }
}

int main()
{   long a,b,c,i,j,max;
    cout <<"Enter your number"<<endl;
    cin >>a;
    long A[a];
    inputArray(A,a);
    max=A[0];
    i=0;
    b=0;
    while (i<a) {
        if (A[i]>max) {
              max=A[i];
            }
          ++i;

    }
    cout <<max;
    return 0;
}
