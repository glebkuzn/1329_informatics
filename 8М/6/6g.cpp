#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,i;
    double q,w,e,r;
    q=0;
    w=0;
    e=0;
    r=1;
    string S,A,D,F,I,O;
    fin >> a;
    for(i=0;i<a;i++)
    {
    fin >> S >> A >> D >> F;
    int num = atoi(F.c_str());
    if(num>q)
    {
        q=num;
        r=1;
        I=S;
        O=A;
    }
    else
    {
        r++;
    }
    }
    if(r>1)
    {
        fout << r;
    }
    else
    {
        fout << I <<" "<< O;
    }
    return 0;
}
