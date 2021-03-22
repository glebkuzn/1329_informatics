#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,i,o;
    fin >> a >> b ;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            if((i==0)||(o==0))
               {
                   A[i][o]=1;
               }
               else
               {
                   A[i][o]=A[i-1][o]+A[i][o-1];
               }
        }
    }
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fout.width(6);
            fout << A[i][o];
        }
        fout << endl;
    }
    return 0;
}
