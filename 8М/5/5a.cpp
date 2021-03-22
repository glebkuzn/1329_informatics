#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    getline (cin, S);
    if(S.find('@')==string::npos)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}

