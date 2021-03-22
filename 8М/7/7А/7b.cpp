#include <iostream>
using namespace std;
int main()
{
    int a,b,i,o;
    cin >> a;
    b=a-1;
    int A[a][a];
    for(i=0;i<a;i++)
    {
        for(o=0;o<b;o++)
        {
            cout << "0 ";
        }
        cout << "1 ";
        for(o=o+1;o<a;o++)
        {
            cout << "2 ";
        }
        b--;
        cout << endl;
    }
    return 0;
}
