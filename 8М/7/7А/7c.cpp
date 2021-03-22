#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,i,o;
    fin >> a >> b;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
        }
    }
        for(i=0; i<b; i++)
        {
            fout << A[a-1][i] << " ";
        }
        fout << endl;
        for(i=1; i<a-1; i++)
        {
            for(o=0; o<b; o++)
            {
                fout << A[i][o] << " ";
            }
            fout << endl;
        }
        if(a!=1)
        {
            for(i=0; i<b; i++)
            {
                fout << A[0][i] << " ";
            }
            fout << endl;
        }
    return 0;
}
