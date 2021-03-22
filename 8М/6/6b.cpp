#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
    long long a,b;
    fin >> a >> b ;
    fout << a+b << endl;
    return 0;
}
