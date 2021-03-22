#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
ofstream fout("output.txt");
fstream fin ("input.txt");
int main ()
{
    int i;
    int A[20];
    srand (time(NULL));
    for(i=0; i<20; i++)
    {
        A[i] = rand() % 8999 + 1000;
        fin << A[i] <<endl;
    }
    sort(A,A +20);
    for(i=0; i<20; i++)
    {
        fout << A[i] << " ";
    }
    return 0;
}
