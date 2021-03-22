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
                q=i;
                w=o;
            }
        }
    }
    fout << c << " " << q << " " << w;
    return 0;
}
