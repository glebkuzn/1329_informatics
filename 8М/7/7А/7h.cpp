#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o,q;
    c=0;
    fin >> a >> b;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
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
            }
            else if(A[i][o]==c)
            {
                q++;
            }
        }
    }
    fout << q ;
    return 0;
}
