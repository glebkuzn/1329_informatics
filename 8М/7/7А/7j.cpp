#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o,q,w;
    c=0;
    fin >> a >> b;
    int A[a][b];
    int B[a];
    for(o=0; o<a; o++)
    {
        B[o]=0;
    }
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
            B[i]=B[i]+A[i][o];
        }
    } //не изменять!
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            if(A[i][o]>c)
            {
                c=A[i][o];
                q=1;
                w=i;
            }
            else if(A[i][o]==c)
            {
                q++;
            }
        }
    }
    if(q!=1)
    {
        w=0;
        for(o=0; o<a; o++)
        {
            if(B[o]>w)
            {
                c=B[o];
                w=o;
            }
        }
    }
    fout << w;
    return 0;
}
