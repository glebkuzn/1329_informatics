#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,d,i,o;
    fin >> a >> b;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
        }
    }
    fin >> c >> d;
    for(i=0; i<a; i++)
    {
        for(o=0; o<c; o++)
        {
            fout << A[i][o] << " ";
        }
        fout << A[i][d] << " ";
        for(o=c+1; o<d; o++)
        {
            fout << A[i][o] << " ";
        }
        fout << A[i][c] << " ";
        for(o=d+1; o<b; o++)
        {
            fout << A[i][o] << " ";
        }
        fout << endl;
    }
    return 0;
}
