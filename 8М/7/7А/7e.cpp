#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o;
    fin >> a ;
    int A[a][a];
    for(i=0; i<a; i++)
    {
        for(o=0; o<a; o++)
        {
            fin >> A[i][o];
        }
    }
    for(i=0; i<a; i++)
    {
        for(o=i+1; o<a; o++)
        {
            if(A[i][o]!=A[o][i])
            {
                fout << "NO";
                return 0;
            }
        }
    }
    fout << "YES";
    return 0;
}
