#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,i;
    double q,w,e,r,t,y;
    q=0;
    w=0;
    e=0;
    r=1;
    t=1;
    y=1;
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
        r=1;
    }
    else
    {
        r++;
    }
    }
    if(D=="10"){
    int num = atoi(F.c_str());
    if(num>w)
    {
        w=num;
        t=1;
    }
    else
    {
        t++;
    }
    }
    if(D=="11")
    {
    int num = atoi(F.c_str());
    if(num>e)
    {
        e=num;
        y=1;
    }
    else
    {
        y++;
    }
    }
    }
    fout << r <<" "<< t <<" "<< y;
    return 0;
}
