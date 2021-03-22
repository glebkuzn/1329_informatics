#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o,q;
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
    }
    for(o=0; o<a; o++)
        {
            if(B[o]>c)
            {
                c=B[o];
                q=1;
            }
            else if(B[o]==c)
            {
                q++;
            }
        }
    fout << c << " " << q ;
    return 0;
}
