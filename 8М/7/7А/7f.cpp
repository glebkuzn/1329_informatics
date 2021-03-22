#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o;
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
        for(o=0; o<a; o++)
        {
            fout << A[o][i] << " ";
        }
        fout << endl;
    }
    return 0;
}
