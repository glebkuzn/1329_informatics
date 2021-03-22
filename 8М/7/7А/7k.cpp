#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,b,c,i,o,p;
    p=0;
    fin >> a >> b >> c;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
            if(A[i][o]==0)
            {
                p++;
                if(p==c)
                {
                    fout << i+1;
                    return 0;
                }
            }
            else if(A[i][o]==1)
            {
                p=0;
            }
        }
    }
    fout << "0";
    return 0;
}
