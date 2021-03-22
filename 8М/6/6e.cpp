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
    r=0;
    t=0;
    y=0;
    string S,A,D,F;
    fin >> a;
    for(i=0;i<a;i++)
    {
    fin >> S >> A >> D >> F;
    if(D == "9")
    {
    int num = atoi(F.c_str());
            q=q+num;
            r++;
    }
    if(D=="10")
    {
    int num = atoi(F.c_str());
            w=w+num;
            t++;
    }
    else if(D=="11")
    {
    int num = atoi(F.c_str());
            e=num;
            y++;
    }
    }
    fout << q/r <<" "<< w/t <<" "<< e/y;
    return 0;
}
