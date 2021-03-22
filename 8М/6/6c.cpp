#include <fstream>
#include <string>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    int a,i;
    string S;
    getline (fin, S);
    a=S.size();
    for(i=a-1;i>=0;i--)
    {
    fout << S[i];
    }
    return 0;
}
