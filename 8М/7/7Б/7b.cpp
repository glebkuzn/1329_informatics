#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
void read(int a, int b)
{
    int i,o;
    fin >> a >> b ;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fin >> A[i][o];
        }
    }
}
void fill (int a, int b)
{
    int i,k;
    int A[a][b];
    for(i=0;i<b;i++)
    {
        k=A[i][i];
        A[i][i]=A[i][b-i];
        A[i][b-i]=k;
    }
}
void print (int a, int b)
{
    int i,o;
    int A[a][b];
    for(i=0; i<a; i++)
    {
        for(o=0; o<b; o++)
        {
            fout << A[i][o];
        }
        fout << endl;
    }
}
int main()
{
    int a,b;
    read(a,b);
    fill(a,b);
    print(a,b);
    return 0;
}
