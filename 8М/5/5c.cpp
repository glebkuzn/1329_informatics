#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    a=0;
    string S;
    getline (cin, S);
    while(S.find('@'))!=string::npos)
    {
        S[S.find('@')]=1;
        a++;
    }
    cout << a;
    return 0;
}

