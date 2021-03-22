#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,i,q,w,e;
    q=0;
    w=0;
    e=0;
    string S,A,D,F;
    fin >> a;
    for(i=0;i<a;i++)
    {
    fin >> S >> A >> D >> F;
    if(D == "9")
    {
    int num = atoi(F.c_str());
        if(num>q)
        {
            q=num;
        }
    }
    if(D=="10")
    {
    int num = atoi(F.c_str());
        if(num>w)
        {
            w=num;
        }
    }
    else if(D=="11")
    {
    int num = atoi(F.c_str());
        if(num>e)
        {
            e=num;
        }
    }
    }
    fout << q <<" "<< w <<" "<< e;
    return 0;
}
