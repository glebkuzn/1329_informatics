#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    a=0;
    string S;
    getline (cin, S);
    while(S.find_first_of("AaOoIiUuEeYy")!=string::npos)
    {
        S[S.find_first_of("AaOoIiUuEeYy")]=1;
        a++;
    }
    cout << a;
    return 0;
}

